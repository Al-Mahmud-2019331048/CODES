#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    int n,y;
    cin>>n;
    n++;
    int year[4];
    while(1){
            y=n;
        for(int i=0;i<4;i++){
            year[i]=y%10;
            y/=10;
        }
        if(year[0]==year[1]||year[0]==year[2]||year[0]==year[3]||year[1]==year[2]||year[1]==year[3]||year[2]==year[3])
        {
            n++;
        }
        else
        {
            break;
        }

    }


    printf("%d\n",n);

    return 0;
}
