#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mortgage_amount, mortgage_term, interest_rate, total_interest, total_payable, monthly_payment;
    while(1){
        printf("Enter the mortgage amount in dollars (-1 to quit): ");
        if(scanf("%f", &mortgage_amount) != 1 || mortgage_amount == -1) {
            break;
        }
        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortgage_term);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        total_interest = mortgage_amount *(interest_rate / 100.0f)*mortgage_term;
        total_payable =mortgage_amount + total_interest;
        monthly_payment = total_payable/ (mortgage_term* 12.0f);
        printf("The Monthly Payable Interest is: $%.2f\n\n", monthly_payment);
    }

    return 0;
}
