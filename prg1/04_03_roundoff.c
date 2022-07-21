//
//  04_03_roundoff.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int nx=0;
    double dx=0;
    printf ("dx? ");
    scanf("%lf", &dx);
    printf("dx/2 = %f\n", dx/2);
    nx = dx;
    printf("nx = %d\n", nx);
    printf("nx/2 = %d\n", nx/2);
    return 0;
}
