//
//  05_challenge1_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/19.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int dayOfWeek,time,isOpen;
    printf("曜日? ");
    scanf("%d",&dayOfWeek);
    printf("時間帯? ");
    scanf("%d",&time);
    if(time == 0){
        if(dayOfWeek == 0||dayOfWeek == 6){
            printf("診療は行なっていません\n");
        }else{
            printf("診療を行なっています\n");
        }
    }else if(time == 1){
        if(dayOfWeek==0||dayOfWeek==3){
            printf("診療は行っていません\n");
        }else{
            printf("診療を行なっています\n");
        }
    }
}
 
