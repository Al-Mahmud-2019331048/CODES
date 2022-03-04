#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main()
{
    char ch,s[MAX_LEN],sen[MAX_LEN];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]",sen);


    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    return 0;
}
