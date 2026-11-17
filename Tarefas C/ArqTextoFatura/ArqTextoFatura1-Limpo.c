// Criar as seguintes funcionalidades

   // 1-Mostrar todas as faturas ordenadas por nome de produto -|> *
   // Criar função que ordene por nome (por inserção)
   // Criar função que mostre as faturas (uma fatura por linha)

   // 2- Realizar pesquisa binária por número de fatura. Criar função -|> *
   // que peça ao usuário um número de fatura para pesquisa. Caso encontre,
   // mostrar os dados encontrados, senão emitir mensagem de erro.
   // Criar função para pesquisa binária

   // 3- Pesquisar uma fatura e mostrar todos os seus produtos.
   // Criar função para realizar uma pesquisa sequencial.

#include <stdio.h>
#include <stdlib.h>
#include "func-sub.c"
#include <ctype.h>

typedef struct fatura
{
	int numFatura;
	int codProduto;
	char nomeProduto[32];
	int qtde;
	double vrunit;
	double vrfrete;
	int codforn;
} Fatura;

void insercao (int tam, Fatura *vetor)
{
    int i,j, y;
	Fatura aux;
    j=1;
    while (j<=tam-1)
	{
		 aux = vetor[j];

		 i = j - 1;
         while (  i >= 0 &&  toupper(vetor[i].nomeProduto[0]) > toupper(aux.nomeProduto[0]) )
         {
		   vetor[i+1] = vetor[i];
	       i = i - 1;
		 }
        vetor[i+1] = aux;
        j = j + 1;

   }
}

void insercaoN (int tam, Fatura *vetor)
{
    int i,j, y;
	Fatura aux;
    j=1;
    while (j<=tam-1)
	{
		 aux = vetor[j];

		 i = j - 1;
         while (  i >= 0 &&  vetor[i].numFatura > aux.numFatura )
         {
		   vetor[i+1] = vetor[i];
	       i = i - 1;
		 }
        vetor[i+1] = aux;
        j = j + 1;

   }
}

void exibe (Fatura *vet){
    for(int i=0; i<=9; i++){
        printf("%d\t %d\t %-15s %i\t R$%.2f\t R$%.2f\t %i\n", vet[i].numFatura, vet[i].codProduto, vet[i].nomeProduto,
               vet[i].qtde, vet[i].vrunit, vet[i].vrfrete, vet[i].codforn);
   }
   return;
}

Fatura buscaB(Fatura *vet, int num){
    int ini=0, fim=9, meio;

    while (ini<=fim){
        meio= (ini+fim)/2;
        if (vet[meio].numFatura==num)
            return (vet[meio]);
        else if(vet[meio].numFatura<num)
            ini=meio+1;
        else
            fim=meio-1;
    }
    return vet[meio];
}

void buscaA (Fatura *vet){
    int num=2;
    Fatura ordNum[11];
    for(int i=0; i<=9; i++){
        ordNum[i]=vet[i];
    }
    insercaoN(10, ordNum);


    while (num!=0){
        printf("\nDigite o num da Fatura a ser procurada: ");
        scanf("%i", &num);
        ordNum[10]= buscaB(ordNum, num);
        if(ordNum[10].numFatura!=num)
            printf("Fatura nao encontrada!\n");
        else
        printf("%d\t %d\t %-15s %i\t R$%.2f\t R$%.2f\t %i\n", ordNum[10].numFatura, ordNum[10].codProduto, ordNum[10].nomeProduto,
                   ordNum[10].qtde, ordNum[10].vrunit, ordNum[10].vrfrete, ordNum[10].codforn);
    }
}

int LeArquivo(Fatura *vetor)
{
  char linha[200];
  char aux[40];
  FILE *arq;
  Fatura vfatura;
  int qtde=0;

  arq = fopen("fatura.txt","r");

  if (arq == NULL)
  {
    printf("Erro ao abrir arquivo\n");
    return -1;
  }
  fgets(linha,200,arq);
  while (!feof(arq))
  {
	//printf("\n%s",linha);
	substr(linha,aux,1,4);
	vfatura.numFatura = atoi(aux);
	substr(linha,aux,5,7);
	vfatura.codProduto = atoi(aux);
	substr(linha,aux,8,40);
	strcpy(vfatura.nomeProduto,rtrim(aux));
	substr(linha,aux,41,44);
	vfatura.qtde = atoi(aux);
	substr(linha,aux,45,54);
    vfatura.vrunit = atoi(aux)/100.0;
	substr(linha,aux,55,64);
    vfatura.vrfrete = atoi(aux)/100.0;
	substr(linha,aux,65,68);
	vfatura.codforn = atoi(aux);

	if (vfatura.codforn > 0 && vfatura.qtde > 0)
	{

	  vetor[qtde]=vfatura;
      qtde++;
    }

    fgets(linha,100,arq);
  }

  fclose(arq);
  return qtde;
}


int main()
{
   Fatura vetorFatura[20];
   int qtde;
   qtde = LeArquivo(vetorFatura);
   insercao(qtde, vetorFatura);

   exibe(vetorFatura);
   buscaA(vetorFatura);



}
