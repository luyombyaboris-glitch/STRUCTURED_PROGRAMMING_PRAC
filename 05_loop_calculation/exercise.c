#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, factorial ;

    printf("===================\n");
    printf("%-5s\t%-15s\n", "m","factorial (m!)");
    printf("----------------------------\n");
    for (i=1; i<=5; i++){
        factorial=1;
        for (j=1; j<=i; j++){
            factorial*= j;
        }
        printf("%-5d\t%-15lld\n" , i, factorial);
    }

    return 0;
}
