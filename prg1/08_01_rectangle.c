//
//  08_01_rectangle.c
//  prg1
//
//  Created by k22126kk on 2022/06/09.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int h,w = 0;
    printf("h w? ");
    scanf("%d %d",&h,&w);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            putchar('#');
        } printf("\n");
    }
}
