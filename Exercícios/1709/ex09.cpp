#include <stdio.h>

int main (){
	
	int i, N;
	// i contador valor inicial
	// N � o valor final
	
	// solicitar faixa de numeros ao usuario
	printf("Digite o numero:");
	scanf("%d", &N);
	
	for (i=N;i>=0;i--){// gera n�meros de forma decrescente
	//imprime numeros gerados
	printf("%d ", i);
	
	}
return 0;
}
