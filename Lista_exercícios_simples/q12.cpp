#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");

	float num1;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	
	if(20 < num1 && num1 < 90){
		printf("O n�mero digitado est� compreendido entre 20 e 90", num1);
	}else{
		printf("O n�mero n�o est� compreendido entre 20 e 90", num1);
	}
}
