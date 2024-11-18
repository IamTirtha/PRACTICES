#include<stdio.h>
#include<conio.h>
int main(){
 int a,b,c,sum=0;
 float avg;
 printf("Enter the 3 numbers:\t");
 scanf("%d %d %d",&a,&b,&c);
 sum=a+b+c;
 avg=(sum)/3;
 printf("\nTotal:%d",sum);
 printf("\nAverage:%f",avg);
return 0;
}
