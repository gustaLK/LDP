float Media(float Matriz[12][12], int Linha)
{
    float Result=0;
    for(int i=0; i<12; i++){
        Result= Result+Matriz[Linha][i];
    }
    Result= Result/12;
    return(Result);
}
