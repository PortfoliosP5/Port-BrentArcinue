//
//  pythagorasLab.c
//  Brent Arcinue Portfolio
//
//  Created by Arcinue, Brent Gregory on 9/9/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//

#include<stdio.h>
#include<math.h>
#include"labs.h"
int pythagorasLab(void)
{
    float a,b,c; 
    printf("Enter a value of A\n"); //value of a
    scanf("%f", &a);
    printf("Enter a value of B\n"); //value of b
    scanf("%f", &b);
    c = sqrt(a*a + b*b); //math.h function "sqrt()" used A*A + B*B = C
    printf("The length of the hypotenuse = %f\n", c);
return 0;
}
