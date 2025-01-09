#include "templateclasscal.h"
#include <iostream>

template <class A_Type>
TemplateClassCal<A_Type>::TemplateClassCal(A_Type x, A_Type y)
{
    a=x;
    b=y;
}

template <class A_Type>
A_Type TemplateClassCal<A_Type>::multiply()
{
   return a*b;
}


template <class A_Type>
A_Type TemplateClassCal<A_Type>::add()
{
   return a+b;
}

template <class A_Type>
A_Type TemplateClassCal<A_Type>::division()
{
   return a/b;
}
template <class A_Type>
A_Type TemplateClassCal<A_Type>::substrac()
{
   return a-b;
}

template <class A_Type>
TemplateClassCal<A_Type>::getvalue()
{
   std::cout<<"Two number are : "<<a<<"  and  "<<b<<"\n";
}

template <class A_Type>
TemplateClassCal<A_Type>::~TemplateClassCal()
{
    //dtor
}
