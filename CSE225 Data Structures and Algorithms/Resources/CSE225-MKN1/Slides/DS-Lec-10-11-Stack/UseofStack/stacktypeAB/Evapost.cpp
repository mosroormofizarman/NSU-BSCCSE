#include<iostream>
#include<cmath>
#include"stacktype.cpp"
//#include<string>
//#include"string.h"

using namespace std;

float scanNum(char ch) {
   int value;
   value = ch;
   return float(value-'0');   //return float from character
}
int isOperator(char ch) {
   if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
      return 1;    //character is an operator
   return -1;   //not an operator
}
int isOperand(char ch) {
   if(ch >= '0' && ch <= '9')
      return 1;   //character is an operand
   return -1;   //not an operand
}
float operation(int a, int b, char op) {
   //Perform operation
   if(op == '+')
      return b+a;
   else if(op == '-')
      return b-a;
   else if(op == '*')
      return b*a;
   else if(op == '/')
      return b/a;
   else if(op == '^')
      return pow(b,a); //find b^a
   else
      return INT_MIN; //return negative infinity
}
float postfixEval(string postfix) {
   int a, b;
   //string postfix;
   //strcpy(postfix,post);
   StackType<float> stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++) {
      //read elements and perform postfix evaluation
      if(isOperator(*it) != -1) {
         a = stk.Top();
         stk.Pop();
         b = stk.Top();
         stk.Pop();
         stk.Push(operation(a, b, *it));
      }else if(isOperand(*it) > 0) {
         stk.Push(scanNum(*it));
      }
   }
   return stk.Top();
}
