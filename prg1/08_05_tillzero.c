//
//  08_05_tillzero.c
//  prg1
//
//  Created by k22126kk on 2022/06/09.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int wallet=1000,amount=0;
    while(wallet>0){
        printf("amount? ");
        scanf("%d",&amount);
        wallet = wallet - amount;
        printf("残高: %d\n",wallet);
    }
}
