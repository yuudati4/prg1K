//
//  08_issue1_k20000.c
//  prg1
//
//  Created by k22126kk on 2022/06/10.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int bank=1000,wallet=1000,amount=0;
    while(wallet > 0 && bank > 0 ){
        printf("amount? ");
        scanf("%d",&amount);
        if(amount==0){
            printf("取引終了\n");
            break;
        }
        wallet += amount;
        bank -= amount;
        printf("銀行: %d 財布: %d\n",bank,wallet);
    }
}
