#include <stdio.h>
int main(){
    int T, R;
    char s[20];
    
    scanf("%d", &T);
    for (int i=0; i<T; i++){
        scanf("%d %s", &R, s);
        for (int j=0; j<strlen(s); j++)
            for(int k=0; k<R; k++)
                printf("%c", s[j]);
                printf("\n");
            
        }
 
}