//Write a C program to print all the prime numbers between two numbers.
#include<stdio.h>
#include<conio.h>
int main(){
 int i,j,n1,n2;
 printf("Enter the range:");
 scanf("%d %d",&n1,&n2);
 for(i=n1;i<=n2;i++){
    for(j=2;j<=i;j++){
        if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\t",j);
    }
    return 0;
 }
