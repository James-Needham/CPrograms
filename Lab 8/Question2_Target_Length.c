/*James Needham*/
/*24 November 2020*/
/*Question 2 Lab 8 (A pair of lengths that sum exactly to a target length)*/

/*Add necessary C libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Define the maximum size of an array*/
#define N 100000

int main(void)
{
  /*Declare the variables*/
  
  int n;  /* The number of lengths */
  int x; /* The target length */
  int lengths[N]; /* The array of available lengths */
  int i;
  int whichfile=1; /*Variable to choose which file to scan in*/
  int possible_lengths2[N]; /*The array of possible lengths for length2*/
  int possible_val2 = 0;
  int length1 = 0;
  int length2 = 0;
  int j;
  int k = 0;
  
  FILE *fp;

  /*Choose which file to read from*/
  scanf("%d", &whichfile);
  
  switch (whichfile) {
     case 1:
        fp = fopen("testcase_small_sorted.txt", "r");
        break;
    case 2:
        fp = fopen("testcase_large_sorted.txt", "r");
        break;
    case 3:
        fp = fopen("testcase_small_nomatch_sorted.txt","r");
        break;
    case 4:
        fp = fopen("hidden_small_sorted.txt","r");
        break;
    case 5:
        fp = fopen("hidden_large_sorted.txt","r");
        break;
      
  }

  fscanf(fp, "%d", &x);
  fscanf(fp, "%d", &n);

  
  /*Scan in the elements from the file into the lengths array and then close the file*/
  for (i=0;i<n;i++)
    fscanf(fp, "%d", &lengths[i]);
  

  fclose(fp);

  /* Now all the input data has been read in 
     search for the required pair of lengths... */
     
  /*Convert the x from centimeters to nanometres.*/
	x = x * pow(10, 7);
	
	/*Stores the possible value in the possible_lengths2[] array*/
	for (i = 0; i < n; i++)
	{
		possible_val2 = x - lengths[i];
		

		/*If an element in possible_val2 is less than 100000000 then put it back into the list in the kth position*/
		/*All the other elements greater than or equal to 100000000 are removed*/
		if (possible_val2 < 100000000)
		{
			possible_lengths2[k] = possible_val2;
			k++;
		}
	}
	
	
	/*Initialize j to n-1 so it starts from the greatest length*/
	j = n-1;

	/*possible_lengths2[i] starts from 0, which has the greatest possible value for length2.*/
	i = 0;
	
	/* Compare lengths[] and possible_lengths2[] as they are sorted from highest to lowest*/
	while (i < k)
	{
		/*If the value of length2 is found, assign it to length2 as that particular value and set length1 to x - length2.*/
		if ( lengths[j] == possible_lengths2[i] )
		{
			length2 = possible_lengths2[i];
			length1 = x - length2;
			break;
		}
		
		/*If the current value of lengths is greater than the current value of possible_lengths2, decrement lengths's index by one each time.*/
		else if ( lengths[j] > possible_lengths2[i] )
		{
			j--;
		}
		
		/*If the current value of possible_val2 is greater than the current value of lengths, increment possible_val2's index by one each time.*/
		else if ( lengths[j] < possible_lengths2[i] )
		{
			i++;
		}
	}
	

	/*Output the target length along with length1 and length2 if target length is found.*/
	if ( (length1 + length2) == x)
	{
		printf("Found: %d + %d == %d", length1, length2, length1 + length2);
	}
	/*Otherwise state that there was no matching pair found.*/
	else
		printf("No matching pair found");

  /* finished work, so free up the dynamic array 
     This should be done whenever dynamic allocation
     is used.
  */
  free(lengths);
  /*End the program*/
  return 0;

}