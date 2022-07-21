//
//  06_issue1_k22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/26.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n=1;
    int height=0;
    double sum=0;
    printf("人数? ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d人目の身長は? ",i);
        scanf("%d",&height);
        sum = (sum + height);
    }
    sum = sum/n;
    printf("平均身長: %f\n",sum);
}
