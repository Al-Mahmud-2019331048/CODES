#include "myFirstClass.h"
#include<iostream>

using namespace std;

//body of function in cpp file

myFirstClass::myFirstClass()
{
    cout<<"Inside the constructor"<<endl;
}
void myFirstClass :: display()
{
    cout<<"Inside the display function"<<endl;
}

void myFirstClass :: setValue(int x,double y)
{
    int id=x;
    double gpa=y;
}
void myFirstClass :: print()
        {
            cout<<id<<" "<<gpa<<endl;
        }
