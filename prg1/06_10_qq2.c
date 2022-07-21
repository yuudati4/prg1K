//
//  06_10_qq2.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n=0;
    printf("n? ");
    scanf("%d",&n);
    for(int i=n;i<=n+2;i++){
        for(int j=1;j<=9;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
