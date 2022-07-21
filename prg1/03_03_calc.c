//
//  03_03_calc.c
//  prg1
//
//  Created by k22126kk on 2022/04/28.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a,b,c,d,e;
    a=3;
    b=4;
    c=2;
    d=8;
    e=a + b * c / d;
    printf("%d + %d * %d / %d = %d\n",a,b,c,d,e);
    return 0;
}
