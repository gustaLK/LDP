#include <stdio.h>
#include <string.h>

void SubString(char origem[], char destino[], int posini, int posfinal)
{
    int i, j=0;

    for (i=posini; i<=posfinal; i++, j++)
        destino[j]=origem[i];

    destino[j]='\0';
}

void Curso(char CodCurso[]){
    if (strcmp(CodCurso, "048")==0)
        strcpy(CodCurso, "Análise e Desenvolvimento de Sistemas (ADS)");

    else if (strcmp(CodCurso, "100")==0)
        strcpy(CodCurso, "Fabricação Mecânica (FMEC)");

    else if (strcmp(CodCurso, "099")==0)
        strcpy(CodCurso, "Projetos Mecânicos (PMEC)");

    else if (strcmp(CodCurso, "061")==0)
        strcpy(CodCurso, "Sistemas Biomédicos");

    else if (strcmp(CodCurso, "074")==0)
        strcpy(CodCurso, "Logística");

    else if (strcmp(CodCurso, "073")==0)
        strcpy(CodCurso, "Eletrônica Automotiva");

    else if (strcmp(CodCurso, "080")==0)
        strcpy(CodCurso, "Eletrônica Automotiva");

    else if (strcmp(CodCurso, "081")==0)
        strcpy(CodCurso, "Processos Metalúrgicos");

    else if (strcmp(CodCurso, "128")==0)
        strcpy(CodCurso, "Manufatura Avançada");

    else if (strcmp(CodCurso, "064")==0)
        strcpy(CodCurso, "Gestão Empresarial – EAD");

    else if (strcmp(CodCurso, "136")==0)
        strcpy(CodCurso, "Gestão da Qualidade");

    else if (strcmp(CodCurso, "068")==0)
        strcpy(CodCurso, "Manutenção de Aeronaves");

    else if (strcmp(CodCurso, "149")==0)
        strcpy(CodCurso, "Logística – AMS");

    else if (strcmp(CodCurso, "143")==0)
        strcpy(CodCurso, "Análise e Desenvolvimento de Sistemas – AMS");

    else if (strcmp(CodCurso, "100")==0)
        strcpy(CodCurso, "Automação Industrial");

    else
        strcpy(CodCurso, "Curso nao cadastrado");

}

int main(){
    char RA[14], RAParte[44];

    scanf("%s", RA);

    printf("Unidade: Fatec Sorocaba\n");

    SubString(RA, RAParte, 3, 5);
    Curso(RAParte);
    printf("Curso: %s\n", RAParte);

    SubString(RA, RAParte, 6, 7);
    printf("Ano de ingresso: 20%s\n", RAParte);

    SubString(RA, RAParte, 8, 8);
    printf("Semestre de ingresso: %so semestre\n", RAParte);

    SubString(RA, RAParte, 9, 9);
    if(strcmp(RAParte, "1")==0)
        strcpy(RAParte, "Diurno");
    else if(strcmp(RAParte, "2")==0)
        strcpy(RAParte, "Matutino");
    else if(strcmp(RAParte, "3")==0)
        strcpy(RAParte, "Noturno");
    printf("Periodo: %s\n", RAParte);

    SubString(RA, RAParte, 10, 12);
    printf("Numero sequencial: %s\n", RAParte);

    return 0;
}
