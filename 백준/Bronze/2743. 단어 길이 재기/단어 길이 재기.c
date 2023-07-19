#include <stdio.h>
int main(){
    char word[100];
    int size;
    scanf("%s", &word);
    for(int i=0; ; i++){
        if(word[i]=='\0')
            break;
    }
    size = strlen(word);
    printf("%d", size);
    
    return 0;
}