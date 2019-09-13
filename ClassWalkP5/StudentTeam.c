//
//  StudentTeam.c
//  ClassWalkP5
//
//  Created by Natarajan, Praveen on 9/3/19.
//  Copyright © 2019 Natarajan, Praveen. All rights reserved.
//
#include <stdio.h>
#include "StudentTeam.h"
#include <math.h>


int StudentAskQuestion(void){
    double Adjacent=0, Opposite=0, Hypotenuse;
    printf("enter first number u fool\n");
    scanf("%lf", &Adjacent);
    printf("enter second leg\n");
    scanf("%lf", &Opposite);
    Hypotenuse = sqrt((Adjacent * Adjacent)+ (Opposite * Opposite));
    printf("%lf", Hypotenuse);
    return 0;
}
