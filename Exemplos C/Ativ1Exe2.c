#include <stdio.h>
#include <string.h>

void SubString(char origem[], char destino[])
{
    int i=0;

    while(origem[i] != ' '){
        destino[i]=origem[i];
        i++;
    }
    destino[i]='\0';
}

void SubString1(char origem[], char destino[]){
    int i=0, j=strlen(origem);

    while(origem[j] != ' ')
        j--;

    j++;
    while(origem[j] != '\0'){
        destino[i]=origem[j];
        j++;
        i++;
    }
    destino[i]='\0';
}

int main(){
    char Nome[101], PrimeiroNome[36], UltimoNome[36];

    scanf("%[^\n]", Nome);

    SubString1(Nome, UltimoNome);
    printf("%s, ", UltimoNome);

    SubString(Nome, PrimeiroNome);
    printf("%s\n", PrimeiroNome);

    return 0;
}
