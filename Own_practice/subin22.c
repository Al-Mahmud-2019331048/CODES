#include<stdio.h>

bool digit(char ch)
{
	if(int(ch)>=48 && int(ch)<=58)
		return 1;
	else
		return 0;
}

int main()
{
	int i;
	char ch;
	scanf("%c",&ch);
	printf("%d\n",int(ch));
	printf("%d\n",digit(ch));
	return 0;
}