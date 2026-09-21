#include <stdio.h>
#include <string.h>
void Cripto(char *txt1, char *txt2)
{
    char Controle1[15]={"AaBbCcDdE123796"};
    char Controle2[15]={"m@$&!/#eIiOoUuM"};
    int i, c;

    for(i=0; i<strlen(txt1); i++){
        for(c=0; c<=15; c++){
            if(*(txt1+i)==*(Controle1+c)){
                *(txt2+i)=*(Controle2+c);
                break;
            }
            else if(*(txt1+i)==*(Controle2+c)){
                *(txt2+i)=*(Controle1+c);
                break;
            }
            else
                *(txt2+i)=*(txt1+i);

        }
    }
    *(txt2+i)='\0';
}

int main()
{
    char texto1[9], texto2[9], texto3[9] ;

    printf( "Informe um texto de até 8 caracteres:" );
    scanf( "%[^\n]", texto1 );

    Cripto( texto1, texto2 );
    Cripto( texto2, texto3 );

    printf( "O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3 );

return 0;
}
