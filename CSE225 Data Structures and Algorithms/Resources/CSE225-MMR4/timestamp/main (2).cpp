#include <iostream>

using namespace std;

int main()
{
    int lr, lc;
    cout << "length of row:" << endl;
    cin>>lr;
    cout << "length of row:" << endl;
    cin>>lc;


    int **td=new int[lr];
    for(int row=0; row<lr;row++)
    {
        td[row]= new int*[lr]
    }
   /* for(int pri=length-1; pri>0; pri--)
    {
        cout<<"elements are:"<<a[pri]<<endl;
    }
    delete[]a;
    a=NULL;
    return 0;
}
