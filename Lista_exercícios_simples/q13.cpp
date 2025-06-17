#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");

	float num1, num2, num3;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	
	printf("Digite outro número: ");
	scanf("%f", &num2);

	if(num1 > num2){
		printf("%.1f é maior que %.1f", num1, num2);
	}else{
		printf("%.1f é maior que %.1f", num2, num1);
	}
}
