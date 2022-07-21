#include <stdio.h>

int main(int argc, const char* argv[]){
    int evenNumbers[5] = {0};
    int sum = 0;

    for (int i = 1; i <= 5; i++){
        evenNumbers[i-1] = i*2;
        // printf("%d\n",evenNumbers[i-1]);
    }

    for (int i = 0; i < 5; i++){
        sum += evenNumbers[i];
    }

    printf("合計 = %d\n",sum);
}
