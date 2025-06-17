#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int real, test;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &test);
	
	printf("Digite o segundo número: ");
	scanf("%i", &real);
	
	real = real + test;
	
	if(real > 10){
		printf("%i", real);
	}else{
		real = real / 2;
		printf("%i", real);
	}
}
