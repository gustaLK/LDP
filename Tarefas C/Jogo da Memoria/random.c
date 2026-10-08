#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

extern int valid (int *seq, char *resp, int fim);

int Random (int *seq){
    char resp1[75], resp2[75];
    int i=0, PS1=0, PS2=0, x;

    while(PS1==0 && PS2==0){
        *(seq+i)= rand() %10;
        i++;

        for(x=0; x<i; x++)
            printf("%d", *(seq+x));
        Sleep(5000);
        system("cls");


        printf("Jogador 1: ");
        scanf(" %s", resp1);
        system("cls");
        printf("Jogador 2: ");
        scanf(" %s", resp2);
        system("cls");

        PS1= valid(seq, resp1, i);
        PS2= valid(seq, resp2, i);
    }
    if(PS1==0 && PS2!=0)
        return 1;
    else if(PS1!=0 && PS2==0)
        return 2;
    else
        return 3;
}
