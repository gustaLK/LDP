#include <stdio.h>
#include <string.h>

struct Livro
{
   int ano;
   char titulo[100];
   char autor[100];
   int nVolume; // Número de exemplares de um dado livro.
   float preco;
};

struct Livraria
{
   struct Livro V[100]; // Armazena a informação de n livros !!
   int nLivros; // Número de livros existentes na livraria.
};

struct Livro preencheLivro()
{
    struct Livro ler;

    printf("\nDigite o ano: ");
    scanf("%i", &ler.ano);
    printf("Digite o titulo: ");
    scanf(" %[^\n]", ler.titulo);
    printf("Digite o autor: ");
    scanf(" %[^\n]", ler.autor);
    printf("Digite o volume: ");
    scanf("%i", &ler.nVolume);
    printf("Digite o preco: ");
    scanf("%f", &ler.preco);
    return ler;

   // declarar var struct
   // pedir dados em tela
   // retornar var
}

void preencheLivraria(struct Livraria *liv, int numLivros)
{

   int i;

   liv->nLivros = numLivros;

   for (i=0;i<numLivros;i++)
   {
      liv->V[i]=preencheLivro();
   }

}

void mostraLivrosporNome(struct Livraria *liv, int numLivros)
{
   int i, j;
   struct Livro aux;
   for (i=0; i<numLivros-1; i++)
   {
      for (j=0; j<numLivros-1-i; j++)
      {
         if (strcmp(liv->V[j].titulo, liv->V[j+1].titulo) > 0)
         {
            aux = liv->V[j];
            liv->V[j] = liv->V[j+1];
            liv->V[j+1] = aux;
         }
      }
   }
   for (i=0; i<numLivros; i++)
   {
      printf("\nTitulo: %s", liv->V[i].titulo);
      printf("\nAutor: %s", liv->V[i].autor);
      printf("\nAno: %d", liv->V[i].ano);
      printf("\nNumero de exemplares: %d", liv->V[i].nVolume);
      printf("\nPreco: %.2f\n", liv->V[i].preco);
   }
}

float calcpreco(struct Livraria *liv, int numLivros){
    float preco=0;
    int i;
    for (i=0; i<numLivros; i++){
        preco+= liv->V[i].preco * liv->V[i].nVolume;
    }
    return preco;

}

int main()
{
   int qtlivros;
   struct Livraria livraria;

   printf("Informe a quantidade de livros ");
   scanf("%i",&qtlivros);

   preencheLivraria(&livraria, qtlivros);
   mostraLivrosporNome(&livraria, qtlivros);// chamar aqui função para mostrar todos os livros por ordem de nome

   printf("Preco da livraria: %.2f\n", calcpreco(&livraria, qtlivros));// chamar aqui função que RETORNE o custo da Livraria (soma dos valores dos livros)
   //  e exiba em tela.
   return 0;

}
