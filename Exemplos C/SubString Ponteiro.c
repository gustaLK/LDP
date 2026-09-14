void substring(char *string, char *string1, //passagem de parametro por referencia
               int ini, int fim)//passagem por valor
{
    int i;
    for (i+ini; i<=fim; i++){
        *string1= *(string+i);
        string1++;
    }
    *string1='\0';
}
