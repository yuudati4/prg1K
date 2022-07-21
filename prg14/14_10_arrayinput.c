#include <stdio.h>
int main(int argc, const char* argv[]){
    double heights[5] = {0};
    double sum = 0;

    for(int i = 0; i <= 4; i++){
        printf("%d人目の身長? ",i+1);
        scanf("%lf",&heights[i]);

        sum += heights[i];
    }

    sum /= 5;

    printf("平均身長 = %f\n",sum);

    return 0;
}