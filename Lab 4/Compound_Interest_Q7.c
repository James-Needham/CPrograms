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
    int option;

    printf("Which value would you like to compute: 1) Amount 2) Principal 3) Rate 4) Number of years\nSelect either 1, 2, 3 or 4.\n");
    scanf("%i" , &option);

    if (option == 1)
    {
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
        if (!(rate > 0 && rate < 100))
        {
            printf("Invalid rate.");
            return 0;
        }

        /* Getting user input for the number of years.*/
        printf("Please enter the number of years:\n");
        scanf("%lf" , &years);

    
        /* Ending the programme if number of years is less than 0.*/
        if (years <= 0)
        {
            printf("Invalid number of years.");
            return 0;
        }

        /* Calculate amount once the number of years is greater than 0 and ending the programme once the result has been outputted.*/

        else if (years >= 1)
        {
            amount = (principal * pow(1 + (rate / (100*k)), years*k));
            printf("The amount is %.2lf\n" , amount);
        }
    }

    else if (option == 2)
    {
        /* Getting user input for the compound interest variables.*/
        printf("Please enter the amount:\n");
        scanf("%lf" , &amount);
        if (amount < 0)
        {
            printf("Invalid amount.");
            return 0;
        }
        
        printf("Please enter the rate:\n");
        scanf("%lf" , &rate);
        
        /* Ending the programme if the rate is not greater than or equal to 0 and not less than or equal to 100.*/
        if (!(rate > 0 && rate < 100))
        {
            printf("Invalid rate.");
            return 0;
        }

        /* Getting user input for the number of years.*/
        printf("Please enter the number of years:\n");
        scanf("%lf" , &years);

        
        /* Ending the programme if number of years is less than 0.*/
        if (years <= 0)
        {
            printf("Invalid number of years.");
            return 0;
        }

        /* Calculate principal once the number of years is greater than 0 and ending the programme once the result has been outputted.*/

        else if (years >= 1)
        {
            principal = (amount / pow(1 + (rate / (100*k)), years*k));
            printf("The principal is %.2lf\n" , principal);
        }
        }
        
    else if (option == 3)
    {
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
        if (years <= 0)
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
    }

    else if (option == 4)
    {
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
        if (!(rate > 0 && rate < 100))
        {
            printf("Invalid rate.");
            return 0;
        }
        

        

        /* Calculate amount once the number of years is greater than 0 and ending the programme once the result has been outputted.*/


        years = (log(amount/principal) / log(1 + (rate/(100*k))) / k) ;
        printf("The number of years is %.2f\n" , years);
        


        
        
        

        return 0;
    }

    else if (option == 5)
    {
        printf("Invalid option.");
    }
    
    return 0;
}
