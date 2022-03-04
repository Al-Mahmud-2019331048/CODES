#include <iostream>
using namespace std;

int a[100005];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q;
    scanf("%d %d", &n, &q);

    for(int i=0 ; i<n ; i++ ){
        scanf("%d", &a[i]);
    }
    for( int w=0 ; w<q ; w++ )
    {
        int x;
        scanf("%d", &x);

        int i=0, j= n-1;

        while(i<j){
            int mid = (i+j)/2;

            if(a[mid] < x)
                i = mid + 1;
            else
                j = mid;
        }

        if(i==n)
            printf("-1\n");
        else if(a[i]==x)
            printf("%d\n", i);
        else
            printf("-1\n");
    }

    return 0;
}