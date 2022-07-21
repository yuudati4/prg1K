#include <stdio.h>
int main(int argc, const char* argv[]){
    char c;

    printf("c? ");
    c = getchar();

    if(c == 'L'){
        printf("Left\n");
    }else if(c == 'R'){
        printf("Right\n");
    }else{
        printf("nop\n");
    }

    return 0;
}