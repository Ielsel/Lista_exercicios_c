#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real;
	
	printf("Digite um n�mero: ");
	scanf("%i", &real);
	
	if(real % 2 == 0){
		printf("O n�mero %i � par", real);
	}else{
		printf("O n�mero %i � �mpar", real);
	}
}
