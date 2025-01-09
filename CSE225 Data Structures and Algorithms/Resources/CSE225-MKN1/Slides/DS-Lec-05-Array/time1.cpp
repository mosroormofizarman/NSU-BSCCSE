#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int a = 40000, sum=0;

    clock_t start = clock();
    for (int i=0; i<a; i++) {
        for (int k = 0; k<a; k++)
            sum += 1;
    }
    cout.precision(10);
    cout << fixed <<  float(clock() - start)/CLOCKS_PER_SEC  << endl;
    return 0;
}
