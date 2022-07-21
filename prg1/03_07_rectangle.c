//
//  03_07_rectangle.c
//  prg1
//
//  Created by k22126kk on 2022/04/28.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a,b,c,d;
    printf("a b?");
    scanf("%d %d",&a,&b);
    c=a*2+b*2;
    d=a*b;
    printf("perimeter = %d\n",c);
    printf("area = %d\n",d);
    return 0;
}
