#include <stdio.h> // Biblioteca padrão em C para entrada e saída de dados;
#include <locale.h> // Biblioteca que permite a configuração do locale para impressão de caracteres acentuados;

int main() { // Função principal do programa que retorna um inteiro;
	setlocale(LC_ALL, "Portuguese"); // Define o locale como "Portuguese" para permitir a impressão de caracteres acentuados;
    // Inicializando as variáveis
    int i = 0; // Declara e inicializa a variável de controle para o loop;
    int quantidadePares = 0; // Declara e inicializa a variável que irá controlar a quantidade de números digitados;
    int somaImpares = 0; // Declara e inicializa a variável que irá somar os números ímpares digitados;
    int quantidadeImpares = 0; // Declara e inicializa a variável que irá contar a quantidade de números ímpares digiados;
    
    // Loop para ler os números
    do { // Início do loop que irá ler os números digitados;
        int numero; // Declaração da variável que irá armazenar o número digitado pelo usuário;
        scanf(" %d", &numero); // Lê o número digitado pelo usuário e armazena na variável `número`;

        // Verifica se o número é par
        if (numero % 2 == 0) { // Verifica se o número digitado é par;
            quantidadePares++; // Incrementa a variável que conta a quantidade de números pares;
        } else { // Se o número não for par;
            somaImpares += numero; // Adiciona o número ímpar à soma de números ímpares;
            quantidadeImpares++; // Incrementa a variável que conta a quantidade de números ímpares;
        }
        i++; // Incrementa a variável de controle do loop;
    } while (i < 1000); // Verifica se o número de vezes que o loop foi executado é menor do que 1000 e, se for, executa novamente;

    // Calcula a média dos números ímpares
    float mediaImpares = 0; // Declara e inicializa a variável que irá armazenar a média dos números ímpares;
    if (quantidadeImpares > 0) { // Verifica se foram digitados números ímpares;
        mediaImpares = (float)somaImpares / quantidadeImpares; // Calcula a média dos números ímpares;
    }

    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", quantidadePares); // Exibe na tela a quantidade de números pares digitados;
    printf("Média dos números ímpares: %.2f\n", mediaImpares); // Exibte na tela a média dos números ímpares digitados, com duas casas decimais;
    
    return 0; // Indica que o programa foi executado com sucesso;
}