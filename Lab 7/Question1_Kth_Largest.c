/*James Needham*/
/*17/11/2020*/
/*Question 1 Lab 7*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5000

int main(void)
{
  int i, k, N;
  int j = 0;
  int t = 0;
  double max = 0;
  int maxindx = 0;
  double tmp = 0;
  double a[MAX_SIZE];
  double threshold;
  FILE *fp;

  printf("Enter number of values to read from floats.txt\n");
  scanf("%d", &N);
  printf("Enter the threshold value\n");
  scanf("%lf", &threshold);
  printf("Enter the value of k\n");
  scanf("%d", &k);
  fp = fopen("floats.txt", "r");
  for (i = 0;i<N;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);
  
  /* write your solution here */
  /*Sorting the array in assending order. This is done by comparing each element to the previous maximum elemnent */
    for (j=0;j<k;j++)
    {
      max = a[j]; /* Set max to the jth element in the array*/
      maxindx=j;  /*Record the elements position in the array*/

      for (i = j+1;i<N;i++)
      {
	    if (a[i]<max) /*If an element is greater than max */
	    {
            max = a[i]; /*Replace max with the new largest value*/
	        maxindx = i; /*Record the maximum value's position in the array*/
	    }
	  }
      
      /*Set j as the new largest element and assign the previous largest element to tmp*/
      tmp = a[j];
      a[j] = a[maxindx];
      a[maxindx] = tmp;
    }

    /*Check if the elemnent is greater than the threshold*/
    for (i = 0;i<N;i++)
    {
        if (a[i]>threshold)
        {
            t++;
        }
    }

    /*If the number of values less than the threshold is less than the value k state that the array doesnt have the k value.*/
    if ((N-t)<k) {
        printf("The array does not contain %d numbers less than %.5lf",k,threshold);
    } 
    /*Otherwise output the kth element with the threshold and the element searched for*/
    else {
        printf("The k=%d largest value in the array that is less than %.5lf is %.5lf\n", k, threshold, a[N-k-t]);
    }

    /*End the program*/
    
    return 0;
}


	  


  
