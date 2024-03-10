#include <stdio.h>
#include <stdlib.h>

/*
 * compile: gcc tree.c -o tree
 * execute in Linux: ./tree
 *
 * REFERENCE -> https://www.youtube.com/watch?v=QFtI4-SPoWI
 */

int i,j,star,tamanho;

int main(int argc, char *argv[])
{
	printf("Feliz Natal!\n");
	printf("Tamanho: ");
	scanf("%d", &tamanho);
	printf("\n");

	// Tamanho da árvore.
	for (i = 1; i <= tamanho; i++) {
		// Espaço da árvore
		for (j = 1; j <= tamanho-i; j++) {
			printf(" ");
		}
		// Desenho da árvore.
		// o vezes 2 é para exibir a outra metade da árvore
		// o menos 1 é para o primeiro elemento ser exibido sozinho
		for (star = 1; star <= i*2-1; star++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	// system("pause");
	// system("cls");
	return 0;
}
