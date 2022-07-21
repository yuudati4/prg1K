//
//  08_04_calcWhile.c
//  prg1
//
//  Created by k22126kk on 2022/06/09.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int x=1, sum=0;
    while(x!=0){
        printf("x? ");
        scanf("%d",&x);
        sum=sum+x;
        printf("sum: %d\n",sum);
    }
    printf("end\n");
}
