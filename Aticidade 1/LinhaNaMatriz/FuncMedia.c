float Media(float Matriz[12][12], int Linha)
{
    float Result;
    for(int i=0; i<2; i++){
        Result= Result+Matriz[Linha][i];
    }
    Result= Result/2;
    return(Result);
}
