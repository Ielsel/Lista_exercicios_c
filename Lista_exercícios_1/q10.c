#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	float primeiraNota, segundaNota, terceiraNota;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primeiraNota);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &segundaNota);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &terceiraNota);
	
	primeiraNota = (primeiraNota*2 + segundaNota*3 + terceiraNota*5)/10;
	
	if(primeiraNota >= 6){
		printf("Aprovado com a nota %.1f", primeiraNota);
	}else{
		printf("Reprovado");
	}
}
