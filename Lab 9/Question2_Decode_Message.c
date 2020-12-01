/*James Needham (20316686)*/
/*1 December 2020*/
/*Question 2 Lab 9 (Decode a Message)*/

/*Add the necessary C libraries*/
#include <stdio.h>

/*Define the maximum size of the message*/
#define MAX_STR_LEN 256

int main(void)
{
  /*Declare the variables*/
  char perm[] = "qjczieaungsdfxmphybklortvw";
  char alpha[] = "abcdefghijklmnopqrstuvwxyz"; /*Create an alphabet array to compare with the characters in the msg array*/
  char msg[MAX_STR_LEN+1];
  int i=0;
  int j; 

  /* read the message from the terminal using fgets */
  fgets(msg, MAX_STR_LEN, stdin);

  /* write the answer here ... */

  /*Enter loop if i is less than the maximum size of the message and the ith element is not the null terminator*/
  while(i<MAX_STR_LEN && msg[i]!= '\0')
  {
    for(j=0;i<MAX_STR_LEN && perm[j]!= '\0';j++)
    {
        /*If a character is lowercase or is equal to a character in the permutation array, it is replaced with the equivalent character in the alpha array*/
        if(msg[i] >= 'a' && msg[i] <= 'z' && msg[i] == perm[j])
        {
            msg[i++] = alpha[j];       /*Put the jth element of the alpha array into the next position in the message*/
            j=-1;                     /*Set j to -1 so when it increments it will go back to position 0*/
        }
        /*Checking if a character is uppercase and is equal to a character in the permutation array after being changed to lowercase*/
        if(msg[i] < 'a' && msg[i] >= 'A' && (msg[i] + ('a' - 'A') == perm[j]))
        {
            /*The msg array's character is replaced with the alpha array's uppercase character*/
            msg[i++] = (alpha[j] - ('a' - 'A'));
            j=-1;
        }
    }
  i++;
  }

  /*Output the decoded message*/
  printf("%s", msg);

  /*End the Program*/
  return 0;
}