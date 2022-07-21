//
//  05_issue1_K20000.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int x,H=0;
    printf("x? ");
    scanf("%d",&x);
    H=x%2;
    if(H==0&&x!=0)printf("2の倍数です\n");
    else printf("2の倍数ではありません\n");
    if(H==0&&x!=0)printf("3の倍数です\n");
    else printf("3の倍数ではありません\n");
    return 0;
}
