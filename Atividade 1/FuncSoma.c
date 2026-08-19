float Soma(float Matriz[12][12], int Linha)
{
    float Result=0;
    for(int i=0; i<2; i++){
        Result= Result + Matriz[Linha][i];
    }
    return(Result);
}
