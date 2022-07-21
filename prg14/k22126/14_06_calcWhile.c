#include <stdio.h>
int main(int argc, const char* argv[]){
    int n = 0;
    int sum = 0;
    int N = 0;

    printf("n? ");
    scanf("%d",&n);

    N = n;

    while(n>0){
        sum += n;
        n -= 1;
    }

    printf("1から%dまでの和は %d\n",N,sum);

    return 0;
}