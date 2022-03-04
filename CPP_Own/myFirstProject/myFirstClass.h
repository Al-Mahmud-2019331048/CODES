#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include "myFirstClass.h"

//parameter of function in header file
class myFirstClass
{
    public:
        int id;
        double gpa;
        myFirstClass();   //constructor
        void setValue(int x,double y);
        void display();
        void print();
//        myFirstClass(int x,double y){  //constructor (no return)
//            int  id=x;
//            double gpa=y;
//        }

    protected:

    private:
};

#endif // MYFIRSTCLASS_H
