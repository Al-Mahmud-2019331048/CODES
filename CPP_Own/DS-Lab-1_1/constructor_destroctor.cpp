#include<iostream>
using namespace std;

struct node{
    int x;
    node(char); //eta ekta constructor er prototype,er full form niche ache
    void mama();  //structure er ekta function
    node(){
        x=0;
        cout<<"x is initialized by "<<x<<endl;
    }
    node(int k){
        x=k;
        cout<<"x is initialized by "<<x<<endl;
    }
    ~node(){
        cout<<"Bye! Bye!  ";
        cout<<"x-->"<<x<<endl;
    }
};

void node::mama(){  //evabe struct er ekta function ke access kora hoy
    x-=15;
    cout<<"x is decreased by 15 and x ="<<x<<endl;
}
node::node(char c){  //evabe struct er constructor ke access kora jai
    c='a';
    cout<<sizeof(a)<<endl;
}

void hello(){
    node k(66);
}  /*eta call korle first e function ta execute hbe,
    tarpor eta destroy hbe,tarpor baki kaj!*/

int main()
{
    node a,b(10),*p;
    a.x=45; /*a node data type er ekta structure and x ekta integer,
            Tai dot(.) diye value access kora hoy*/
    a.mama(); //structure er ekta function ke evabe access kora hoy
    cout<<"Main Function"<<endl;
    hello();
    p=new node(); /*eta ami construct koreci ami,tai eta system
                  destruct korbe na! amakei destroy korte hbe.*/
    p->x=99; /*p ekta pointer,p jake point korce ta ekta structure,tar val x
                tai ei value ke access korte -> sign use kora hoy*/
    p->mama(); //evabe structure er ekta pointer er function access kora hoy

    delete p;

    return 0;
}
