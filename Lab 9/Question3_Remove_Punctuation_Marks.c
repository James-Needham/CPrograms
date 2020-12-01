/*James Needham (20316686)*/
/*1 December 2020*/
/*Question 3 Lab 9 (Remove Punctuation Marks)*/

/*Add the necessary C Libraries*/
#include <stdio.h>

/*Define the maximum size of the message*/
#define MAX_MSG_LEN 256

int main(void){
   /*Declare the variables*/
   char msg[MAX_MSG_LEN+1];
   
   
   /*Input the string*/
   fgets(msg, MAX_MSG_LEN, stdin);

   /* write your solution here ... */

   /*Start the for loop if the character is not the null terminator*/
   for (int i = 0, j; msg[i] != '\0'; i++) {

      /*Start the loop if the character is not in the alphabet, not the null terminator and not a space*/
      while (!(msg[i] >= 'a' && msg[i] <= 'z') && !(msg[i] >= 'A' && msg[i] <= 'Z') && !(msg[i] == '\0') && !(msg[i] == ' ') && !(msg[i] == '-') && !(msg[i] == '"')) {
         for (j = i; msg[j] != '\0'; j++) {

            /*if jth element of message is not in the alphabet, not the null terminator and not a space*/
            /*assign the value of j+1th element to the jth element*/
            msg[j] = msg[j + 1];
         }
         /*Make the jth element the null terminator*/
         msg[j] = '\0';
      }
   }
   /*Output the string without punctuation marks*/
   printf("%s",msg);

   /*End the program*/
   return 0;
}