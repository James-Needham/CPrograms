/* James Needham */
/*3 November 2020*/
/*Decimal to Binary Converter Q4 (Lab 6)*/

/*Adding the neccessary C Libraries */
#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    
    /* Creating the variables */
    int N;
    int Num;
    int digit = 0;
    int a[10];
    
    /* Asking the user what decimal numbers to convert to binary. */
    printf("Enter the decimal number:\n");    
    scanf("%d",&N);
    Num = N;

    if(N > 0)
    {
        /* Use a for loop to get the remainder of each division calculated from the users input down to 1 divided by 0.*/     
    for(digit=0;N>0;digit++)    
    {    
        a[digit]=N%2;    
        N=N/2;    
    }    
    printf("%d in base 2 is ", Num); 

    /*Use a for loop to output the remainders to create the binary value of the decimal number */   
    for(digit=digit-1;digit>=0;digit--)    
    {    
        printf("%d",a[digit]);    
    }
    }
    
    /* If the decimal input is zero then output its binary number as zero*/
    else if(N == 0)
    {
        printf("%d in base 2 is 0",Num);
    }
    

    /* End the programme */    
    return 0;  
}  