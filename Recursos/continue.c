#include <stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i+=1){
		if(i==5){
			continue; // Interrompe a execução do Laço atual, mantendo-se no laço	
		}
		printf("\n %d", i);
	}
}
