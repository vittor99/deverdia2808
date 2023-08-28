#include <stdio.h>

int main() {

 float altura;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    if (altura > 1.8) {
        printf("A pessoa é mais alta que 1.8 metros.\n");
    } else {
        printf("A pessoa é igual ou mais baixa que 1.8 metros.\n");
    }

    return 0;
}