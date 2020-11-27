/*James Needham*/
/*24 November 2020*/
/*Question 2 Lab 8 (A pair of lengths that sum exactly to a target length)*/

/*Add necessary C libraries*/
#include <stdio.h>
#include <stdbool.h>

/*Define the maximum size of an array*/
#define N 1000000

int main(void)
{
  /*Declare the variables*/
  int n;  /* The number of lengths */
  int x; /* The target length */
  int lengths[N]; /* The array of available lengths */
  int i;
  int start;
  int end;
  bool found;
  int whichfile=1;
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

  for (i=0;i<n;i++)
    fscanf(fp, "%d", &lengths[i]);
  fclose(fp);

  /* Now all the input data has been read in 
     search for the required pair of lengths... */

  /* convert the x from centimeters to nanometers. */
  x = x*10000000;

  /* search forward from the start of array lengths[]
     and backwards from end of array lengths[] */
  start = 0;
  end = n-1;
  found = false;

  while(!found && start < end)
    {
      /* if the lengths sum up to less than x
	 then, move up one position from the start */
      if (lengths[end] + lengths[start] < x)
	{
	  start++;
	}
      /* if the two lengths sum up to more than x
	 then move back one step from the end */
      else if (lengths[end] + lengths[start] > x)
	{
	  end--;
	}
      
      else
	/* Otherwise the pair has been found. */
	found = true;
    }
  
  if (found)
    {
      printf("Found: %d + %d == %d\n", lengths[start], lengths[end], x);
    }
  
  else{
      printf("No matching pair found\n");
  }

  /*End the program*/  
  return 0;

}

  
