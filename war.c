// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// =============================================================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definição da struct território

typedef struct {
    char nome[30];
    char cor[10];
    int tropa;
}territorio;
//Função limpar buffer de entrada

void limpabufferDeEntrada(){
    int c; 
    while ((c = getchar())!= '\n' && c != EOF);
}
//Função principal main
int main(){
territorio game[5];

//Cadastro De Territórios

printf("========Cadastrando Territórios========\n");
printf("========-----------------------========\n");

for (int i = 0; i < 5; i++)
{
    printf("Território %d:\n", i + 1);
    //Nome dos Territórios
printf("Digite o nome do Território: ");
scanf("%s", &game[i].nome);
limpabufferDeEntrada(); //Limpa o 'n'deixado pelo sacanf.
//Nome da cor
printf("Digite uma Cor: ");
scanf("%s", &game[i].cor);
limpabufferDeEntrada(); //Limpa o 'n'deixado pelo sacanf.
//Quantidade de Tropas
printf("Digite a quantidade de Tropas: ");
scanf("%i", &game[i].tropa);
limpabufferDeEntrada(); //Limpa o 'n'deixado pelo sacanf.
}

//Exibe os dados cadastrados

printf("-------Dados Cadastrados-------");
printf("================================\n");
for (int i = 0; i < 5; i++)
{
    printf("Território %d:\n", i + 1);
    printf("Nome %s:\n", game[i].nome);
    printf("Cor Do Exército %s:\n", game[i].cor);
    printf("Tropas %d:\n", game[i].tropa);
    printf("===============================");
}

return(0);

}
