#include "space_age.h"

float get_orbital_period(planet_t planet){
	switch (planet)
	{
		case MERCURY:
			return 0.2408467;
        case VENUS:
			return 0.61519726;
        case EARTH:
			return 1;
        case MARS:
			return 1.8808158;
        case JUPITER:
			return 11.862615;
        case SATURN:
			return 29.447498;
        case URANUS:
			return 84.016846;
        case NEPTUNE:
			return 164.79132;
            
	}
	
	//unhandled planet?
	return -1;

}

float age(planet_t planet, int64_t seconds){
    double age =  seconds/(EARTH_SECONDS*get_orbital_period(planet));

    return age > 0 ? age : -1.0;
}