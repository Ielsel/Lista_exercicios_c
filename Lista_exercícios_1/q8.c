#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float real;
	
	printf("Digite um n�mero: ");
	scanf("%f", &real);
	
	if(real > 20){
		real = real / 2;
		printf("A metade do n�mero � %.1f", real);
	}else{
		real = real * 2;
		printf("O dobro do n�mero � %.1f", real);
	}
}
