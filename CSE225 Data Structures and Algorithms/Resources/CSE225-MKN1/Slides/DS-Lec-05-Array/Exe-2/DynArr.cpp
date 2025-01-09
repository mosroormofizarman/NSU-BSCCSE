#ifndef DYNARR_CPP
#define DYNARR_CPP

#include "DynArr.h"
#include <iostream>

using namespace std;

DynArr:: DynArr()
{
    data = NULL;
    size = 0;
}

DynArr::DynArr (int s)
{
    data = new int [s];
    size = s;
}

DynArr:: ~DynArr()
{
    delete [] data;
}

int DynArr:: get (int index)
{
    return data [index];
}

void DynArr:: set (int index, int value)
{
    data [index] = value;
}

void DynArr:: allocate (int s)
{
    if(size==NULL)
        {
            data= new int[s];
            size=s;
        }
}
#endif // DYNARR_CPP
