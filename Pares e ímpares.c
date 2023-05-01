#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Inicializando as variáveis
    int i, num, pares = 0, impares = 0, soma = 0;
    float media;

    // Loop para ler os números
    for (i = 1; i <= 1000; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        // Verifica se o número é par
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
            soma += num;
        }
    }

    // Calcula a média dos números ímpares
    media = (float) soma / impares;

    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", pares);
    printf("Média de números ímpares usando For: %.2f\n", media);

    i = 1;
    soma = 0;
    impares = 0;
    // Loop para ler os números
    while (i <= 1000) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        // Verifica se o número é par
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
            soma += num;
        }

        i++;
    }

    // Calcula a média dos números ímpares
    media = (float) soma / impares;

    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", pares);
    printf("Média de números ímpares usando While: %.2f\n", media);

    i = 1;
    soma = 0;
    impares = 0;
    // Loop para ler os números
    do {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        // Verifica se o número é par
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
            soma += num;
        }

        i++;
    } while (i <= 1000);

    // Calcula a média dos números ímpares
    media = (float) soma / impares;

    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", pares);
    printf("Média de números ímpares usando Do-While: %.2f\n", media);

    return 0;
}