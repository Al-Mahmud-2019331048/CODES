#include<iostream>
#include<vector>

using namespace std;

///#include<bits/stdc++.h>  many stl header included

///dynamic memory allocate kore


void printVector( vector<int>v )  {
    cout<<"Size: " <<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}


int main(){

    vector<int>v;  //declaration ,size 0
    v.push_back(34);
    v.push_back(54);
    v.push_back(45);

    printVector(v);

    return 0;
}
