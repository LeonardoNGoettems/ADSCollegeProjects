#include <stdio.h>

int main() {
    int idade;
    float altura;
    float somaAlturas = 0;
    int contador = 0;

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Condição de parada
        if (idade <= 0) {
        	break;
        }

        printf("Digite a altura: ");
        scanf("%f", &altura);

        // Considera apenas pessoas com mais de 50 anos
        if (idade > 50) {
            somaAlturas += altura;
            contador++;
        }
    }

    // Verifica se houve pessoas > 50 anos
    if (contador > 0) {
        float media = somaAlturas / contador;
        printf("Media das alturas das pessoas com mais de 50 anos: %.2f\n", media);
    } else {
        printf("Nenhuma pessoa com mais de 50 anos foi informada.\n");
    }

    return 0;
}
