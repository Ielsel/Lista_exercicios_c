#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real, test;
	
	printf("Informe o m�ltiplo a ser testado: ");
	scanf("%i", &test);
	
	printf("Digite um n�mero: ");
	scanf("%i", &real);
	
	if(real % 3 == 0){
		printf("O n�mero %i � m�ltiplo de %i", real, test);
	}else{
		printf("O n�mero %i n�o � m�ltiplo de %i", real, test);
	}
}
