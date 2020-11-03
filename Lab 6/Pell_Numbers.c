/* James Needham */
/*3 November 2020*/
/*Pell Numbers Q3 (Lab 6)*/
#include <stdio.h>

int main(void)
{
    
    int i; 
    int pellminusone = 0;  
    int pellminustwo = 1; 
    int pellnumber = 0; 
    int nterms;

    printf("Enter how many pell numbers to print:\n");
    scanf("%d", &nterms);

    while(nterms <= 0)
    {
        printf("Enter how many pell numbers to print:\n");
        scanf("%d", &nterms);
    }

    
    printf("%d ", pellnumber);
    
    for(i = 1; i < nterms; i++)
    {
        pellnumber = (2 * pellminusone) + pellminustwo;  
        pellminustwo = pellminusone;  
        pellminusone = pellnumber; 
        printf("%d ", pellnumber);
    }
    

    return 0;
}
