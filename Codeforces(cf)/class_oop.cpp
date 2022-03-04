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
};

int main()
{
    student alim;
    alim.id=101;
    alim.gpa=3.45;
    alim.display();

    return 0;
}
