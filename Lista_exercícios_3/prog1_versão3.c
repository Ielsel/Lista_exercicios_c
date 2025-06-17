#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que solicite ao usuário N valores numéricos e ao final apresente:
// Versão 3: Implementar Nome, idade, sexo e três notas dos alunos

int main() {
	setlocale(LC_ALL, "");
	
    int Qtd, Resposta;
    
	do{
		printf("Informe a quantidade de alunos: ");
    	scanf("%i", &Qtd);
    	
    	if(Qtd == 0){
    		printf("Deseja finalizar o programa? 1/S - 2/N\n");
    		scanf("%i", &Resposta);
    		
    		if(Resposta == 1){
    			return 0;
			}
		}
	}while(Qtd <= 0);
	
	int idade[Qtd];
	float notas[Qtd][3];
    char nome[Qtd][20], sexo[Qtd];  // Cria uma matriz de strings, onde cada nome pode ter até 19 caracteres (mais o '\0')
	
	if(Qtd > 1){
		printf("\nInforme os nomes:\n");
		
		for(int i = 0; i < Qtd; i++) {
        	printf("\nInforme o nome do %iº aluno: ", i + 1);
        	scanf("%s", nome[i]);  // Leia a string diretamente em nome[i]    
    	}
	}else{
		printf("\nInforme o nome: ");
		scanf("%s", nome[0]);
	}
	
	for(int i = 0; i < Qtd; i++){
		do{
			printf("\nInforme a idade do aluno %s: ", nome[i]);    	
			scanf("%i", &idade[i]);
			
			if(idade[i] < 6 or idade[i] > 100){
				printf("Insira uma idade inválida!");
			}
			
		}while(idade[i] < 6 or idade[i] > 100);
		
		getchar();
		
		do{
			printf("\nInforme o sexo do aluno %s(F/M): ", nome[i]);    	
			scanf("%c", &sexo[i]);
			
			if(sexo[i] != 'F' and sexo[i] != 'f' and sexo[i] != 'M' and sexo[i] != 'm'){
				printf("Insira um sexo válido!");
			}
			
		}while(sexo[i] != 'F' and sexo[i] != 'f' and sexo[i] != 'M' and sexo[i] != 'm');
	}
	
	for(int i = 0; i < Qtd; i++){
		for(int j = 0; j < 3; j++){
			printf("\nInforme a %iº nota do aluno %s: ", j+1, nome[i]);
			scanf("%f", &notas[i][j]);
		}
	}

    for(int i = 0; i < Qtd; i++) {
    	printf("\nInformações do %iº aluno", i + 1);
        printf("\nNome: %s", nome[i]);  // Imprime a string completa nome[i]
        printf("\nIdade: %i", idade[i]);
        printf("\nSexo: %c", sexo[i]);
        printf("\nNotas: ");
        for(int j = 0; j < 3; j++){
        	if(notas[i][j] < 5.75){
        		printf("\n%0.1f, Reprovado!", notas[i][j]);
			}else{
				printf("\n%0.1f, Aprovado! ", notas[i][j]);
			}
		}
    }
}

