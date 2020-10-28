/* Add neccessary C librarys */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*Create Variables*/
    int i;
    int Uscore =0;
    int Cscore =0;
    int choice;
    int randNum;
    int seed;

    /*Prompt user to enter the seed for the random number generator*/
    printf("Please enter the random number generator seed.\n");
    scanf("%d", &seed);
    srand(seed);

   
    /*Ask user to choose Rock, Paper or Scissors*/
    printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");

    /* Run the Rock Paper Scissors game 10 times*/
    for (i=0;i<10;i++)
    {
        /*Scan the users choice*/
        scanf("%d",&choice);
        
        /*If the choice isn't between 1 and 3 tell the user to input a valid number*/

        if (choice<1 || choice>3) {
            printf("Please choose a valid option.\n");
            i = i-1;
        } else
        if (choice >= 1 || choice <= 3) {
        randNum = rand()%3+1;
        }

    
    
        
        
        
            
        /* Use if statements to output the user's and computers choice and add one to score if the person or computer wins. Also alert user if it is a draw.*/
        if (randNum==2 && choice==2){
            printf("User choice is PAPER.\n");
            printf("Computer choice is PAPER.\n");
            printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
        }
        
        else if(randNum==1 && choice==1){
            printf("User choice is ROCK.\n");
            printf("Computer choice is ROCK.\n");
            printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
        }
        
        else if(randNum==3 && choice==1){
            printf("User choice is ROCK.\n");
            printf("Computer choice is SCISSORS.\n");
            printf("User wins because ROCK beats SCISSORS.\n");
            Uscore = Uscore + 1;
        }
        
            
        else if(randNum == 2 && choice == 1)
        {
        printf("User choice is ROCK.\n");
        printf("Computer choice is PAPER.\n");
        printf("Computer wins because PAPER beats ROCK.\n");
        Cscore = Cscore + 1;

        }
        else if(randNum==3 && choice==2){
            printf("User choice is PAPER.\n");
            printf("Computer choice is SCISSORS.\n");
            printf("Computer wins because SCISSORS beats PAPER.\n");
            Cscore = Cscore + 1;
        }
        else if(randNum==1 && choice==2){
            printf("User choice is PAPER.\n");
            printf("Computer choice is ROCK.\n");
            printf("USER wins because PAPER beats ROCK.\n");
            Uscore= Uscore + 1;
        }
            
            
        else if(randNum==3 && choice==3){
            printf("User choice is SCISSORS.\n");
            printf("Computer choice is SISSORS.\n");
            printf("It's a draw. Computer chose SCISSORS and User also chose SCISSORS.\n");
        }
        else if(randNum==2 && choice==3){
            printf("User choice is SCISSORS.\n");
            printf("Computer choice is PAPER.\n");
            printf("USER wins because SCISSORS beats PAPER\n");
            Uscore= Uscore + 1;
        }
        else if(randNum==1 && choice==3){
            printf("User choice is SCISSORS.\n");
            printf("Computer choice is ROCK.\n");
            printf("Computer wins because ROCK beats SCISSORS.\n");
            Cscore = Cscore + 1;
        }
        

    }
    
    /*Output the results of the game*/
    printf("In 10 games, computer won %d times and user won %d times.\n",Cscore,Uscore);

    /*End the program by returning 0*/
    return 0;
}
