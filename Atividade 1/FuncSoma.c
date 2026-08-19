float Soma(float Matriz[12][12], int Linha)
{
    float Result=0;
    for(int i=0; i<12; i++){
        Result += Matriz[Linha][i];
    }
    return(Result);
}
