#include <stdio.h>
int main(int argc, const char* argv[]){
    int amount = 0;
    int wallet = 1000;

    while(wallet > 0){
        printf("amount? ");
        scanf("%d", &amount);

        if(amount == 0){
            printf("取引終了\n");
            break;
        }

        wallet -= amount;

        printf("残高: %d\n",wallet);
    }

    return 0;
}