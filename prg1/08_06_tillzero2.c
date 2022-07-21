//
//  08_06_tillzero2.c
//  prg1
//
//  Created by k22126kk on 2022/06/10.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int wallet=1000,amount=0;
    while(wallet>0){
        printf("amount? ");
        scanf("%d",&amount);
        if(amount==0){
            printf("取引終了\n");
            break;
        }
        wallet = wallet - amount;
        printf("残高: %d\n",wallet);
    }
}
