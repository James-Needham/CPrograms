/* Add necessary C libraries */
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* creating variables */
    
    double principal;
    double rate;
    double years;
    double amount;
    double k = 12;

    /* Getting user input for the compound interest variables.*/
    printf("Please enter the amount:\n");
    scanf("%lf" , &amount);
    if (amount < 0)
    {
        printf("Invalid amount.");
        return 0;
    }
    
    printf("Please enter the principal:\n");
    scanf("%lf" , &principal);
    if (principal < 0)
    {
        printf("Invalid principal.");
        return 0;
    }
    
    


    /* Getting user input for the number of years.*/
    printf("Please enter the number of years:\n");
    scanf("%lf" , &years);

    
    /* Ending the programme if number of years is less than 0.*/
    if (years < 0)
    {
        printf("Invalid number of years.");
        return 0;
    }

    /* Calculate amount once the number of years is greater than 0 and ending the programme once the result has been outputted.*/

    else if (years >= 1)
    {
        rate = (100 * k) * (pow(amount/principal, 1 / (years * k)) -1);
        printf("The rate is %.2f\n" , rate);
    }

    return 0;
}