#include <stdio.h> // Biblioteca

int main(){ // Iniciando método main
	float temp, x, decisao; // Declarando variáveis
	
	do{ // Iniciando o código de repetição "do-while"
		printf("Digite 1 para converter Graus Celsius para Fahrenheit\nDigite 2 para converter Farenheit para Graus Celsius: \n\n"); //Imprimindo na tela as opções para o usuário
		scanf("%f", &decisao); // Lendo "decisao"
		if(decisao == 1){ // Se "decisao" for igual a 1
			printf("Digite a temperatura em Graus Celsius: "); // Imprimindo informação na tela
			scanf("%f", &temp); // Lendo "temp"
			x = (9 * temp + 160)/5; // Cálculo de conversão de temperatura Celsius para Fahrenheit
			printf("A temperatura em graus Fahrenheit: %0.2f", x); // Imprimindo temperatura em Fahreinheit na tela
		}else if(decisao == 2){ // Se "decisao" for igual a 2
			printf("Digite a temperatura em Fahrenheit: "); // Imprimindo informação na tela
			scanf("%f", &temp); // Lendo "temp"
			x = (temp - 32)/1.8; // Cálculo de conversão de temperatura Fahrenheit para Graus Celsius
			printf("A temperatura em Graus Celsius: %0.2f", x); // Imprimindo temperatura em Graus Celsius na tela
		}else{ // Se nenhuma das condições for atendida acima
			printf("Digite uma opcao valida!"); // Imprimir na tela mensagem de erro
		}
	}while(decisao != 1 && decisao != 2); // Caso "decisao" for diferente de 1 e de 2, o programa irá repetir o código do início
} // Finalizando método main
