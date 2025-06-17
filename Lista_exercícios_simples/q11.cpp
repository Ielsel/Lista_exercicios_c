#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	char nome1, nome2;
	float peso1, peso2;
	
	printf("Digite um nome: ");
	scanf("%c", &nome1);
	
	printf("Digite o peso: ");
	scanf("%f", &peso1);
	
	printf("Digite outro nome: ");
	scanf("%c", &nome2);
	
	printf("Digite o peso: ");
	scanf("%f", &peso2);
	
	if(peso1 > peso2){
		printf("%c é mais pesado(a) que %c", nome1, nome2);
	}else{
		printf("%c é mais pesado(a) que %c", nome2, nome1);
	}
}
