//
//  04_challenge1_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x,x1,x10,x100,rx;
        printf("x? ");
        scanf("%d",&x);
        
        x1=x/100;                //1keta
        x10=(x/10)-(x1*10);      //2keta
        x100=x-(x1*100)-(x10*10);//3keta
        
        rx=(x100*100)+(x10*10)+(x1);
        
        printf("reverse x = %d\n", rx);
}
