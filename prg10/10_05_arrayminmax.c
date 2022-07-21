#include <stdio.h>

int main(int argc, const char* argv[]){
    int heights[5] = {0};
    int max = 0;
    int min = 0;

    for(int i = 0; i < 5; i ++){
        printf("%d人目の身長? ",i+1);
        scanf("%d",&heights[i]);
    }

    min = max = heights[0]; //初期化

    for(int i = 1; i < 5; i++){
        if(heights[i]<heights[i-1]){
            min = heights[i];
        }
        if(heights[i]>heights[i-1]){
            max = heights[i];
        }
    }

    printf("最小身長は %d\n",min);
    printf("最大身長は %d\n",max);
}