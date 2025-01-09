#include <iostream>
#include"templateclasscal.cpp"
#include "templateclasscal.h"

using namespace std;

int main()
{
    TemplateClassCal<int> ci(15,5);
    ci.getvalue();

    cout <<"multiply :"<< ci.multiply()<<endl;
    cout << "add :"<<ci.add()<<endl;
    cout <<"division :"<<ci.division()<<endl;
    cout <<"subtract :"<<ci.substrac()<<endl;

    return 0;
}
