#include <stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i+=1){
		if(i==5){
			continue; // Interrompe a execu��o do La�o atual, mantendo-se no la�o	
		}
		printf("\n %d", i);
	}
}
