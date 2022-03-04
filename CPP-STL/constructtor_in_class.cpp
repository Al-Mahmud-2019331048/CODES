#include<iostream>

using namespace std;

class student{

    public:
        int id;
        double gpa;
        student()  //default constuctor (no parameter)
        {
            cout<<"Default constructor"<<endl;
        }
        student(int x,double y){  //constructor (no return)
            id=x;
            gpa=y;
        }

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
    student ob;  //call default constructor
    //student alim;
//    alim.id=101;
//    alim.gpa=3.45;
//    alim.setValue(101,3.45);

    student alim(101,3.45); //initializes constructor
    alim.display();

    return 0;
}
