#include <stdio.h>
#include <locale.h>
int main () { 
	
	setlocale (LC_ALL, "Portuguese");	
	int a, b, aux, i, n;
	
	a=0;
	b=1;
	
	printf ("Digite quantidade de n�meros: ");
	scanf ("%d", &n);
	printf ("\nS�rie de Fibonacci: \n\n");
	printf ("%d \t", b);
	
	for (i= 1; i < n ; i++) {
		
		aux = a + b;
		a = b;
		b = aux;
		
		printf ("%d \t", aux);
	}

return 0;

}


