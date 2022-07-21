//
//  03_issue1_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/04/28.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a,b,c,d;
    a=6;
    b=4;
    c=2;
    d=a-(b/c);
    printf("%d - (%d / %d) = %d\n",a,b,c,d);
    return 0;
}
