#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");

	float num1;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	
	if(20 < num1 && num1 < 90){
		printf("O número digitado está compreendido entre 20 e 90", num1);
	}else{
		printf("O número não está compreendido entre 20 e 90", num1);
	}
}
