/*James Needham (20316686)*/
/*24 November 2020*/
/*Lab 8 Question 1 (Find the value in an integer array a[] of length N that occurs at least (N/2 + 1) times, if such a value exists)*/

/*Add the necessary C Libraries*/
#include <stdio.h>

/*State the maximum size of the array*/
#define MAX_SIZE 5000

int main(void)
{
  /*Declare the variables*/
  int N;
  int a[MAX_SIZE];
  int i;
  int current_element;
  int occurrences = 0;
  
  /*Scan the size of the array*/
  scanf("%d",&N);
  /*Scan all the elements into the array*/
  for (i=0;i<N;i++)
    {
      scanf("%d", &a[i]);
    }

  /* fill in your answer here ... */
  /*Run the loop for every element in the array*/
    for (i = 0; i < N; i++) {
        /*If the variable current element is equal to a[i] increment the occurrences variable by one*/
        if (current_element == a[i]) {
            occurrences++;
    
        /*If occurrences equals zero set the variable current elemnet to a[i] (the current elemnet in the loop) and increment the occurrences by 1.*/
        } else if (occurrences == 0) {
            current_element = a[i];
            occurrences++;
        
        /*Otherwise decrement the occurrences by one*/
        } else {
            occurrences--;
        }
    }
    
    /*If occurrences is equal to zero state that no value appears more than N/2 times in the array, where N is the size of the array*/
    if (occurrences == 0)
    {
        printf("No value appears more than %d times in the array.",N/2);
    
    /*Otherwise output how many times the most common element appeared in the array more than N/2 times in the array, where N is the size of the array*/
    } else {
        printf("%d appears more than %d times in the array.",current_element, N/2);
    }
    
    /*End the program*/
  return 0;
}
