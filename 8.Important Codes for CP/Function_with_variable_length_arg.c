//function with variable length argument

#include<stdio.h>
#include<stdarg.h>

//int sum(char s[],int n, ... )
//... is called ellipse
//int sum(..., int n) -> illegal

int sum(int n, ...)
{
	va_list a;  //variable list
	va_start(a,n);  //initialize a

	int s=0,i,x;

	for (int i = 0; i < n; ++i)
	{
		x=va_arg(a,int);  //returns i th elements from the list a
		s+=x;
	}

	va_end(a);  //memory clear

	return s;

}


int main()
{
	int x=10;
	printf("hello\n"); //1 parameter
	printf("hello %d\n",x); //2 parameter

	int a=sum(5, 1,2,3,4,5);
	printf("%d\n",a);
	int b=sum(3 ,2,5,7);
	printf("%d\n",b);
	return 0;
}

/*
int main(int argc,char *argv[])
int argv -> koyta argument pass korbo
char *argv[] -> array of string
main function is a user defined function
*/

/*
two value is equal or not:
--------------------------
double a,b;

if(a==b)
{
	//is good for int
	//but not good for double
}

rather
if(fabs(a-b)<1e-9)
{
	//is good practice for double
}
*/

/*
2^n:
------

int res=1
for(i=1;i<=n;i++)  res*=2;  O(n)

res=pow(2,n) ;  //O(log n)  
//is is very bad practice to use pow function,
cz it returns double

res=1<<n;  //O(1)
best practice
*/