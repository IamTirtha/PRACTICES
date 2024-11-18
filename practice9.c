#include<stdio.h>
#include<stdlib.h>
int main(){
 int num,realnum,reversednum=0,r;
 printf("Enter the number:");
 scanf("%d",&num);
 realnum=num; //121. Store the input value somewhere else because it will be used in loop.
 while(num!=0){
    r=num%10;    //Learn Coding YT for logic.
    reversednum=(reversednum*10) + r;
    num=num/10; //update the number.
 }
 if(realnum==reversednum) printf("%dNumber is palindrome.",num);
 else printf("%dNumber is not palindrome.",num);

  return 0;
}
