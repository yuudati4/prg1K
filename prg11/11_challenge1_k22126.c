#include <stdio.h>
int main(int argc, const char* argv[])  {
    char paragraph[] =
    "we hold these truths to be self-evident, that all men are created "
    "equal, that they are endowed by their creator with certain unalienable "
    "rights, that among these are life, liberty and the pursuit of "
    "happiness.";
    char searchTerm[13] = {'\0'};
    int index = 0;
    int searchAmount = 0;
    int flag = 1;

    printf("searchTerm: ");
    scanf("%s", searchTerm);

    for(searchAmount=0; searchTerm[searchAmount]!='\0'; searchAmount++);

    for(int i = 0; paragraph[i] != '\0'; i++) {
        if(paragraph[i] == searchTerm[0]) {
            index = i;
            for(int j = 0; searchTerm[j] != '\0'; j++) {
                if(searchTerm[j] == paragraph[index]) {
                    index ++;
                }else{
                    index = 0;
                    break;
                }
                if((searchAmount - 1 )== j){
                    printf("indexOf: %d\n",i);
                    flag = 0;
                }
            }
        }
    }
    if( flag ){
        printf("indexOf: -1\n");
    }

    return 0;
}