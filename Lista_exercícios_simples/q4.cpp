#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &real);
	
	if(real > 0){
		printf("O n�mero %.1f � positivo", real);
	}else if(real < 0){
		printf("O n�mero %.1f � negativo", real);
	}else{
		printf("O n�mero %.1f � nulo", real);
	}
}
