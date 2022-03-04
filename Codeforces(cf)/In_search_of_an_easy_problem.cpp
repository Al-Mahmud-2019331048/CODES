#include <iostream>
using namespace std;
#define sz       200000
#define ll       long long


int main()
{
    //mahmud48

    int n,sum=0;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];  //only 0 or 1
        sum+=a[i];
    }
    if(sum==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
