#include <stdio.h>

int main() {
char i, j, k;
for (i ='A'; i<='Z'; i+=j-1)
{
for (j = i+2; j<= 'Z'; j+=2)
for (k = j+2; k <= 'Z'; k+=2)
printf("%c%c%c ",i,j,k);
puts("");
}
return 0;
}
