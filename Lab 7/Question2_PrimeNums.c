/*James Needham*/
/*18 November 2020*/
/*Filter Search Prime Numbers*/
/*Question 2 Lab 7*/

/*Add the necessary C libraries*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*Define the maximum size of the array*/
#define MAX_SIZE 10000


int main(void) {
  /*Declare all the variables*/
  int a[MAX_SIZE];
  int N;
  bool prime = true;
  int L = 0;  /* the current size of the list */
  int i, k, j;
  

   /* read in the upper limit. Keep reading until
     a valid number between 3 and the maximum that
     can be handled by the array is entered */

  /*Ask the user for the upper limit and scan it into the integer N*/
  printf("Enter the upper limit:\n");
  do {
      scanf("%d", &N);
    } while (N<3 || N>MAX_SIZE+2);

  /* write your solution here ... */

  /*Loop through the array*/
  for (k=2;k<N;k++) {
      prime = true; /*Set the boolean varaible prime to true*/
      for(j=0; j < L && prime; j++) {
          if(k % a[j] == 0) { /*If the element is divisable by k then the element is not prime*/
              prime = false;  /*Set the varaible prime to false if the element is not a prime number*/
          }
      }
      /*If the number is prime add it to the list*/
      if (prime) {
          a[L++] = k;
      }
  }
  
  /* write out the result  - DO NOT CHANGE THIS */
  for(i=0;i<L;i++)
    printf("%d ",a[i]);
  printf("\n");
}