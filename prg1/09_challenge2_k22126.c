//
//  09_challenge2_k22126.c
//  prg1
//
//  Created by k22126kk on 2022/06/16.
//

#include <stdio.h>
int main(int argc, const char* argv[]){
    char ch = 0;
    int isMinus = 0;
    int answer = 0;
    int box = 0;
    printf("equation? ");
    while((ch = getchar()) != '='){
        switch(ch){
            case '+':
                isMinus = 0;
            break;
        
            case '-':
                isMinus = 1;
            break;
        
       //  0 = + // 1 = -//
                
            case ' ':
                if(isMinus == 0){
                    answer += box;
                    box = 0;//初期化
                }else if(isMinus == 1){
                    answer -= box;
                    box = 0;//初期化
                }
            break;
                
            default:
                box = box * 10 + (int)ch - 48;
            break;
        }
    }
    printf("answer: %d\n",answer);
}
