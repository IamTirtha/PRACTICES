#include <stdio.h>
#include <stdlib.h>

int main()
{
   int intvalue;
   float floatvalue;
   printf("Enter the value of integer:");
   scanf("%d",intvalue);
   floatvalue=intvalue;
   printf("The value in float is:%d->%.2f\n",floatvalue);

   printf("Enter the value of float:");
   scanf("%f",floatvalue);
   intvalue=(int)floatvalue;
   printf("The value in integer is:%.2f->%d",intvalue);
    return 0;
}
