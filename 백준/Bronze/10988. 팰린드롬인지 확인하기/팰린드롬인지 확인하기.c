#include <stdio.h>
int main(){
    char word[101];
    scanf("%s", word);
    
    int result=1;
    
    for(int i=0; i<(strlen(word)/2); i++){
        if(word[i]!=word[strlen(word)-1-i]){
            result = 0;
            break;
        }
        
    }
    printf("%d", result);
    return 0;
   
}