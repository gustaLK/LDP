#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char Pal[31], Letra;
    int QtdLetra=0;

    scanf("%s", Pal);
    scanf(" %c", &Letra);
    for(int i=0; i<strlen(Pal); i++){
        if(toupper(Pal[i])==toupper(Letra))
            QtdLetra++;
    }
    printf("%d\n", QtdLetra);

    return 0;
}
