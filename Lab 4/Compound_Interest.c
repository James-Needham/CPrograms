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
    printf("Please enter the principal:\n");
    scanf("%lf" , &principal);

    /* Ending the programme if the principal is less than 0.*/
    if (principal < 0)
    {
        printf("Invalid principal.");
        
        return 0;
    }

    printf("Please enter the rate:\n");
    scanf("%lf" , &rate);
    
     

    /* Ending the programme if the rate is not greater than or equal to 0 and not less than or equal to 100.*/
    if (!(rate >= 0 && rate <= 100))
    {
        return 0;
    }

    /* Getting user input for the number of years.*/
    printf("Please enter the number of years:\n");
    scanf("%lf" , &years);

    
    /* Ending the programme if number of years is less than 0.*/
    if (years < 0)
    {
        return 0;
    }

    /* Calculate amount once the number of years is greater than 0 and ending the programme once the result has been outputted.*/

    else if (years >= 1)
    {
        amount = (principal * pow(1 + (rate / (100*k)), years*k));
        printf("The amount is %.2lf\n" , amount);
    }

    return 0;
}