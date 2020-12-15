/* James Needham (20316686) */
/* 15 December 2020 */
/* Question 1 Lab 10 (Prime Factorization Function) */

/* n is an input parameter, corresponding to the number to be factorised. */
/* a[] is an array, which is empty on input, but which contains all of the factors on output from the function */
/* num_factorsp is an output parameter that contains the total number of factors in a[]. */
void primeFactors(int n,int a[],int *num_factorsp)
{
	/* Declare the variables */
	int i;
	int j;
	
	/* Create a pointer variable called *num_factorsp */
	*num_factorsp = 0;
	
	/* Find all the prime factors of the number n using a for loop */
	for (i = 2; i < MAX_SIZE; i++)
	{
		
		while (n % i == 0)
		{   
			/* Add every prime factor of n into the next available position in the array a[] */
		    a[j++] = i;
			n = n / i;
		}
	}
	/* Return the value of j to the main function using the pointer variable *num_factorsp */
	/* The variable j holds the number of prime factors of the number n */
	/* The value of *num_factorsp will be assigned to the &numFactors variable in the main function */
	/* &numFactors will hold the number of prime factors of the number n and will be used in a for loop to output all the prime factors contained in the array a[] */
	*num_factorsp = j;
    
}