//
//  timeLab.c
//  Brent Arcinue Portfolio
//
//  Created by Arcinue, Brent Gregory on 9/9/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//

#include <stdio.h>
#include "labs.h"
int timeLab(void)
{
    int s,d,h,i,m,sl; 
    printf("Enter the amount of seconds desired\n");
    scanf("%d", &s); //user input
    d=s/86400; //conversion from seconds to days
    h=s/3600; //conversion from seconds to hours
    i=s%3600;
    m=i/60;
    sl=i%60; 
    printf("In %d seconds there are\n %d days\n %d hours\n %d minutes\n %d seconds\n",s,d,h,m,sl);
    return 0;
}
