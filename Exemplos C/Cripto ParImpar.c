#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cripto(char *mensagem, char *msgCripto)
{
    int i;
    for(i=0; i<strlen(mensagem); i++){
        if(isalpha(*(mensagem+i))){
            if((1+i)%2==0){
                *(msgCripto+i)= *(mensagem+i)-1;
                if(*(msgCripto+i)=='`' || *(msgCripto+i)=='@')
                    *(msgCripto+i)= *(msgCripto+i)+26;
            }
            else
                *(msgCripto+i)= *(mensagem+i)+1;
                if(*(msgCripto+i)=='{' || *(msgCripto+i)=='[')
                    *(msgCripto+i)= *(msgCripto+i)-26;
        }
        else
            *(msgCripto+i)= *(mensagem+i);
    }
    *(msgCripto+i)= '\0';
}

int main(){
    char mensagem[41], msgCripto[41];

    printf("Digite uma palavra: ");
    scanf("%[^\n]", mensagem);
    while(stricmp(mensagem, "FIM")!=0){
        cripto(mensagem, msgCripto);
        printf("%s\n", msgCripto);

        printf("Digite uma palavra: ");
        scanf(" %[^\n]", mensagem);
    }
    return 0;
}
