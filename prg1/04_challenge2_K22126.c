//
//  04_challenge2_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int  total, legs, x;
    printf("total? ");
    scanf("%d",&total);
    printf("legs? ");
    scanf("%d",&legs);
    x = (legs - (2 * total))/2;
    printf("crane = %d, tortoise = %d\n", total-x, x);
}
