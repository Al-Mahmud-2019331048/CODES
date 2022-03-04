#include<stdio.h>
int main()
{
    int grid[10][10]={{00,01,02,03,04,05,06,07,08,09},{10,11,12,13,14,15,16,17,18,19},{20,21,22,23,24,25,26,27,28,29},{30,31,32,33,34,35,36,37,38,39},{40,41.42.43.43.45,46,47,48,49},{50,51,52,53,54,55,56,57,58,59},{60,61,62,63,64,65,66,67,68,69},{70,71,72,73,74,75,76,77,78,79},{80,81,82,83,84,85,86,87,88,89},{90,91,92,93,94,95,96,97,98,99}};
    int n,i,j,x,y;
    char c;
    printf("please enter the initial position:");
    scanf("%d %d",&x,&y);
    while(1){
        scanf("%c",&c);
        if(c=='s'){
            break;
        }
        else if(c=='r'){
            j++;
        }
        else if(c=='l'){
            j--;
        }
        else if(c=='u'){
            i--;
        }
        else if(c=='d'){
            i++;
        }

    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            grid[i][j]=1;
        }
    }
    printf("Please enter the number of blocked cells:");
    scanf("%d",n);
    printf("Please enter the cells:");

    for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    grid[x][y]=0;
    }

    if(grid[x][y]==1){
        printf("command accepted");
    }
    else{
        printf("command not accepted");
    }
}
