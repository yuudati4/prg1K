#include <stdio.h>

int main(int argc, const char* argv[])  {
    int a[5] = {1,2,3,4,5};
    int x, y;
    int temp;

    printf("何番目を入れ替えますか? ");
    scanf("%d %d",&x,&y);
    //printf("%d %d",x,y); CHECK

    temp = x;
    x = y;
    y = temp;
    a[y-1] = x;
    a[x-1] = y;

    for(int i = 0; i<5; i++) {
        printf("a[%d]=%d\n",i,a[i]);
    }

}