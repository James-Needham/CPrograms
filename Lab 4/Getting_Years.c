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

    /* Getting user input for the amount.*/
    printf("Please enter the amount:\n");
    scanf("%lf" , &amount);
    /* Ending the programme if amount is less than 0.*/
    if (amount < 0)
    {
        printf("Invalid amount.");
        return 0;
    }

    printf("Please enter the principal:\n");
    scanf("%lf" , &principal);
    /* Ending the programme if amount is less than 0.*/
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
        printf("Invalid rate.");
        return 0;
    }
    

    

    /* Calculate amount once the number of years is greater than 0 and ending the programme once the result has been outputted.*/


    years = (log(amount/principal) / log(1 + (rate/(100*k))) / k) ;
    printf("The number of years is %.2f\n" , years);
    


    
    
    

    return 0;
}