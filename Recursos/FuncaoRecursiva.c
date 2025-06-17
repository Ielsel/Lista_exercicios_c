/* 
Escreva um algoritmo que solicite ao usuário um número inteiro positivo e apresente
ao final a somatória de todos os inteiros positivos até o num informado 
5 => 5+4+3+2+1 = 15
*/
#include <stdio.h>            
#include <conio.h>

float SomaAntecessoresNormal(int valor) {
  int soma=0;
  for (int i=1; i<=valor; i+=1)
    soma = soma + i;                             
  return(soma);
}

float SomaAntecessoresRecursiva(int valor) {
  int soma;
  if (valor == 1)
    return(1); //condição de parada...
  else {
    soma = valor + SomaAntecessoresRecursiva(valor-1); //chamada recursiva
    return(soma);
  }
}

int main () {
 float Num1, Num2;
 printf("Informe o primeiro numero: ");
 scanf("%f",&Num1); 

 printf("\n A soma dos antecessores normal: %.2f", SomaAntecessoresNormal(Num1));
 printf("\n A soma dos antecessores recursiva: %.2f", SomaAntecessoresRecursiva(Num1));
 getch();
}
