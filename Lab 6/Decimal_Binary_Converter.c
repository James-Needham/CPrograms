/* James Needham */
/*3 November 2020*/
/*Decimal to Binary Converter Q4 (Lab 6)*/

/*Adding the neccessary C Libraries */
#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    
    
    int N;
    int Num;
    int digit = 0;
    int a[10];
    
    
    printf("Enter the decimal number:\n");    
    scanf("%d",&N);
    Num = N;

         
    for(digit=0;N>0;digit++)    
    {    
        a[digit]=N%2;    
        N=N/2;    
    }    
    printf("%d in base 2 is ", Num); 

       
    for(digit=digit-1;digit>=0;digit--)    
    {    
        printf("%d",a[digit]);    
    }

   
    return 0;  
}  