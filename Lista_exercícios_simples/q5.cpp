#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real;
	
	printf("Digite um n�mero: ");
	scanf("%i", &real);
	
	if(real % 3 == 0){
		printf("O n�mero %i � m�ltiplo de 3", real);
	}else{
		printf("O n�mero %i n�o � m�ltiplo de 3", real);
	}
}
