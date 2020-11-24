/*James Needham*/
/*24 November 2020*/
/*Question 3 Lab 8 (Uppercase)*/

/*Add necessary C libraries*/
#include <stdio.h>

/*Define the max array size*/
#define MAX_MSG_SIZE 256
void capitalise(char str[]);
int main(void)
{
  char msg[MAX_MSG_SIZE+1];
  int i = 0;
  /* the fgets function is used to read a string from the console */
  fgets(msg, MAX_MSG_SIZE, stdin);
 
  /* complete your answer here */
  /*While i is less than MAX_MSG_SIZE and the character is not the null terminant convert i to uppercase*/
    while(i<MAX_MSG_SIZE && msg[i]!='\0')
    {
        /*If current character i is lowercase alphabet then convert it to uppercase.*/
        if(msg[i]>='a' && msg[i]<='z')
        {
            msg[i] = msg[i] - 32;
        }
        /*Increment i to put the next element into uppercase*/
        i++;
    }

    /*Output the text in uppercase*/
    printf("%s",msg);

  /*End the program*/
  return 0;
}

