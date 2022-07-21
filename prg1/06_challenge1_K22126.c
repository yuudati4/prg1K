//
//  06_challenge1_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n=0;
    int isPrimeNumber=0;
    printf("n? ");
    scanf("%d",&n);
    for(int i=n-1;i>=2;i--){
        if(n%i==0){
            isPrimeNumber=1;
        }
    }
    if(isPrimeNumber==1){
        printf("素数ではありません\n");
    }else {
        printf("素数です\n");
    }
    return 0;
}
