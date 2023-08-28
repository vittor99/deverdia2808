#include <stdio.h>

int main() {

    float salario;
    float salario_minimo = 1320.0;  // Salário mínimo atualizado

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario > salario_minimo) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa ganha igual ou menos que o salário mínimo.\n");
    }

    return 0;
}