int FuncChar(int *vetor, int proc)
{
    int i=0;
    for(i=0; i<7; i++){
        if(proc==*vetor)
            return i;
        vetor++;
    }
    return -1;
}

#include<stdio.h>
int main(){
    int Matriz[7]={1,2,3,4,5,6,7}, proc;

    printf("Escreva um numero de 1 -- 7: ");
    scanf("%i", &proc);

    printf("A posicao do num digitado na Matriz e: %i\n", FuncChar(Matriz, proc));

    return 0;
}
