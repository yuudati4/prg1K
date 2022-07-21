#include <stdio.h>
#include <math.h>

int main(int argc, const char* argv[])  {
    int heights[5] = {0};
    int weights[5] = {0};
    int THRESHOLD = 23;
    double standardWeight;
    double bmi = 0;

    for(int i = 0; i < 5; i++){
        printf("%d人目の身長と体重? ",i+1);
        scanf("%d %d", &heights[i], &weights[i]);
    }//入力

    printf("--- しきい値を超えた人 ---\n");

    for(int i = 0; i < 5; i ++){
        bmi = weights[i] / pow(heights[i]*0.01, 2);
        standardWeight = (heights[i] - 100) * 0.9;
        if(bmi >= THRESHOLD){
            printf("%d人目のBMI: %f, 標準体重との差: %f\n",i+1,bmi,weights[i]-standardWeight);
        }//出力
    }
}