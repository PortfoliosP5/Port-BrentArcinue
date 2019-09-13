//
//  temperatureLab.c
//  Brent Arcinue Portfolio
//
//  Created by Arcinue, Brent Gregory on 9/9/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "labs.h"
int temperatureLab(void)
{
    
    float a,b;
    printf("State your temperature in Farenheit\n");
    scanf("%f", &a); //farenheit input
    
    b = (a - 32) * 5/9; //farenheit conversion equation
    
    printf("The temperature in celsius is %.3f\n", b); //celsius output
    
    return 0;
}
