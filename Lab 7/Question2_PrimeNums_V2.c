/*James Needham*/
/*19 November 2020*/
/*Question 2 Lab 7 (Get all primes up to a certain number)*/

/*Add the necessary C Libraries*/
#include <stdio.h>
#include <math.h>

#define MAX_SIZE 10000 /* Define the maximum size of the array */


int main(void)
{

  int a[MAX_SIZE]; 
  int b[MAX_SIZE]; /*Create a list b[MAX_SIZE] to store the all prime elements temporarily*/ 
  /*Add the counters for loops*/
  int N;
  int k = 0;
  int i;
  int L;  /* the current size of the list */


    /* read in the upper limit. Keep reading until
     a valid number between 3 and the maximum that
     can be handled by the array is entered */
  printf("Enter the upper limit:\n");
  do {
      scanf("%d", &N);
    } while (N<3 || N>MAX_SIZE+2);
    

  for(i=0; i<N-1; i++)
  {
      a[i] = i+2;   /* Create an array with all numbers up to the number the user inputted*/
  }

  L = 1;    /*Start L at 1 so the number 1 is skipped in the loop */

    for (i=1;i<N;i++)
    {
        b[0] = a[k];

        for(i=k+1;i<N;i++)
        {
            /*If the ith element divided by the kth element has a remainder then add the element in a[i] to the array b[]*/
            if(a[i] % a[k] == 1)  
            {
                b[L] =a[i];
                L++;
            }
        }

        for(i=0;i<N;i++)
        {
            a[i] = b[i];    /*Put all the prime elements back into the original array a[]*/
        }
    }

        

    L--;
    
    /*Print out all the prime elements stored in array a[]*/
    for(i=0;i<L;i++)
       printf("%d ",a[i]);

    printf("\n");

   

    /*End the program*/
    return 0;
}