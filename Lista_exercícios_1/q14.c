#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");

	float media, nota1, nota2, nota3;
	char nome[20], sexo;
	
	printf("Digite a média de aprovação do curso: ");
	scanf("%f", &media);
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Digite o sexo: ");
	scanf(" %c", &sexo);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	nota1 = (nota1 + nota2 + nota3)/3;

	if(nota1 >= media){
		if(sexo == 'f' || sexo == 'F'){
			printf("A aluna %c foi aprovada com média %.1f", nome, nota1);
		}else if(sexo == 'm' || sexo == 'M'){
			printf("O aluno %c foi aprovado com média %.1f", nome, nota1);
		}
	}else{
		if(sexo == 'f' || sexo == 'F'){
			printf("A aluna %s foi reprovada com média %.1f", nome, nota1);
		}else if(sexo == 'm' || sexo == 'M'){
			printf("O aluno %s foi reprovado com média %.1f", nome, nota1);
		}
	}
}
