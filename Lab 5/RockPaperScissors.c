#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int Uscore =0;
    int Cscore =0;
    int choice;
    int randNum;
    int seed;

    printf("Please enter the random number generator seed.\n");
    scanf("%d", &seed);

   

 
    for (i=0;i<10;i++)
    {
    randNum = rand()%3+1;
    printf("A random number between 1 and 3: %d\n", randNum);
    }

    
    for(i=0;i<10;i++){
        printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");
        scanf("%d",&choice);
        
        
        if (choice == 1)
            {
                printf("User choice is ROCK.\n");
            }

            else if (choice == 2)
            {
                printf("User choice is PAPER.\n");
            }

            else if (choice == 3)
            {
                printf("User choice is SISSORS.\n");
            }
        
        if (randNum == 1)
            {
                printf("Computer choice is ROCK.\n");
            }

            else if (randNum == 2)
            {
                printf("Computer choice is PAPER.\n");
            }

            else if (randNum == 3)
            {
                printf("Computer choice is SISSORS.\n");
            }
        
            
            

            if(choice==1){
                if(randNum==1){
                    printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
                }
                if(randNum==2){
                    printf("Computer wins because ROCK beats SISSORS.\n");
                    Cscore= Cscore + 1;
                }
                if(randNum==3){
                    printf("User wins because ROCK beats SISSORS.\n");
                    Uscore = Uscore + 1;
                }
            }
              else  if(choice==2){
                    if(randNum==2){
                        printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
                    }
                    if(randNum==3){
                        printf("Computer wins because SISSORS beats PAPER.\n");
                        Cscore = Cscore + 1;
                    }
                    if(randNum==1){
                        printf("USER wins because PAPER beats ROCK.\n");
                        Uscore= Uscore + 1;
                    }
                }
                else if(choice==3){
                    if(randNum==3){
                        printf("It's a draw. Computer chose SISSORS and User also chose SISSORS.\n");
                    }
                    if(randNum==2){
                        printf("USER wins because SISSORS beats PAPER\n");
                        Uscore= Uscore + 1;
                    }
                    if(randNum==1){
                        printf("Computer wins because ROCK beats SISSORS.\n");
                        Cscore = Cscore + 1;

                    }
                }
        else if (choice > 3)
        {
            i = i - 1;

        }

            }
           printf("In 10 games, computer won %d times and user won %d times.\n",Cscore,Uscore);


    return 0;
}
