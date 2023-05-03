#include <stdio.h> // Biblioteca padrão em C para entrada e saída de dados;
#include <locale.h> // Biblioteca que permite a configuração do locale para impressão de caracteres acentuados;

int main() { //Função principal do programa que retorna um inteiro; 
	setlocale(LC_ALL, "Portuguese"); // Define o locale como "Portuguese" para permitir a impressão de caracteres acentuados;
    // Inicializando as variáveis
    int i = 1;
    int quantidadePares = 0;
    int somaImpares = 0;
    int quantidadeImpares = 0;
    
    // Loop para ler os números
    while (i <= 1000) { // laço de repetição que será executado enquanto `i` for menor ou igual a 1000;
        int numero; // declaração da variável `número` que será lida pelo programa;
        scanf(" %d", &numero); // Lê um número digitado pelo usuário e armazena em `número`;
        
        // Verifica se o número é par
        if (numero % 2 == 0) { // Verifica se o número lido é par;
            quantidadePares = quantidadePares + 1; // Se o número for par, a variável `quantidadePares` é incrimentada em 1;
        } else {
            somaImpares = somaImpares + numero; // Se o número for ímpar, a variável `somaImpares` é incrementada com o valor do número digitado,
            quantidadeImpares = quantidadeImpares + 1; // E a variável `quantidadeImpares` é incrementada em 1; 
        }
        i = i + 1; // Incrimenta a variável `i` para a próxima iteração do laço;
    }
    
    // Calcula a média dos números ímpares
    float mediaImpares = 0; // Declaração e inicialização da variável `mediaImpares`;
    if (quantidadeImpares > 0) { // Verifica se existem números ímpares lidos pelo programa;
        mediaImpares = (float)somaImpares / quantidadeImpares; // Calcula a média dos números ímpares;
    }
    
    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", quantidadePares); // Imprime a quantidade de números pares na tela;
    printf("Média dos números ímpares: %.2f\n", mediaImpares); // Imprime a média dos números na tela, formatada com duas casas decimais;
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso;
}