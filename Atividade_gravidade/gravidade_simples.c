#include <stdio.h>

int main(void) {
 
	float ms, gravidade; //Vari�veis tipo float para guardar dados de m/s e a for�a da gravidade.
	char nome; //Vari�vel tipo char para guardar o nome.
	int idade, inercia; //Vari�veis tipo inteiro para guardar a idade e a inercia.
	
	gravidade = 9.807; //Atribui��o do valor da gravidade.
	inercia =(int)gravidade; //Convers�o expl�cita da gravidade para inteiro.
	
	printf("Voc� est� subindo uma rua mas est� com dificuldade, voc� deve acelerar o suficiente para vencer a for�a gravitacional. Escolha a sua acelera��o em m/s�: "); //Di�logo inicial pedindo o valor da acelera��o desejada.
	scanf("%f", &ms); //�rea de entrada de dados de m/s�.
	
	if(ms>gravidade){ //Controle condicional para se o m/s� for maior do que a gravidade.
		printf("\nParab�ns, voc� est� conseguindo subir\n"); //Texto caso a condicional seja saciada.
		printf("\nSua velocidade est� aumentando para %.1fm/s, %.1fm/s, %.1fm/s...\n", ++ms, ++ms, ++ms); //Texto de exposi��o da velocidade com auto incremento.
	}
	
	if(ms<gravidade){ //Controle condicional para se o m/s� for menor do que a gravidade. 
		printf("\nVoc� est� caindo! Voc� deseja ir mais r�pido?\n"); //Texto caso a condicional seja saciada. 
	}
	
	else if(ms==gravidade){ //Controle condicional para se m/s� for igual a gravidade.
		printf("\nVoc� est� parado\n"); //Texto caso a condicional seja saciada. 
	}
	
	printf("\nEnquanto voc� sobe a rua um colega te v� e diz:\n'ahh, voc� � o...', voc� decide completar a frase dele dizendo o seu nome, que �...?\n"); //Di�logo pedindo o nome(char) do usu�rio.
	scanf("%s", &nome); //�rea de entrada de dados Nome.
	printf("\nVoc�: %s\n", &nome); //Di�logo resposta do usu�rio.
	printf("\n%s, ISSO! Quanto tempo n�, t� com quantos anos?\n", &nome); //Di�logo pedindo a idade(int)
	scanf("%d", &idade); //�rea de entrada de dados Idade.
	printf("Ah, obrigado, tchau!\n");
	printf("\nAcabou o c�digo :)\n");
  
  return 0;
}
