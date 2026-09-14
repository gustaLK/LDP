#include<stdio.h>
int main(){
    int num=10;

    char aluno[101]={"Joao Victor"};
    int vetor[10]={10,20,30,40,50,60,70,80,90,100};
    int *pontint;  //armazena endereco de outra variavel

    pontint= vetor+4; //ponteiro e uma variavel que armazena endereco de outra variavel

    printf("Num: %p %i\n", &num, num);   //& -> endereco onde a variavel esta alocada
    printf("Pontint: %p %p %i \n", &pontint, pontint, *pontint);

    /*for (int i=0; aluno[i]!='\0'; i++)
        printf("%p %c\n", aluno+i, aluno[i]);   //nome da string e o endereco do indice 0*/

    for (int i=0; i<10; i++)
        printf("%p %i\n", vetor+i, *(vetor+i)); // * serve para declarar variavel e acessar o conteudo apontado
        //printf("%p %i\n", &vetor+i, vetor[i]);

    return 0;
}
