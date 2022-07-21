#include <stdio.h>

int main(int argc, const char* argv[])  {
    int heightsCm[5] = {0};
    double heightsMeter[5] = {0};
    for(int i = 0; i < 5; i++){
        printf("%d人目の身長(cm)? ",i+1);
        scanf("%d",&heightsCm[i]);
        heightsMeter[i] = (double)heightsCm[i] / 100;
    }

    printf("--- Convert Meter ---\n");

    for(int i = 0; i < 5; i++){
        printf("%d人目の身長: %f m\n",i+1, heightsMeter[i]);
    }
}