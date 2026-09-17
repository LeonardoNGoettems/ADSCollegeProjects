#include <stdio.h>

int main() {
    int codigo;
    float salario, percentual = 0, novoSalario;
    char cargo[20];

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch(codigo) {
        case 1:
            sprintf(cargo, "Escriturario");
            percentual = 50;
            break;
        case 2:
            sprintf(cargo, "Secretario");
            percentual = 35;
            break;
        case 3:
            sprintf(cargo, "Caixa");
            percentual = 20;
            break;
        case 4:
            sprintf(cargo, "Gerente");
            percentual = 10;
            break;
        case 5:
            sprintf(cargo, "Diretor");
            percentual = 0;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }

    novoSalario = salario + (salario * percentual / 100);

    printf("\nCargo: %s\n", cargo);
    printf("Percentual de aumento: %.0f%%\n", percentual);
    printf("Salario reajustado: R$ %.2f\n", novoSalario);

    return 0;
}
