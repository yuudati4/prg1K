//
//  06_01_if.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int a=0;
    printf("a? ");
    scanf("%d", &a);
    if(a>0)printf("aは正の値です\n");
    else if(a==0)printf("aは0です\n");
    else printf("aは負の値です\n");
    return 0;
}
