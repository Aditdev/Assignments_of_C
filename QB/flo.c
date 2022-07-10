#include <stdio.h>
#include <math.h>
int main()
{
    double flt = -12.43445554665676782, rl;
    rl = fabs(flt);
    printf("the result is %lf\n", rl);
    rl = ceil(flt);
    printf("the result is %lf\n", rl);
    rl = floor(flt);
    printf("the result is %lf\n", rl);

    /*
    fabs->
    * Double input
    * double o/p
    * abs value till 6 decimals
    ceil->
    * 12.2->12
    * Previous Number
    *
    floor->
    * 12.2 ->13
    * Next number
    *
    */
    return 0;
}