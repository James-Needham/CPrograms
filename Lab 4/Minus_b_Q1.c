/* Adding necessary C Libraries */
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Creating Variables */
    double a, b, c;

    double r1, r2;

    double discriminant;

    /* Getting user input for the equation's variables.*/

    printf("Please enter the value for coefficient a:\n");
    scanf("%lf" , &a);

    printf("Please enter the value for coefficient b:\n");
    scanf("%lf" , &b);

    printf("Please enter the value for coefficient c:\n");
    scanf("%lf" , &c);

    /* Seeing if the roots are real or imaginary*/
    discriminant = (pow(b,2) - (4*a*c));

    /* State if the roots are real and calculate the values of the roots*/
    if (discriminant > 0)
    {
        printf("The number of real roots is 2.\n");
        r1 = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
        r2 = ((-b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
        printf("The value of the first root is %.5lf.\n" , r1);
        printf("The value of the second root is %.5lf.\n" , r2);
    }

    /* Notify the user if the roots are imaginery*/
    else if (discriminant < 0)
    {
        printf("The number of real roots is 0.\n");
    }

    /* State that there is only 1 root and calculate its value*/
    else if (discriminant == 0)
    {
        printf("The number of real roots is 1.\n");
        r1 = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
        printf("The value of the first root is %.5lf.\n" , r1);
    }

    

    

    




    
    return 0;
}