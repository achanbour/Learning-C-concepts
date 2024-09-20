#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, monthly_interest_rate;
    float balance_1, balance_2, balance_3;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = (6.0 / 100.0) / 12.0;
    balance_1 = (loan_amount - monthly_payment) + (loan_amount * monthly_interest_rate);
    printf("Balance remaining after first payment: %.2f\n", balance_1);
    balance_2 = (balance_1 - monthly_payment) + (balance_1 * monthly_interest_rate);
    printf("Balance remaining after second payment: %.2f\n", balance_2);
    balance_3 = (balance_2 - monthly_payment) + (balance_2 * monthly_interest_rate);
    printf("Balance remaining after third payment: %.2f\n", balance_3);

    return 0;
}