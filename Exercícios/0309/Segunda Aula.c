#include <stdio.h> //biblioteca usada
#include<locale.h> //biblioteca que deixa o programa com acentos

int main(){ //Comando de inicia��o
		setlocale( LC_ALL, "portuguese"); //comando utilizado para a biblioteca de acentos em portugu�s
		
		//declara��o de vari�veis
		int n1, n2, soma;
		
		//inicializa��o das vari�veis
		n1 = 0;
		n2 = 0;		//n1 = n2 = soma = 0;
		soma = 0;
		
		//ler n1
		printf("Digite o primeiro n�mero: ");
		scanf( "%i",&n1);
		
		//ler n2
		printf("Digite o segundo n�mero: ");
		scanf( "%i", &n2);
		
		//soma <- n1 + n2
		soma = n1 + n2;
		
		//exiba soma
		//printf("A soma foi %d!", soma);	
		printf("A soma de  %d e %i foi %d", n1,n2,soma);
	return 0;
}
