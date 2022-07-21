//
//  09_03_switch3.c
//  prg1
//
//  Created by k22126kk on 2022/06/17.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char* argv[]){
    int menu = 0;
    double x,value = 0;
    printf("x? ");
    scanf("%lf",&x);
    
    printf("--- menu ---\n");
    printf("1: 絶対値, 2: 二乗, 3: 三乗\n");
    printf("menu no? ");
    scanf("%d",&menu);
    
    switch(menu){
        case 1:
            value=fabs(x);
            printf("|%f| = %f\n",x,value);
            break;
        case 2:
            value=pow(x,2);
            printf("%f ^ 2 = %f\n",x,value);
            break;
        case 3:
            value=pow(x,3);
            printf("%f ^ 3 = %f\n",x,value);
            break;
        default:
            break;
    }
    return 0;
}
