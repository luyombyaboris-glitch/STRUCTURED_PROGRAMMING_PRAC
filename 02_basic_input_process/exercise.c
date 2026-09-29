#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=0, y=0, z=0, product;//initialization
    printf("A PROGRAM THAT CALCULATES THE PRODUCT OF THREE INTEGERS\n");
    printf("\nEnter integer  one(x)   : ");
    scanf("%d", &x);
    printf("Enter integer two(y)    : ");
    scanf("%d", &y);
    printf("Enter integer three(z)  : ");
    scanf("%d", &z);

    product=x*y*z;
    printf("\nThe product is:%d",product);

    return 0;
}
