#include <stdio.h>
int main(int argc, const char * argv[]){
    int i, n;
    int a[101];
    for(i = 2; i <= 100; i ++){
        a[i] = i;
        for(n = 2; n < i ; n ++){
            if(i % n == 0){
                a[i] = 0;
                n = 2;
                break;
            }
        }
       
    }
    for(i = 0; i <= 100; i ++){
        if(a[i] == !0){
            printf("%d\n", a[i]);
        }
    }
    return 0;
}