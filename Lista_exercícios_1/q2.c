#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &real);
	
	if(real >= 10){
		printf("O n�mero %.1f � maior ou igual a 10", real);
	}else{
		printf("O n�mero %.1f � menor que 10", real);
	}
}
