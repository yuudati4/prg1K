//
//  05_05_ifelseif1.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int a,b=0;
    printf("a? ");
    scanf("%d",&a);
    printf("b? ");
    scanf("%d",&b);
    if(a>=b)printf("aはb以上です\n");
    else if(a==0)printf("aは0です\n");
    else printf("aはb未満です\n");
    return 0;
}
                   
