#include <stdio.h>
// Escreva um programa que declare um n�mero inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, inprimindo seu valor na tela, at� que o valor seja 100.000

int main(){
	
	int i=0;
		int soma;
		for(soma=0; i <= 100 ; i++){
			printf("%d\n", soma);
			soma = soma + 1000;
		}
	
	return 0;
	
}

