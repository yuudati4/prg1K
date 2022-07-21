#include <stdio.h>
int addOf(int a, int b){
    int add = 0;

    add = a + b;

    return add;
}

int main(int argc, const char* argv[]){
    int a,b,add = 0;
    printf("a b? ");
    scanf("%d %d",&a,&b);

    add = addOf(a,b);

    printf("和は %d\n",add);

    return 0;
}