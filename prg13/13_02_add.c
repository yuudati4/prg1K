#include <stdio.h>
void addOf(int a, int b){
    printf("%d + %d = %d\n",a,b,a+b);
    return;
}

int main(int argc, const char* argv[]){
    int a = 5, b = 10, result = 0;
    addOf(a,b);
    return 0;
}