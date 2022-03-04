#include<iostream>

using namespace std;

class student{

    public:
        int id;
        double gpa;

        void display()
        {
            cout<<id<<" "<<gpa<<endl;
        }
        void setValue(int x, double y) //parameterized function
        {
            id=x;
            gpa=y;
        }

};

int main()
{
    student alim;
//    alim.id=101;
//    alim.gpa=3.45;
    alim.setValue(101,3.45);
    alim.display();

    return 0;
}
