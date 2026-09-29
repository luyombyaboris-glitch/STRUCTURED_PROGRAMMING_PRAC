#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=0, number, largest=0 ;
    printf("Enter 10 n0n negative numbers to find the largest:\n");

    while(counter < 10) {
        printf("\nEnter number %d: ", counter + 1);
        scanf("%d", &number);
        if (number > largest){
            largest = number;
        }
        counter++;

    }
    printf("\nThe largest number is: %d\n", largest);
    return 0;
}
