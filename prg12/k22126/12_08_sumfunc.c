#include <stdio.h>
int sumOf(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(int argc, const char* argv[]) {
    int n = 0;
    printf("n? ");
    scanf("%d", &n);
    printf("1から%dまでの和は %d\n",n,sumOf(n));
    return 0;
}