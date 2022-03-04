#include<iostream>

#define sz 1000
using namespace std;

int partition(int arr[],int left, int right)
{
    bool r=true ; //sliding from right, if false then slide from left
    while(left<right)
    {
        if(arr[left] > arr[right])
        {
            swap(arr[left],arr[right]);
              //if swap, then change the sliding direction
              r^=1;     //true-->false, false-->true (may also use if-else)
        }
        if(r) right--;  //right to left slide bcz r=1
        else left++;  //left to right slide bcz  r=0
    }
    return left;  //or return right (pivot point)
}

void quicksort(int arr[],int left,int right)
{
    if(left >= right)  return;

    int p=partition(arr,left,right);  //return the pivot position every time
    quicksort(arr,left,p-1);
    quicksort(arr,p+1,right);

}

int main()
{
    int n,arr[sz];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    quicksort(arr,0,n-1);

    cout<<"Sorted array using quicksort:\n";

    for(int i=0;i<n;i++)
        cout<< arr[i] << " \n"[i==n-1];

    return 0;
}

/**
12
44 33 11 55 77 90 40 60 99 22 88 66
*/

//complexity ,best case-n log(n) ,worse-n^2
