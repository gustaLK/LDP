#include <stdio.h>

extern float Media(float Matriz[12][12], int Linha);
extern float Soma(float Matriz[12][12], int Linha);
int main()
{
    float Matr[12][12], Result;
    int Linha;
    char Oper;

    scanf("%d", &Linha);
    scanf(" %c", &Oper);
    for(int l=0; l<12; l++){
        for(int c=0; c<12; c++){
            scanf("%f", &Matr[l][c]);
        }
    }
    if(Oper=='S'){
        Result= Soma(Matr, Linha);
    }
    else if(Oper=='M'){
        Result= Media(Matr, Linha);
    }
    printf("%.1f", Result);

    return 0;
}
