#include <stdio.h>
#include <string.h>

int main(){
    char word[1000000];
    int i, j, max, len, result=0, select=0;
    int cnt[26]={0, };
    scanf("%s", word);
    len = strlen(word);
    
    for(i = 'a'; i <= 'z'; i++){
        for(j = 0; j < len; j++){
            if(i==word[j])
                cnt[i-'a']++;
        }
    }
    for(i = 'A'; i <= 'Z'; i++){
        for(j = 0; j < len; j++){
            if(i==word[j])
                cnt[i-'A']++;
        }
    }
    max=cnt[0];
    for(i = 0; i <26; i++){
        if(max<cnt[i]){
            max=cnt[i];
            select = i;
        }
    }
    for(i = 0; i <26; i++){
        if(max==cnt[i]){
            result++; //중복 알파벳 수
        }
    }
    if(result>1)
        printf("?\n");
    else printf("%c", select+'A');
    return 0;
    
}