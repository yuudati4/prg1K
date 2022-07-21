#include <stdio.h>

int main(int argc, const char* argv[])  {
    int heights[5] = {0};
    double sum = 0;

    for(int i = 0; i < 5; i ++){
        printf("%d人目の身長? ",i+1);
        scanf("%d",&heights[i]);
        sum += heights[i];
    }
    sum /= 5;
    printf("%f\n",sum);
}