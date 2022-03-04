#include <iostream>
#include "myFirstClass.h"

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    myFirstClass ob1;

    ob1.display();
    myFirstClass alim;
    alim.setValue(101,3.45);
    alim.print();
    return 0;
}
