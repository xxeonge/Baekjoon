#include <stdio.h>
int main(){
    int m;
    char word[1000];
    
    scanf("%s\n", &word);
    scanf("%d", &m);
    printf("%c", word[m-1]);
        
    return 0;
}