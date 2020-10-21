/* Adding necessary C Libraries */
#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Creating Variables */
    double a, b, c;

    double r_one, r_two;

    double root;

    double equation_value_one;

    double equation_value_two;

    /* Getting user input for the equation's variables.*/

    printf("Please enter the value for coefficient a:\n");
    scanf("%lf" , &a);

    printf("Please enter the value for coefficient b:\n");
    scanf("%lf" , &b);

    printf("Please enter the value for coefficient c:\n");
    scanf("%lf" , &c);

    /* Seeing if the roots are real or imaginary*/
    root = (pow(b,2) - (4*a*c));

    /* State if the roots are real and calculate the values of the roots*/
    if (root > 0)
    {
        printf("The number of real roots is 2.\n");
        r_one = (2*c) / ((-b) - sqrt(pow(b,2) - (4*a*c)));
        r_two = (-b - sqrt(root)) / (2 * a);
        printf("The value of the first root is %.10lf.\n" , r_one);
        equation_value_one = (a * r_one * r_one) + (b * r_one) + c;
        equation_value_two = c + (b * r_two) + (a * r_two * r_two) ;

        printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n" , r_one , equation_value_one);
        printf("The value of the second root is %.10lf.\n" , r_two);
        printf("The value of the quadratic equation evaluated at %.10lf is %.6lf.\n" , r_two , equation_value_two);
    }

    /* Notify the user if the roots are imaginery*/
    else if (root < 0)
    {
        printf("The number of real roots is 0.\n");
    }

    /* State that there is only 1 root and calculate its value*/
    else if (root == 0)
    {
        printf("The number of real roots is 1.\n");
        r_one = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
        printf("The value of the first root is %.5lf.\n" , r_one);
    }

    

    

    




    
    return 0;
}