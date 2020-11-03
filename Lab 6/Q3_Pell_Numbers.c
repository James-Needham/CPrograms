/* James Needham */
/*3 November 2020*/
/*Pell Numbers Q3 (Lab 6)*/

/*Adding the neccessary C Libraries */
#include <stdio.h>

int main(void)
{
    
    /* Creating the variables */
    int nterms;
    int p_minus_one = 0;  
    int p_minus_two = 1; 
    int p_zero = 0;
    int i; 
     
    

    /* Asking the user how many Pell numbers to print*/
    printf("Enter how many pell numbers to print:\n");
    scanf("%d", &nterms);

    /*If the value of the number of Pell numbers is less than or equal to zero, ask the user again to input how many Pell numbers to print.*/
    if (nterms <= 0)
    {
        return 0;
    }

    /* Output the value of P0 */
    printf("%d ", p_zero);
    
    /*Use a for loop to run the Pell numbers calculator for the number of pell numbers */
    for(i = 1; i < nterms; i++)
    {
        p_zero = (2 * p_minus_one) + p_minus_two;  
        p_minus_two = p_minus_one;  
        p_minus_one = p_zero;
        
        /*Print each value of each nth term*/
        printf("%d ", p_zero);
    }
    
    /* End the programme */
    return 0;
}
