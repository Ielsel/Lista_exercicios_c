#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	printf("Digite um n�mero real: ");
	scanf("%f", &real);
	
	if(real > 10){
		printf("O n�mero digita � maior que 10!");
	}else if(real < 10){
		printf("O n�mero digita � menor que 10!");
	}	
}
