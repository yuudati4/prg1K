//
//  07_05_countdown.c
//  prg1
//
//  Created by k22126kk on 2022/06/02.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n = 0;
    printf("n? ");
    scanf("%d",&n);
    for(int i = n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
