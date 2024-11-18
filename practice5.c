#include<stdio.h>
int main()
{   int i,j;
    printf("Enter number:");
    scanf("%d",&i);
    printf("Enter no of rows:");
    scanf("%d",&j);

    for(j=1;j<=10;j++){printf("%d x %d = %d\n", i,j,i*j);}


    return 0;
}
