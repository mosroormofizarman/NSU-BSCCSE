#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

template<class T>
inline swap(T& v1,T& v2)
{
  T temp=v2;
  v2=v1;
  v1=temp;
};
template<class T>
quicksort(T *array,int hi,int lo=0)
{
  while(hi>lo)
  {
    int i=lo;
    int j=hi;
    do
    {
      while(array[i]<array[lo]&&i<j)
        i++;
      while(array[--j]>array[lo])
      if(i<j)
         swap(array[i],array[j]);
     }while(i<j);

     swap(array[lo],array[j]);
     if(j-lo>hi-(j+1))
     {
       quicksort(array,j-1,lo);
       lo=j+1;
      }
	 else
	 { quicksort(array,hi,j+1);
       hi=j-1;
   }
}
}
int main()
{
   int dim;
   cout<<"How many integers?"<<endl;
   cin>>dim;
   int *arrs=new int[dim+1];
   int i=0;
   for(;i<dim;i++)
   arrs[i]=rand();
   cout<<endl<<"..........unsorted................"<<endl;
   for(i=0;i<dim;i++)
   cout<<setw(8)<<arrs[i];
   quicksort(arrs,dim);
   cout<<endl<<"...........sorted................."<<endl;
   for(i=0;i<dim;i++)
   cout<<setw(8)<<arrs[i];
   delete arrs;
   return 0;
}
