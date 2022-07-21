//
//  09_05_arrayloop.c
//  prg1
//
//  Created by k22126kk on 2022/06/17.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int array[100] = {0};
    int n = 100;
    for(int i=0; i<n; i++){
        array[i]=i;
    }
    
    for(int i=0; i<n; i++)printf("array[%d]: %d\n",i,array[i]);
    return 0;
}
