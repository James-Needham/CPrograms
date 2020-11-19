/*James Needham*/
/*17/11/2020*/
/*Question 1 Lab 7*/

/*Adding necessary C Libraries*/
#include <stdio.h>
#include <stdbool.h>

/*Defining Max size of an array*/
#define MAX_SIZE 5000
    
int main()
{
    /*Declaring the variables */
    int N = 0;
    double tmp = 0;
    int i = 0;
    int j = 0;
    int t = 0;
    double max = 0;
    int maxindx = 0;
    int k = 0;
    double a[MAX_SIZE];
    double threshold = 0;
    FILE *fp;

    /*Asking the user to input number of values to read, the threshold and the value of k to find the kth element*/
    printf("Enter number of values to read from floats.txt\n");
    scanf("%d", &N);
    printf("Enter the threshold value\n");
    scanf("%lf", &threshold);
    printf("Enter the value of k\n");
    scanf("%d", &k);
    /*Open the txt file to scan in its contents*/
    fp = fopen("floats.txt", "r");
    /*Put the first N elements from the file into the array a[]*/
    for (i = 0;i<N;i++)
        {
        fscanf(fp, "%lf", &a[i]);
        }
    /* Close the file*/
    fclose(fp);

     
    /*Sorting the array in assending order. This is done by comparing each element to the previous maximum elemnent */
    for (j=0;j<k;j++)
    {
      max = a[j];
      maxindx=j;

      for (i = j+1;i<N;i++)
      {
	    if (a[i]<max)
	    {
            max = a[i];
	        maxindx = i;
	    }
	  }
      
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