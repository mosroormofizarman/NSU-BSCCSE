#include<iostream>
#include<iomanip>

using namespace std;

const int MAX=80;
class person
{
private:
   char strName[MAX];
public:
   void getdata()
   {
      cout<<"Input Name: ";
      cin>>strName;

    }

    void  virtual dispname()
    {cout<<"Name:"<<strName<<endl;}

	void show()
	{
		dispname();
	}


};

class student:public person
{
private:
   char strSid[12];
public:
   void getdata()
   {
   person::getdata();
   cout<<"Input Student No:";
   cin>>strSid;
   }
   void dispname()
   {
    cout<<"Student No: "<<strSid<<endl;
	person::dispname();
   };

};

int main()
{
   student stu1;
   cout<<"Input data for student:"<<endl;
   stu1.getdata();
   cout<<"student: "<<endl;
   stu1.dispname();
   cout<<"Show:  "<<endl;
   stu1.show();
   return 12;

   }
