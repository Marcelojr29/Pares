#include <stdio.h> // Biblioteca padrão em C para entrada e saída de dados;
#include <locale.h> // Biblioteca que permite a configuração do locale para impressão de caracteres acentuados;

int main() { // Função principal do programa que retorna um inteiro;
    setlocale(LC_ALL, "Portuguese"); // Define o locale como "Portuguese" para permitir a impressão de caracteres acentuados;
    // Inicializando as variáveis
    int i, num, pares = 0, impares = 0, soma = 0; //  Declaração e inicialização das variáveis utilizadas no programa.
    float media; // Declara e inicializa a variável media;

    // Loop para ler os números
    for (i = 1; i <= 1000; i++) { // O loop `for` é usado para ler os números digitados pelo usuário, variando de 1 a 1000;
        printf("Digite o %dº número: ", i); // Exibe uma mensagem solicitando que o usuário digite um número.
        scanf("%d", &num); // Função `scanf` é usada para ler o número digitado pelo usuário e armazená-lo na variável `número`;

        // Verifica se o número é par
        if (num % 2 == 0) { // Verifica se o número digitado é par;
            pares++; // Incrementa a variável que conta a quantidade de números pares;
        } else { // Se o número não for par;
            impares++;  // Incrementa a variável que conta a quantidade de números ímpares;
            soma += num; // Adiciona o número ímpar à soma de números ímpares;
        }
    }

    // Calcula a média dos números ímpares
    media = (float) soma / impares; // Calcula a média dos números ímpares;

    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", pares); // Imprime a quantidade de números pares na tela;
    printf("Média de números ímpares usando For: %.2f\n", media); // Imprime a média dos números na tela, formatada com duas casas decimais;

    i = 1; // Declara e inicializa a variável de controle para o loop;
    soma = 0; // Declara e inicializa a variável para a soma dos números ímpares
    impares = 0; // Declara e inicializa a variável para a quantidade de números ímpares

    // Loop para ler os números
    while (i <= 1000) { // laço de repetição que será executado enquanto `i` for menor ou igual a 1000;
        printf("Digite o %dº número: ", i); // Exibe uma mensagem solicitando que o usuário digite um número.
        scanf("%d", &num); // Lê um número digitado pelo usuário e armazena em `número`;

        // Verifica se o número é par
        if (num % 2 == 0) { // Verifica se o número lido é par;
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