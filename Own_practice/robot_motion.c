#include<stdio.h>
int main()
{
    int x,y;
    char c;
    printf("Enter the initial position of Robot:");
    scanf("%d %d",&x,&y);

    while(1){
//        printf("Enter a chracter(u,d,l,r,s)");
        scanf("%c",&c);
        if(c=='s'){
            break;
        }
        else if(c=='u'){
            x--;
        }
        else if(c=='d'){
            x++;
        }
        else if(c=='r'){
            y++;
        }
        else if(c=='l'){
            y--;
        }

    }
    printf("The final position of the Robot is:\n%d %d",x,y);
    return 0;
}
