/*
 * temperature.c
 * 
 * Copyright 2015 Robert Pelley <rob@marlin>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    if (argc != 5)

        printf("Usage: temperature -[c|f] lower upper step\n");
        
    else {
	
		int lower = atoi(argv[2]);
		int upper = atoi(argv[3]);
		int step = atoi(argv[4]);
		int fahrenheit, celcius;
    
 		if ((strcmp(argv[1],"-f") != 0) && (strcmp(argv[1],"-c") != 0))
 		
			printf("Conversion Type must be c or f\n");
		
		else if (lower > upper)
		
			printf("Lower Bound must be less than or equal to Upper Bound\n");
			   
		else if (lower < 0 || lower > 100)
		
			printf("Lower Bound must be between 10 and 100\n");

        else if (upper < 100 || upper > 1000)
        
			printf("Upper Bound must be between 100 and 1000\n");
						
		else if (step < 1 || step > 100)
		
			printf("Step must be between 1 and 100\n");
		
		else {
			   
			printf("---------------\n");

			if (strcmp(argv[1],"f") == 0) {

				fahrenheit = lower;

				printf("|    F |    C |\n");
				printf("---------------\n");

				while (fahrenheit <= upper) {
				
					celcius = 5 * (fahrenheit - 32) / 9;
					printf("| %4d | %4d |\n", fahrenheit, celcius);
					fahrenheit = fahrenheit + step;

				}
				
			}
			else {

				celcius = lower;

				printf("|    C |    F |\n");
				printf("---------------\n");

				while (celcius <= upper) {
				
					fahrenheit = ((9 * celcius) / 5) + 32;
					printf("| %4d | %4d |\n", celcius, fahrenheit);
					celcius = celcius + step;

				}

			}        
				   
			printf("---------------\n");
			
		}
    	
    }
    
    return 0;

}
