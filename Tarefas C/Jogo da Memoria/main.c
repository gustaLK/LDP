#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int Random (int *seq);

int main()
{
    int result, seq[75];
    srand(time(NULL));

    result= Random(seq);

    switch(result){
    case 1:
        printf("Jogador 1 Venceu");
        break;
    case 2:
        printf("Jogador 2 Venceu");
        break;
    case 3:
        printf("Empate, ambas respostas erradas");
        break;
    }

    return 0;
}
