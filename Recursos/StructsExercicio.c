/* Exercício utilizando estruturas em linguagem de programação C */
#include<stdio.h>
#include<conio.h>

struct Aluno {
  char  Nome[30];
  int   Idade;
  float Nota;
};

int main() {
  struct Aluno vetorAluno[100];
  int qtd, i; char resposta;
  printf("Informe a quantidade de alunos: ");
  scanf("%d", &qtd);
  for (i=0; i<qtd; i++) {
    printf("Informe o nome do %d. aluno: ", i+1);
    scanf(" %[^\n]s", &vetorAluno[i].Nome);
    printf("Informe a idade de %s: ", vetorAluno[i].Nome);
    scanf("%d", &vetorAluno[i].Idade);
    printf("Informe a nota de %s: ", vetorAluno[i].Nome);
    scanf("%f", &vetorAluno[i].Nota);
  }
        
  do{
    printf("\n");
    printf("Informe a posição do registro a imprimir: ");
    scanf("%d", &qtd);
    printf("\n Nome: %s", vetorAluno[qtd-1].Nome);
    printf("\n Idade: %i", vetorAluno[qtd-1].Idade);
    printf("\n Nota: %.2f", vetorAluno[qtd-1].Nota);
    printf("\n Deseja imprimir outro? [S/N]");
    scanf("%s", &resposta);
    }
    while (resposta == 'S' || resposta == 's');
    
}
