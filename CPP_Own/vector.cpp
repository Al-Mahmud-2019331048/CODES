#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
int main()
{
////    int array[3];
////    array[0]=34;
////    array[1]=10;
//    vector<int>vec;

//    vec.push_back(34); //vec[0]=34
//    vec.push_back(10); //vec[1]=10
//    vec.push_back(11); //vec[2]=11
//    //32  10  11
    vector<int>vec(3,0); //vector size 3 & all elements are 0,
    vec.push_back(23); //23 inclued after 0 0 0. 23 is 4th element.
////    printf("%d %d %d\n",vec[0],vec[1],vec[2]);
//    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
