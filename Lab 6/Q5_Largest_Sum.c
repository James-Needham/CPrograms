/*James Needham*/
/*3 November 2020*/
/*Largest Sum Q5 (Lab 6)*/
#include<stdio.h>

/*State the maximum size of the array*/
#define MAX_SIZE 100
 
int main()
{
    /*Declare the variables*/
    int N;
    int i;
    int j;
    int l;
    int k;
    int subsequence = 0;
    int a[MAX_SIZE];
    

    /* read in the array */
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
 
    }

    /* complete your program here ... */
 
    /* Use an if statement that outputs the largest sum as zero and nothing as the subsequence if the element is zero. Otherwise run the loop to find the largest sum.*/
    if (N == 0)
    {
        printf("Largest sum is 0 obtained from the subsequence [ ]\n");
    }
    else
    {
        /* Use a for loop to find the largest sum obtained from a certain subsequence*/
        int largest_sum=a[0];
        for(i=0;i<N;i++)
        {
            int sum=0;
            for(k=i;k<N;k++)
            {
                sum=sum+a[k];
                if(sum>largest_sum)
                {
                    j=i;l=k;
                    largest_sum=sum;
                }
            }
        }
    
        /* Print the largest sum and the sequence of the maximum sequence of the array*/
        printf("Largest sum is %d obtained from the subsequence [",largest_sum);
        for(subsequence=j;subsequence<=l;subsequence++)
        {
            printf(" %d",a[subsequence]);
        }
        printf(" ]");
    }
    

    /*End the Program*/
    return 0;
}