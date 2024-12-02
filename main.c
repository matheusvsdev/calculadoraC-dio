#include <stdio.h>
#include <string.h>

int main(void) {
    char expressao[100];
    float numero1, numero2;
    char operador;

    printf("Digite a expressão (ex: 2 + 6):\n");
    fgets(expressao, sizeof(expressao), stdin);

    expressao[strcspn(expressao, "\n")] = 0;

    sscanf(expressao, "%f %c %f", &numero1, &operador, &numero2);

    float resultado;

    switch (operador) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                printf("Erro na divisao por zero!.\n");
                return 1;
            }
            break;
        default:
            printf("Operador invalido\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
