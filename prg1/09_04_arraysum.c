//
//  09_04_arraysum.c
//  prg1
//
//  Created by k22126kk on 2022/06/17.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char* argv[]){
    int array[]={11,12,13,14,15,16,17,18,19,20};
    int n = 10;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    printf("合計 = %d\n",sum);
    return 0;
}
