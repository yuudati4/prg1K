//
//  04_04_convert.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int nx=0, ny=0;
    double dx=0, dy=0;
    printf("nx ny? ");
    scanf("%d %d", &nx, &ny);
    printf("nx/ny = %d\n", nx/ny);
    dx = nx;
    printf("dx/ny = %f\n", dx/ny);
    dy = ny;
    printf("nx/dy = %f\n", nx/dy);
    return 0;
}
