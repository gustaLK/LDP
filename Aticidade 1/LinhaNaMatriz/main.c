#include <stdio.h>

extern float Soma(float Matriz[12][12], int Linha);
int main()
{
    float Matr[12][12], Result;
    int Linha;
    char Oper;

    scanf("%i", &Linha);
    scanf(" %c", &Oper);
    for(int l=0; l<2; l++){
        for(int c=0; c<2; c++){
            scanf("%f", &Matr[l][c]);
        }
    }
    if(Oper=='S'){
        Result= Soma(Matr, Linha);
    }
    //else if(Oper=='M'){
      //  Result=
    //}
    printf("%.1f", Result);

    return 0;
}
