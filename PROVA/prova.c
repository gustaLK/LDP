#include<stdio.h>
#include<string.h>

void JuntaString(char *frase1, char *frase2, char *frase3)
{
    int i, x=0;

    for(i=(strlen(frase2)/2); i<strlen(frase2); i++){
        *(frase3+x)= *(frase2+i);
        x++;
    }

    for(i=0; i<(strlen(frase1)/2); i++){
        *(frase3+x)=*(frase1+i);
        x++;
    }
    *(frase3+x)='\0';
}

int main (){
    char frase1[100], frase2[100], frase3[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase1);
    printf("Digite outra frase: ");
    scanf(" %[^\n]", frase2);

    JuntaString(frase1, frase2, frase3);
    printf("%s", frase3);

    return 0;
}
