#include <stdio.h>
int maxOf(int x, int y)
{
    int m;
    if(x > y){
        m = x;
    }else {
        m = y;
    }
    return (m);
}

int main(int argc, const char* argv[])  {
    int a = 0;
    int b = 0;
    int max = 0;

    printf("a b? ");
    scanf("%d %d", &a, &b);

    max = maxOf(a, b);

    printf("大きい方の値は %d\n",max);

    return 0;
}