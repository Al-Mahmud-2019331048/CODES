#include<iostream>
#define sz 1000
using namespace std;

int partitions(int arr[],int left,int right)
{
    bool r=true;
    while(left<right){
        if(arr[left]>arr[right]){
            swap(arr[left],arr[right]);
            r^=1;
        }
        if(r) right--;
        else left++;
        }
        return left;
}

void quicksort(int arr[],int left,int right)
{
    if(left>=right) return;
    int p=partitions(arr,left,right);
    quicksort(arr,left,p-1);
    quicksort(arr,p+1,right);
}

int main()
{
    int arr[sz],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" \n"[i==n-1];
    return 0;
}
