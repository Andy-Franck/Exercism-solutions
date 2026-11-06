#include "rna_transcription.h"
#include<stdlib.h>
#include<string.h>

char *to_rna(const char *dna){
    size_t len = strlen(dna);
    char *rna = malloc(len + 1);

    size_t i = 0;
    if (rna == NULL) {
        return NULL; // Handle allocation failure
    }
    
    for(const char *p = dna; *p!='\0';p++,i++){
        
        switch (*p) {
          case 'G': *(rna+i)='C'; break;
          case 'C': *(rna+i)='G'; break;
          case 'T': *(rna+i)='A'; break;
          case 'A': *(rna+i)='U'; break;
        }
 
    }

    rna[i] = '\0';

    return rna;
}