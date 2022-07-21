//
//  09_01_switch1.c
//  prg1
//
//  Created by k22126kk on 2022/06/16.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int n = 0;
    printf("n? ");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("AAA\n");
            break;
        case 2:
            printf("BBB\n");
            break;
        default:
            printf("Defaultです.\n");
            break;
    }
}
