//
//  07_06_fact.c
//  prg1
//
//  Created by k22126kk on 2022/06/02.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int x,n,fact = 1;
    printf("x n? ");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++){
        fact=fact*x;
    }
    printf("%d^%d = %d\n",x,n,fact);
    return 0;
}
