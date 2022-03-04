#include <bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main() {
	int a,b;
	cin>>a>>b;
	int c=a;
	a=max(a,b);
	b=min(c,b);
	//cout<<a<< " "<<b<<endl;
	int cnt=0;
	for (int i = 0; ; ++i)
	{
		if(a==1 && b==1){
			break;
		}
		while(a>2){
			a-=2;
			b++;
			cnt++;
			//cout<<a<<" "<<b<<endl;
		}
	    c=a;
		a=max(a,b);
	    b=min(c,b); 
	    if(a==2){
	    	cnt++ ;
	    	break;  
	    }
	    if(a==0 || b==0)
	    	break;

	}
	cout<<cnt<<endl;
	return 0;
}