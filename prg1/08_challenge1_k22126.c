//
//  08_challenge1_k22126.c
//  prg1
//
//  Created by k22126kk on 2022/06/10.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    int input = 0;
    int n=2;
    printf("input ?");
    scanf("%d",&input);
    if(input <= 2){
        printf("%d",input);
        return 0;
    }//２以下の時の計算
    while(input != n){ //自身で割るのを除く
        if(input % n == 0){//割り切れるか
            input /= n;//割っていく
            printf("%d, ",n);//印字して
        }else{
            n++;//詰まった時に割る数を増やすやつ
            continue;//戻すため
        }
    }
    printf("%d\n",n);
}
