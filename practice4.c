#include<stdio.h>
#include<math.h>
int main(){
 float i;

 printf("Enter your mark:");
 scanf("%f",&i);

  if(i<40){printf("You have failed.");}
 else if(i>=40&&i<=60){printf("You have got second class.");}
 else if(i>=60&&i<=70){printf("you have got First class.");}
 else {printf("Distinction.");}
return 0;
}
