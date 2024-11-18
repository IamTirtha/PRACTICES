#include<stdio.h>
#include<conio.h>
int main(){
 int a,b,add,sub,multi,div,mod,choice;
 printf("Enter 2 numbers:\t");
 scanf("%d %d",&a,&b);
 add=a+b;
 sub=a-b;
 multi=a*b;
 div=a/b;
 mod=a%b;
 printf("Enter number of your choice to do further operation:\t");
 printf("1.Addition.\t");
 printf("2.Subtraction.\t");
 printf("3.Multiplication.\t");
 printf("4.Division.\t");
 printf("5.Modulus.\t");
 printf("Enter your choice:");
 scanf("%d",&choice);
 switch(choice){
    case 1:
      printf("You want addition and the result is=%d",add);
    break;

    case 2:
      printf("You want substraction and the result is=%d",sub);
    break;

    case 3:
      printf("You want multiplication and the result is=%d",multi);
    break;

    case 4:
      printf("You want divission and the result is=%d",div);
    break;

    case 5:
      printf("You want modulus and the result is=%d",mod);
    break;

    default:
      printf("Invalid choice.");
    break;

 }
 return 0;
}
