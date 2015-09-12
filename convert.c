/*
 * convert.c
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

int main()
{
    int fahrenheit, celcius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahrenheit = lower;
    
    printf("-------------\n");
    printf("|  F  |  C  |\n");
    printf("-------------\n");
	
    while (fahrenheit <= upper) {
		
        celcius = 5 * (fahrenheit - 32) / 9;
        printf("| %3d | %3d |\n", fahrenheit, celcius);
        fahrenheit = fahrenheit + step;

    }
		
    printf("-------------\n");

    return 0;
}

