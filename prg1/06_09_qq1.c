//
//  06_09_qq1.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
