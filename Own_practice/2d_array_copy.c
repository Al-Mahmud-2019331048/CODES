#include<stdio.h>
int main()
{
    int box1[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int box2[5][5];
    int r,c,sum=0;
    printf("Content of first box (box1):\n");

    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ",box1[r][c]);
        }
        printf("\n");
    }
    printf("-------------\n");
//    now start copy
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            box2[c][r]=box1[r][c];
        }
    }

    printf("Content of second box(box2):\n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ",box2[r][c]);
        }
        printf("\n");
    }
    printf("------------\n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
           sum+=box2[r][c];
        }

        printf("Sum of colum %d : %d\n",r+1,sum);
        sum=0;
    }

    return 0;
}
