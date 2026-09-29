#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, prime;
    printf("Enter an integer\n");
    scanf("%d", &num);

    if (num<= 1)
    {
        prime=0;
    }else{
    for (i=2; i<=num / 2; i++)
    {
        if (num % i == 0){
            prime=0;
            break;
        }
    }

    }if (prime){
    printf("%d is a prime number.\n",num);
    }
    else{
        printf("%d is not a prime number.", num);
    }
    return 0;
}
