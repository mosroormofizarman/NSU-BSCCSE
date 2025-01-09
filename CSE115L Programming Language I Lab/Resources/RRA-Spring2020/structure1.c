#include <stdio.h>

struct Distance {
    int feet;
    float inch;
}d1, d2, sum;

int main() {
    printf("Enter the first distance in feet and inches ");
    scanf("%d", &d1.feet);
    scanf("%f", &d1.inch);

    printf("Enter the second distance in feet and inches ");
    scanf("%d", &d2.feet);
    scanf("%f", &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch >= 12)
    {
        sum.feet++;
        sum.inch -= 12;
    }

    printf("\nThe result distance is %d feet %.2f inches.", sum.feet, sum.inch);
    return 0;
}
