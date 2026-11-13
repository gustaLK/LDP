#include <stdio.h>

int Digitos(int N)
{
    /*int cont =1;
    while(N>9){
        N = N / 10;
        cont++;
    }*/
    if (N<9)
        return 1;
    if (N>9)
        return Digitos(N/10) + 1;
}

int main(){
    int n=1500;

    printf("%i", Digitos(n));
    return 0;
}
