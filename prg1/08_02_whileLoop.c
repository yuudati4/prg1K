//
//  08_02_whileLoop.c
//  prg1
//
//  Created by k22126kk on 2022/06/09.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n=0;
    printf("n? ");
    scanf("%d",&n);
    while(n>=0){
        printf("%d\n",n);
        n--;
    }
}
