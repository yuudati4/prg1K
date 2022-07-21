#include <stdio.h>
int main(int argc, const char* argv[])  {
    char array[] = "abcde";
    for(int i = 0; i < sizeof(array); i++){
        printf("%c", array[i]);
    }
    printf("\n"); 
    return 0;
}