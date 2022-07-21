//
//  07_01_swap.c
//  prg1
//
//  Created by k22126kk on 2022/06/02.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int x,y,temp = 0;
    printf("x y? ");
    scanf("%d %d",&x,&y);
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
    return 0;
}
