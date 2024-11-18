#include<stdio.h>
#include<math.h>
float main(){
 float a,b,c,d,r1,r2;
 printf("Enter the value of a:");
 scanf("%f",&a);
  printf("\nEnter the value of b:");
 scanf("%f",&b);
  printf("\nEnter the value of c:");
 scanf("%f",&c);
 d=(b*b)-(4*a*c);
 if(d==0){
    printf("\nThe roots are real and equal.");
    r1=(-b)/(2*a);
    r2=(-b)/(2*a);
    printf("\tThe root values are r1=%f and r2=%f.",r1,r2);
 }
else if(d>0){
   printf("\nThe roots are real.");
    r1=((-b)+sqrt(d))/(2*a);
    r2=((-b)-sqrt(d))/(2*a);
    printf("\tThe root values are r1=%f and r2=%f.",r1,r2);
}
else {printf("\nThe roots values are imaginary!!!!!!");}


 return 0;
}
