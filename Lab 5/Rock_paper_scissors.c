#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;

    
    printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");

    for(i=0;i<10;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        int computer=rand()%3+1;
        if (choice == 1)
            {
                printf("User choice is ROCK\n");
            }

            else if (choice == 2)
            {
                printf("User choice is Paper\n");
            }

            else if (choice == 3)
            {
                printf("User choice is Sissors\n");
            }
        
        if (computer == 1)
            {
                printf("Computer choice is Rock\n");
            }

            else if (computer == 2)
            {
                printf("Computer choice is Paper\n");
            }

            else if (computer == 3)
            {
                printf("Computer choice is Sissors\n");
            }
        
            
            

            if(choice==1){
                if(computer==1){
                    printf("It's a draw. Computer chose ROCK and User also chose Rock.\n");
                }
                if(computer==2){
                    printf("Computer wins because rock beats sissors.\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("Player wins because rock beats sissors.\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
                    }
                    if(computer==3){
                        printf("Computer wins because SISSORS beats PAPER.\n");
                        Cscore = Cscore + 1;
                    }
                    if(computer==1){
                        printf("USER wins because PAPER beats ROCK.\n");
                        Pscore= Pscore + 1;
                    }
                }
                else if(choice==3){
                    if(computer==3){
                        printf("It's a draw. Computer chose SISSORS and User also chose SISSORS.\n");
                    }
                    if(computer==2){
                        printf("USER wins because SISSORS beats PAPER\n");
                        Pscore= Pscore + 1;
                    }
                    if(computer==1){
                        printf("COMPUTER wins because ROCK beats SISSORS.\n");
                        Cscore = Cscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
           printf("In 10 games, computer won %d times and user won %d times.\n",Cscore,Pscore);


    return 0;
}
