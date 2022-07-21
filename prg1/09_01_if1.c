//
//  09_01_if1.c
//  prg1
//
//  Created by k22126kk on 2022/06/16.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n = 0;
    printf("n? ");
    scanf("%d",&n);
    if(n==1){
        printf("AAA\n");
    }else if(n==2){
        printf("BBB\n");
    }else{
        printf("Defaultです.\n");
    }
}
