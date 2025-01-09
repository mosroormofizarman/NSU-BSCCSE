#ifndef SWAPTC_H
#define SWAPTC_H

template <class T>
class SwapTC
{
    public:
        /** Default constructor */
        SwapTC();
        void getdata();
        void swapv();
        void display();

        /** Default destructor */
        //virtual ~SwapTC();

    protected:
    private:
        //int a,b;
        T a,b;
        };

#endif // SWAPTC_H
