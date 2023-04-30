#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Inicializando as variáveis
    int quantidadePares = 0;
    int somaImpares = 0;
    int quantidadeImpares = 0;
    int i = 1;
    
    // Loop para ler os números
    while (i <= 10) {
        int numero;
        scanf(" %d", &numero);
        
        // Verifica se o número é par
        if (numero % 2 == 0) {
            quantidadePares = quantidadePares + 1;
        } else {
            somaImpares = somaImpares + numero;
            quantidadeImpares = quantidadeImpares + 1;
        }
        
        i = i + 1;
    }
    
    // Calcula a média dos números ímpares
    float mediaImpares = 0;
    if (quantidadeImpares > 0) {
        mediaImpares = (float)somaImpares / quantidadeImpares;
    }
    
    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", quantidadePares);
    printf("Média dos números ímpares: %.2f\n", mediaImpares);
    
    return 0;
}