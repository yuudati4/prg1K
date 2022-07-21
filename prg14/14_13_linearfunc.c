#include <stdio.h>

int fxOf(int x, int y){
    y = 2*x + 1;
    return y;
}

int main(int argc, const char* argv[]){
    int fx[5] = {0};
    int y = 0;
    for(int i = 0; i < 5; i++){
        printf("f(%d)=%d\n",i,fxOf(i,y));
    }

    return 0;
}