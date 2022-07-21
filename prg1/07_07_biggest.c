//
//  07_07_biggest.c
//  prg1
//
//  Created by k22126kk on 2022/06/02.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int x,max = 0;
    for(int i=1;i<=5;i++){
        printf("%d? ",i);
        scanf("%d",&x);
        if(max < x){
            max=x;
        }
    }
    printf("max = %d\n",max);
    return 0;
}
