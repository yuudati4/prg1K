//
//  06_05_scanLoop.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int a=0;
    for(int i=1;i<=5;i++){
        printf("a? ");
        scanf("%d", &a);
        printf("%d; %d\n",i,a);
    }
    return 0;
}
