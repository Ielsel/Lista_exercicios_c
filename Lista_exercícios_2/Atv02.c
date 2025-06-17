#include <stdio.h> // Biblioteca

int main(){ // Iniciando o método main

	float salarioFixo, totalVendas, valorComissao, salarioRecebido, percentualComissao; // Declarando as variáveis
	printf("Digite o percentual da comissão: "); // Impressão na tela pedindo a % de comissão nas vendas
	scanf("%f", &percentualComissao); // Lendo variável "percentualComissao"
	printf("Digite o salário do vendedor: "); // Impressão na tela pedindo o salário do vendedor
	scanf("%f", &salarioFixo); // Lendo variável "salarioFixo"
	printf("Digite o valor total das vendas do vendedor: "); // Impressão na tela pedindo o total de vendas
	scanf("%f", &totalVendas); // Lendo variável "totalVendas"
	
	valorComissao = totalVendas * percentualComissao/100; // Cálculo da comissão sobre o total de vendas
	salarioRecebido = valorComissao + salarioFixo; // Cálculo do salário recebido
	
	printf("Salário fixo: R$ %0.2f\n", salarioFixo); // Impressão na tela do salário fixo
	printf("Comissão: R$ %0.2f\n", valorComissao); // Impressão na tela da comissão
	printf("Salário final: R$ %0.2f", salarioRecebido); // impressão na tela do salário final
} // Finalizando método main


