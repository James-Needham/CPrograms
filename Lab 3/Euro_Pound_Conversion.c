#include <stdio.h>

int main(void)
{
    double euros;
    double amount;

    printf("Please enter the amount in Euros:\n");
    scanf("%lf" , &euros);

    amount = euros * 0.8;
    
    printf("%.2f Euro is equivalent to %.2f pounds sterling",euros,amount);
    return 0;

}
