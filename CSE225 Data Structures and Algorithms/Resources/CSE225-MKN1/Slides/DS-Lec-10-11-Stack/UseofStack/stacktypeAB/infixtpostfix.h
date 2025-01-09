#ifndef INFIXTPOSTFIX_H
#define INFIXTPOSTFIX_H

#include<string>

using namespace std;

//Convert infix to postfix

bool IsOperator(char);
bool IsOperand(char);
bool eqlOrhigher(char, char);
string convert(string);

#endif // INFIXTPOSTFIX_H
