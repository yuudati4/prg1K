//
//  05_01_if1.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int a = 0;
    printf("a? ");
    scanf("%d", &a);
    if (a>0)printf("aは正の値です\n");
    printf("計算終了\n");
    return 0;
}
