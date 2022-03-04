#include<bits/stdc++.h>

using namespace std;

int main(){

    //mahmud48
    long long int x,step=0;
    cin>>x;
    for (int i = 0;x!=0 ; ++i)
    {
        if(x>=5){
            step=x/5;
            x-=step*5;
        }
        else if(x==4){
            x-=4;
            step++;
        }
        else if(x==3){
            x-=3;
            step++;
        }
        else if(x==2){
            x-=2;
            step++;
        }
        else if(x==1){
            x-=1;
            step++;
        }
        
      // simply -- cout<<((x/5)+(x%5!=0)); 
    cout<<step<<endl;
    return 0;
    }
}

