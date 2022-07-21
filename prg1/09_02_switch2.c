//
//  09_02_switch2.c
//  prg1
//
//  Created by k22126kk on 2022/06/16.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    char ch = 0;
    printf("text? ");
    while((ch = getchar())!='\n'){
        switch(ch){
        case' ':
            printf("\n");
            break;
        default:
            printf("%c",ch);
            break;
        }
    }
    printf("\n");
    return 0;
}
