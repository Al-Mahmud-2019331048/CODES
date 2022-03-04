#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define SEED 23737
int throw()
{
    float x1,x2;
//        random floating point number between 0 & 1
    int n1,n2;
//        random integer between  0 & 6
    x1=rand()/32768.0;
    x2=rand()/32768.0;
    n1=1+(int)(6*x1);
//        simulate first die
    n2=1+(int)(6*x2);
//        simulate second die
    return(n1+n2);
//        score is the sum of two di9ce
}
void play()
//        simulate one complete game
{
    int score1,score2;
    char dummy;
    printf("\n-Please throw the dice....");
    scanf("%c",&dummy);
    printf("\n");
    score1=throw();
    printf("\n%2d",score1);
    switch(score1)
    {
        case 7:
        case 11:
//                win on the first throw
            printf("\n-Congratulations! You WIN on the first throw\n");
            break;
        case 2:
        case 3:
        case 12:
//                lose on first throw
            printf("\n-Sorry,you LOSE on the first throw\n");
            break;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
//                additional throws are required
          do{
                printf("-\nThrow the dice again.....");
                scanf("%c",&dummy);
                score2=throw();
                printf("%2d",score2);
            } while(score2!=score1 && score2!=7);
            if(score2==score1)
                printf("-\nYou WIN matching your first score");
            else
                printf("-\nYou LOSE by fallint match your first score\n");
            break;
    }
    return;
}
main()
{
    char answer='Y';
    printf("-\nWelcome to the game of CRAPS\n\n");
    printf("-\nTo throw the dice, press enter\n\n");
    srand(SEED);
//            initialize the random number generator
//                main loop
    while(toupper(answer)!='N'){
        play();
        printf("-\nDo you want to play again?(Y/N)");
        scanf("%c",&answer);
        printf("\n");
    }
    printf("-Bye,have a nice day");
}
