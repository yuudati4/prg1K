//
//  03_06_scancalc.c
//  prg1
//
//  Created by k22126kk on 2022/04/28.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a,b,c,d,e,f;
    printf("a b? ");
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("%d + %d = %d\n",a,b,c);
    printf("%d - %d = %d\n",a,b,d);
    printf("%d * %d = %d\n",a,b,e);
    printf("%d / %d = %d\n",a,b,f);
    return 0;
}
