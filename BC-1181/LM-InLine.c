#include <stdio.h>

float Soma(float Matriz[12][12], int Linha)
{
    float Result = 0;
    for (int i = 0; i < 12; i++)
    {
        Result += Matriz[Linha][i];
    }
    return (Result);
}

float Media(float Matriz[12][12], int Linha)
{
    float Result;
    for (int i = 0; i < 12; i++)
    {
        Result += Matriz[Linha][i];
    }
    return (Result/12);
}

int main()
{
    float Matr[12][12], Result;
    int Linha;
    char Oper;

    scanf("%d", &Linha);
    scanf(" %c", &Oper);
    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            scanf("%f", &Matr[l][c]);
        }
    }
    if (Oper == 'S')
    {
        Result = Soma(Matr, Linha);
    }
    else if (Oper == 'M')
    {
        Result = Media(Matr, Linha);
    }
    printf("%.1f\n", Result);

    return 0;
}
