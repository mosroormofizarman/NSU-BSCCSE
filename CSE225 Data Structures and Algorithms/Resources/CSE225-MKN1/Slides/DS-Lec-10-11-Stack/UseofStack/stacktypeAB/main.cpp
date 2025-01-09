#include <iostream>
#include"stacktype.cpp"
#include<string>
#include"Evapos.h"
#include"infixtpostfix.h"
#include"balancedparentheses.h"

using namespace std;

int main()
{
   string bpex,infix,postf;
   bool bp;
   cout<<"To check Balanced Parenthesis. expression : ";
   getline(cin,bpex);
   bp=areBracketsBalanced(bpex);
   if(bp)cout<< "The expression is Balanced."<<endl;
    else cout<<"The expression is not Balanced."<<endl;


   float value;

   cout<<" Please! Enter an infix expression : ";
   getline(cin,infix);
   postf=convert(infix);
   value=postfixEval(postf);
   cout<<"The Equivalent postfix is : "<<postf<<endl;
   cout<<"The output is :"<<value<<endl;


 return 0;
}
