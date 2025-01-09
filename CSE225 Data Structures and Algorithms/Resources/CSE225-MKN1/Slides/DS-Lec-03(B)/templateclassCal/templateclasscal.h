#ifndef TEMPLATECLASSCAL_H
#define TEMPLATECLASSCAL_H

template <class A_Type>
class TemplateClassCal
{
  A_Type a,b;
  public:
    A_Type multiply();
    A_Type add();
    A_Type substrac();
    A_Type division ();
    getvalue();

TemplateClassCal(A_Type x, A_Type y);
~TemplateClassCal();
};

#endif // TEMPLATECLASSCAL_H
