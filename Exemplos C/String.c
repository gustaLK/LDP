#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char cidade[21];

    printf("Informe uma cidade: ");
    //scanf("%s", cidade);
    gets(cidade); //faz o msm que [^\n]
    fflush(stdin); //apaga o "enter/espaço" que fica no buffer
    printf("\nCidade informada: %s\n", cidade);

    for(int i=0; i<strlen(cidade); i++)
        printf("%c   %p\n", cidade[i], cidade+i);

    //printf("\nNome do vetor: %p", cidade);
    //printf("\nCaracter do vetor[0]: %c", cidade[0]);*

    //if(cidade == "sorocaba") Não Pode, ta errado!!
    if(stricmp(cidade, "sorocaba")==0) //o i faz ele n diferenciar Maiuscula e Minuscula
        printf("iguais");
    else
        printf("diferente");

    //cidade= "itu"; Nao Pode!!
    strcpy(cidade, "Itu");
    printf("\n%s\n", cidade);

    //strupr(cidade);
    strlwr(cidade);
    printf("\n%s", cidade);

    printf("\n%c", toupper(cidade[2]));

    strcat(cidade, " das artes");
    printf("\n%s", cidade);


    return 0;
}
