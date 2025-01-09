#ifndef EVAPOS_H
#define EVAPOS_H

#include<string>

using namespace std;

float scanNum(char);
int isOperator(char);
int isOperand(char);
float operation(int, int, char) ;
float postfixEval(string);



#endif // EVAPOS_H
