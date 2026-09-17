#include <stdio.h>
#include <string.h>
#define TFL 5
#define TFC 50

int main() {
    char nomes[TFL][TFC];
    char busca[TFC];
    int i, achou = 0;

    // Leitura dos nomes
    for (i = 0; i < TFL; i++) {
        printf("Digite o nome %d: ", i + 1);
        fflush(stdin);
        gets(nomes[i]);
    }

    // Busca do nome
    printf("\nDigite o nome para buscar: ");
    fflush(stdin);
    gets(busca);

    // Procurando o nome
    for (i = 0; i < TFL; i++) {
        if (strcmp(nomes[i], busca) == 0) {
            printf("\nPosicao: %d\n", i+1);
            printf("Nome em maiusculo: %s\n", strupr(nomes[i]));
            printf("Tamanho: %d\n", strlen(nomes[i]));
            achou = 1;
        }
    }

    // Se nao encontrou
    if (achou == 0) {
        printf("\nNome nao encontrado!\n");
    }

    return 0;
}
