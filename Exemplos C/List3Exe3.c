#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[31], ch1;
    int v[30], x=0;

    scanf("%[^\n]", s);
    scanf(" %c", &ch1);

    for(int i=0; i<strlen(s); i++){
        if(toupper(s[i])==toupper(ch1)){
            v[x]= i;
            printf("%d ", v[x]);
            x++;
        }
    }

    return 0;
}
