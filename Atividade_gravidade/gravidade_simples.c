#include <stdio.h>

int main(void) {
 
	float ms, gravidade; //Variáveis tipo float para guardar dados de m/s e a força da gravidade.
	char nome; //Variável tipo char para guardar o nome.
	int idade, inercia; //Variáveis tipo inteiro para guardar a idade e a inercia.
	
	gravidade = 9.807; //Atribuição do valor da gravidade.
	inercia =(int)gravidade; //Conversão explícita da gravidade para inteiro.
	
	printf("Você está subindo uma rua mas está com dificuldade, você deve acelerar o suficiente para vencer a força gravitacional. Escolha a sua aceleração em m/s²: "); //Diálogo inicial pedindo o valor da aceleração desejada.
	scanf("%f", &ms); //Área de entrada de dados de m/s².
	
	if(ms>gravidade){ //Controle condicional para se o m/s² for maior do que a gravidade.
		printf("\nParabéns, você está conseguindo subir\n"); //Texto caso a condicional seja saciada.
		printf("\nSua velocidade está aumentando para %.1fm/s, %.1fm/s, %.1fm/s...\n", ++ms, ++ms, ++ms); //Texto de exposição da velocidade com auto incremento.
	}
	
	if(ms<gravidade){ //Controle condicional para se o m/s² for menor do que a gravidade. 
		printf("\nVocê está caindo! Você deseja ir mais rápido?\n"); //Texto caso a condicional seja saciada. 
	}
	
	else if(ms==gravidade){ //Controle condicional para se m/s² for igual a gravidade.
		printf("\nVocê está parado\n"); //Texto caso a condicional seja saciada. 
	}
	
	printf("\nEnquanto você sobe a rua um colega te vê e diz:\n'ahh, você é o...', você decide completar a frase dele dizendo o seu nome, que é...?\n"); //Diálogo pedindo o nome(char) do usuário.
	scanf("%s", &nome); //Área de entrada de dados Nome.
	printf("\nVocê: %s\n", &nome); //Diálogo resposta do usuário.
	printf("\n%s, ISSO! Quanto tempo né, tá com quantos anos?\n", &nome); //Diálogo pedindo a idade(int)
	scanf("%d", &idade); //Área de entrada de dados Idade.
	printf("Ah, obrigado, tchau!\n");
	printf("\nAcabou o código :)\n");
  
  return 0;
}
