//
//  05_03_ifelse1.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int a,b=0;
    printf("a? ");
    scanf("%d",&a);
    if(a>=0)printf("aは正の値もしくは0です\n");
    else printf("aは負の値です\n");
    return 0;
}
