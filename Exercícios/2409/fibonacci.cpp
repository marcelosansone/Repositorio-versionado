#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("\nS�rie de Fibonacci:\n\n");
    printf("%d\n", b);

	for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
return 0;
}

