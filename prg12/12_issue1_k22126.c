#include <stdio.h>
long factOf(int n){
    long fact = 1;
    for(int i = n; i > 0; i--){
        fact *= i;
    }
    return fact;
}

int main(int argc, const char* argv[]){
    int n = 0;
    printf("n? ");
    scanf("%d",&n);

    printf("%dの階乗は %ld\n",n,factOf(n));

    return 0;
}