#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real, test;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &test);
	
	printf("Digite o segundo n�mero: ");
	scanf("%i", &real);
	
	real = real + test;
	
	if(real > 10){
		printf("%i", real);
	}else{
		real = real / 2;
		printf("%i", real);
	}
}
