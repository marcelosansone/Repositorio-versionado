#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "portuguese");
	int n,menor,maior;
	n=0;
	printf("Digite um n�mero inteiro:");
	scanf("%i", &n);
	menor=n-1;
	maior=n+1;
	printf("O n�mero digitado foi %i, seu n�mero antecessor � %i e seu sucessor � %i",n,menor,maior);
	return 0;
	
}

