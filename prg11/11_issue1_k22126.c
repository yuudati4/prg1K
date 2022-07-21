#include <stdio.h>
int main(int argc, const char* argv[])  {
    char inputText[21] = {'\0'};
    int isPalindrome = 1;
    int k=0;

// 入力
    printf("input(20文字以下): ");
    scanf("%s", inputText);

// 文字数計算
    for(k=0; inputText[k]!='\0'; ++k);


// 回文かどうかの判定
    for(int i = 0; inputText[i] != '\0'; i++){
        if(inputText[i] == inputText[k-1-i]){
            isPalindrome *= 1 ;
        }else{
            isPalindrome *= 0 ;
        }
    }


// 印字
    if(isPalindrome == 1){
        printf("回文OK\n");
    }else{
        printf("回文NG\n");
    }

    return 0;
}