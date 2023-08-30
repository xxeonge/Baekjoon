#include <stdio.h>
int main(){
    char s[1000000];
    int i, len, cnt=0;
    
    scanf("%[^\n]", s);
    len = strlen(s);
    
    if(len == 1){ //공백이 입력됐을 때
        if(s[0] == ' '){
            printf("0\n");
            return 0;
        }
    }
    
    for(i = 1; i < len-1; i++){
        if(s[i] == ' '){
            cnt++;
        }
    }
    
    printf("%d", cnt+1);
    return 0;
}