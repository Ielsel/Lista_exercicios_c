#include <stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i+=1){
		if(i==5){
			break; // Interrompe a execu��o do La�o atual, abandonando o la�o	
		}
		printf("\n %d", i);
	}
}
