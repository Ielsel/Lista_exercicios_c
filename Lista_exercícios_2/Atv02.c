#include <stdio.h> // Biblioteca

int main(){ // Iniciando o m�todo main

	float salarioFixo, totalVendas, valorComissao, salarioRecebido, percentualComissao; // Declarando as vari�veis
	printf("Digite o percentual da comiss�o: "); // Impress�o na tela pedindo a % de comiss�o nas vendas
	scanf("%f", &percentualComissao); // Lendo vari�vel "percentualComissao"
	printf("Digite o sal�rio do vendedor: "); // Impress�o na tela pedindo o sal�rio do vendedor
	scanf("%f", &salarioFixo); // Lendo vari�vel "salarioFixo"
	printf("Digite o valor total das vendas do vendedor: "); // Impress�o na tela pedindo o total de vendas
	scanf("%f", &totalVendas); // Lendo vari�vel "totalVendas"
	
	valorComissao = totalVendas * percentualComissao/100; // C�lculo da comiss�o sobre o total de vendas
	salarioRecebido = valorComissao + salarioFixo; // C�lculo do sal�rio recebido
	
	printf("Sal�rio fixo: R$ %0.2f\n", salarioFixo); // Impress�o na tela do sal�rio fixo
	printf("Comiss�o: R$ %0.2f\n", valorComissao); // Impress�o na tela da comiss�o
	printf("Sal�rio final: R$ %0.2f", salarioRecebido); // impress�o na tela do sal�rio final
} // Finalizando m�todo main


