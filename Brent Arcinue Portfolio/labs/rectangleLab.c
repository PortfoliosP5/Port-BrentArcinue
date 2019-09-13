//
//  rectangleLab.c
//  Brent Arcinue Portfolio
//
//  Created by Arcinue, Brent Gregory on 9/9/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include "labs.h"
int rectangleLab(void)
{
    
    float l,w,a,p;
    printf("What is the length of your rectangle?\n");
        scanf("%f", &l); //length of rectangle
    
    printf("What is the width of your rectangle?\n");
        scanf("%f", &w); //width of rectangle
    
    a = l * w; //area formula using inputs
    p = (l*2) + (w*2); //perimeter formula using inputs
    
    printf("Perimeter = %.2f\nArea = %.2f\n", p,a);
    
    return 0;
    
}
