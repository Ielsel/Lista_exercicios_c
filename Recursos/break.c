#include <stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i+=1){
		if(i==5){
			break; // Interrompe a execução do Laço atual, abandonando o laço	
		}
		printf("\n %d", i);
	}
}
