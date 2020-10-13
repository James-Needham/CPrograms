#include <stdio.h>

int main(void)
{
    double celsius;
    
    double fahrenheit;

    printf("Please enter the temperature in Fahrenheit:\n");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32)* 5 / 9;  

    printf("%.2f degrees Fahrenheit is equivalent to %.2f degrees Celsius" , fahrenheit, celsius);
    
    return 0;
}
