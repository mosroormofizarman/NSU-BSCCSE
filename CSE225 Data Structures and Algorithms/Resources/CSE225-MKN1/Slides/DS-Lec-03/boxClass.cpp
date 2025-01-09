#include <iostream>
using namespace std;

class box
{
//private:
   double dLength,dWidth,dHeight;
   double dVolume;
public:
   double vol();
   box();
   box(double, double , double);
   ~box(void);
}
;
double box::vol()
{
return dLength * dWidth * dHeight;
}

box::box()
{
dLength=0;
dHeight=0;
dWidth=0;
}

box::box(double l,double w,double h)
{
       dLength = l;
	   cout<<"Construction function and the length is "<<dLength<<endl;
	   dWidth = w;
	   dHeight = h;
}

box::~box(void)
{
cout<<"Deconstructing, the length is "<<dLength<<endl;
}

box x(1 ,2 ,30);

main()
{
	    cout<<"Program begin"<<endl;
 		box a(12,12,12);
		box b(55,34,76);

		cout<<a.vol()<<endl;
		cout<<b.vol()<<endl;
	    //cout<<a.dLength<<endl;;*/
		cout<<"Program end"<<endl;

}
