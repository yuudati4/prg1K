//
//  07_03_swap3.c
//  prg1
//
//  Created by k22126kk on 2022/06/02.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int x,y,z,temp =0;
    printf("x y z? ");
    scanf("%d %d %d",&x,&y,&z);
    if(x>z){
        temp = x;
        x = z;
        z = temp;
        printf("%d %d %d\n",x,y,z);
    }else if(y>z){
        temp = y;
        y = z;
        z = temp;
        printf("%d %d %d\n",x,y,z);
        }else if(x>y){
            temp = x;
            x = y;
            y = temp;
            printf("%d %d %d\n",x,y,z);
            }else printf("%d %d %d\n",x,y,z);
    
    return 0;
}
