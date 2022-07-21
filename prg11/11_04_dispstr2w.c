#include <stdio.h>
int main(int argc, const char* argv[])  {
    char inputText[11] = {'\0'};
    int index = 0;

    printf("入力(10文字以内): ");
    scanf("%s", inputText);

    while(inputText[index] != '\0') {
        putchar(inputText[index++]);
    }
    putchar('\n');
    return 0;
}
