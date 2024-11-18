#include<stdio.h>
int main(){
 int n,r,c,arm=0;
 printf("Enter any number:");
 scanf("%d",&n);
 c=n;
 while(n>0){                 //153
   r=n%10; //3
   arm=(r*r*r)+arm;
   n=n/10;
 }
 if(c==arm){
    printf("The number is arm strong.");}
    else {printf("Not Arm strong.");
 }
 return 0;
}
