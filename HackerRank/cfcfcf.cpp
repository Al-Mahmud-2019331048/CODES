


#include<bits/stdc++.h>

using namespace std;

//mahmud48

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,l,flag=1;
        cin>>n;
        l=4*n;
        int arr[l];
        for(int i=0;i<l;i++) cin>>arr[i];
        sort(arr,arr+l);
        long long area=arr[0]*arr[l-1];
        for(int j=0;j<2*n;j++){
            if((j&1 and (arr[j]!=arr[j-1] or arr[l-1-j]!=arr[l-j])) or (area != arr[j]*arr[l-1-j])) {
                    flag = 0;
                    break;
            }
        }

        cout<<(flag?"YES":"NO")<<endl;



    }

    return 0;
}

