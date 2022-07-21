//
//  05_08_nested.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int a,b=0;
    printf("a? ");
    scanf("%d",&a);
    printf("b? ");
    scanf("%d",&b);
    if(a>0&&b==0)printf("A\n");
    else if(a>0&&b>0)printf("B\n");
    else if(a>0)printf("C\n");
    else printf("D\n");
    return 0;
}
