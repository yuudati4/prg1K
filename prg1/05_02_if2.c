//
//  05_02_if2.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int a,b = 0;
    printf("a? ");
    scanf("%d",&a);
    printf("b? ");
    scanf("%d",&b);
    if(a==b)printf("aとbの値は等しいです");
    printf("計算終了\n");
    return 0;
}
