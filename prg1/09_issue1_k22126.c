//
//  09_issue1_k22126.c
//  prg1
//
//  Created by k22126kk on 2022/06/17.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int a[3]={0};
    int b[3]={0};
    for(int i=0; i<3; i++){
        printf("a[%d]? ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<3; i++){
        printf("b[%d]? ",i);
        scanf("%d",&b[i]);
    }
    for(int i=0; i<3; i++){
        printf("a[%d] - b[%d] = %d\n",i,i,a[i]-b[i]);
    }
    return 0;
}
