/*James Needham*/
/*3 November 2020*/
/*Largest Sum Q5 (Lab 6)*/

#include<stdio.h>


#define MAX_SIZE 100
 
int main()
{
    
    int N;
    int i;
    int j;
    int l;
    int k;
    int subsequence = 0;
    int a[MAX_SIZE];
    int largest_sum=a[0];

    
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
 
    }
 
    
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
 
    
    printf("Largest sum is %d obtained from the subsequence [",largest_sum);
    for(subsequence=j;subsequence<=l;subsequence++)
    {
        printf(" %d",a[subsequence]);
    }
    printf(" ]");

    
    return 0;
}