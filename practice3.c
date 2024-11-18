#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p,r,t;
    float si=0;
    float ci=0;
    printf("Enter the value of Pricipal amount:");
    scanf ("%d",&p);
    printf("Enter the value of Rate of interest:");
    scanf("%d",&r);
    printf("Time:");
    scanf("%d",&t);
    si=(p*r*t)/100;
    ci=p*((1+r/10)^t)-p;
    printf("the value of simple interest is%f",si);
    printf("\nthe value of compound interest is%f",ci);
    return 0;

}
