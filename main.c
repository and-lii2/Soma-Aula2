#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, soma;

	printf("Digite o primeiro valor: "); /* Entrar com o primeiro valor */
	scanf("%d", &a); 

	printf("Digite o segundo valor: "); /* Entrar com o segundo valor*/
	scanf("%d", &b);
	soma = a + b;

	printf("O resultado da sua some e: %d\n", soma); /* Resultado da soma*/

	return(0);
}

