#include <stdio.h> // Biblioteca

int main(){ // Iniciando m�todo main
	float temp, x, decisao; // Declarando vari�veis
	
	do{ // Iniciando o c�digo de repeti��o "do-while"
		printf("Digite 1 para converter Graus Celsius para Fahrenheit\nDigite 2 para converter Farenheit para Graus Celsius: \n\n"); //Imprimindo na tela as op��es para o usu�rio
		scanf("%f", &decisao); // Lendo "decisao"
		if(decisao == 1){ // Se "decisao" for igual a 1
			printf("Digite a temperatura em Graus Celsius: "); // Imprimindo informa��o na tela
			scanf("%f", &temp); // Lendo "temp"
			x = (9 * temp + 160)/5; // C�lculo de convers�o de temperatura Celsius para Fahrenheit
			printf("A temperatura em graus Fahrenheit: %0.2f", x); // Imprimindo temperatura em Fahreinheit na tela
		}else if(decisao == 2){ // Se "decisao" for igual a 2
			printf("Digite a temperatura em Fahrenheit: "); // Imprimindo informa��o na tela
			scanf("%f", &temp); // Lendo "temp"
			x = (temp - 32)/1.8; // C�lculo de convers�o de temperatura Fahrenheit para Graus Celsius
			printf("A temperatura em Graus Celsius: %0.2f", x); // Imprimindo temperatura em Graus Celsius na tela
		}else{ // Se nenhuma das condi��es for atendida acima
			printf("Digite uma opcao valida!"); // Imprimir na tela mensagem de erro
		}
	}while(decisao != 1 && decisao != 2); // Caso "decisao" for diferente de 1 e de 2, o programa ir� repetir o c�digo do in�cio
} // Finalizando m�todo main
