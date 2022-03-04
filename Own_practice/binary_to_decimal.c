#include<stdio.h>
#include<string.h>
#include<math.h>

int main()

{
    char binary[50];
    int len=0,power,i,decimal=0;
    printf("Enter the binary number:");
    scanf("%s",binary);
    len=strlen(binary);
    power=len-1;
    for(i=0;i<len;i++){
        decimal+=((binary[i]-'0')*pow(2,power));
        power--;
    }
    printf("Decimal value is: %d\n",decimal);

    return 0;
}
