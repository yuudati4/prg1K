#include <stdio.h>

int main(int argc, const char* argv[]) {
    int primeNumbers[101];
    int i,j,k;
    for(i = 2; i<=100; i++){
        primeNumbers[i]=1;
    }
    for(i = 2; i<=100; i++){
        k=i;
        if(primeNumbers[k]){
            for(j=k; j<=100; j+=k){
                primeNumbers[j]=0;
                
            }printf("%d, ",k);
        }
    }printf("\n");
    return 0;
}