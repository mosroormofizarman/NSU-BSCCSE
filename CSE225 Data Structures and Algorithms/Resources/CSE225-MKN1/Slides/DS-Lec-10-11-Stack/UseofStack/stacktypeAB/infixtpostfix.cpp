#include<iostream>
#include<cmath>
#include"stacktype.cpp"
#include "infixtpostfix.h"


// define the IsOperator() function to validate whether any symbol is operator.
/* If the symbol is operator, it returns true, otherwise false. */
bool IsOperator(char c)
{
if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' )
return true;
return false;
}

// IsOperand() function is used to validate whether the character is operand.
bool IsOperand(char c)
{
if( c >= 'A' && c <= 'Z')  /* Define the character in between A to Z. If not, it returns False.*/
return true;
if (c >= 'a' && c <= 'z')  // Define the character in between a to z. If not, it returns False. */
return true;
if(c >= '0' && c <= '9')   // Define the character in between 0 to 9. If not, it returns False. */
return true;
return false;
}
// here, precedence() function is used to define the precedence to the operator.
int precedence(char op)
{
if(op == '+' || op == '-')                   /* it defines the lowest precedence */
return 1;
if (op == '*' || op == '/')
return 2;
if(op == '^')    /* exponent operator has the highest precedence */
return 3;
return 0;
}
/* The eqlOrhigher() function is used to check the higher or equal precedence of the two operators in infix expression. */
bool eqlOrhigher (char op1, char op2)
{
int p1 = precedence(op1);
int p2 = precedence(op2);
if (p1 == p2)
{
if (op1 == '^' )
return false;
return true;
}
return  (p1>p2 ? true : false);
}

/* string convert() function is used to convert the infix expression to the postfix expression of the Stack */
string convert(string infix)
{
StackType <char> S;
string postfix ="";
char ch;

S.Push( '(' );
infix += ')';

for(int i = 0; i<infix.length(); i++)
{
ch = infix[i];

if(ch == ' ')
continue;
else if(ch == '(')
S.Push(ch);
else if(IsOperand(ch))
postfix += ch;
else if(IsOperator(ch))
{
while(!S.IsEmpty()&& eqlOrhigher(S.Top(), ch))
{
postfix += S.Top();
S.Pop();
}
S.Push(ch);
}
else if(ch == ')')
{
while(!S.IsEmpty() && S.Top() != '(')
{
postfix += S.Top();
S.Pop();
}
S.Pop();
}
}
return postfix;
}
