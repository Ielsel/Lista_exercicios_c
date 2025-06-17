#include <stdio.h>
#include <locale.h>

/*
Escreva um algoritmo que:
1. Declare uma variável cont = 1
2. Enquanto cont for menor ou igual a 5
3. Declarar a variável X e solicitar um número inteiro
4. Efetuar a multiplicação de X por 3 e gravar em R
5. Exibir o novo valor de variável R
6. Quando o valor de cont for maior do que 5, encerrar o programa
*/

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int x, R, cont = 1;
	
	while(cont <= 5){
		printf("Digite o %dº valor: ", cont);
		scanf("%i", &x);
		
		R = x * 3;
		printf("%d x 3 = %i \n", x ,R);
		
		cont++;
	}
	printf("Programa encerrado!");
}
