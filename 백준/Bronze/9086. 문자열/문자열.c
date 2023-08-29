#include <stdio.h>

int main(){
    int T;
    char a[101];
    
    scanf("%d", &T);
    
    while(T--){
        scanf("%s", a);
        printf("%c%c\n", a[0], a[strlen(a)-1]);
    }
    return 0;
}