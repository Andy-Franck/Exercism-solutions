#include "two_fer.h"
#include<string.h>
#include<stdio.h>

void two_fer(char *buffer, const char *name){
    char full[100] = "One for you, one for me.";
    if (name == NULL) {strcpy(buffer, full);return;}
    int len = strlen(name);

    if (len == 0) strcpy(buffer, full);
    else{
        char prompt[100] = "One for ";
        char prompt2[100] = ", one for me.";

        char *ptr = strcat(prompt, name);
        ptr = strcat(prompt, prompt2);
        strcpy(buffer, prompt);      

        printf("%s ", ptr);
        
    }
}