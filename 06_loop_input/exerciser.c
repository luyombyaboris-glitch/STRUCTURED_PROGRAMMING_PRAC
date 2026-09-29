#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    float principal, rate, interest;
    while (1){
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
        if (principal== -1)
        {
            break;
        }
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("\nEnter interest days: ");
        scanf("%d", &days);
        interest =(principal * rate *days)/365.0;
        printf("The interest charge is $%.2f\n\n", interest);
    }
    return 0;
}
