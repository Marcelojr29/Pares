#include <stdio.h> // Biblioteca padrão em C para entrada e saída de dados;
#include <locale.h> // Biblioteca que permite a configuração do locale para impressão de caracteres acentuados;

int main() { // A função `main` é a função principal do programa;
	setlocale(LC_ALL, "Portuguese"); // Define o locale como "Portuguese" para permitir a impressão de caracteres acentuados;

    // Inicializando as variáveis
    int i;
    int quantidadePares = 0;
    int somaImpares = 0;
    int quantidadeImpares = 0;
   
    for (i = 1; i <= 1000; i++) { // o loop `for` é usado para ler os números digitados pelo usuário, variando de 1 a 1000;
       
        int numero; // declaração da variável `número` que será lida pelo programa;
        scanf(" %d", &numero); // Função `scanf` é usada para ler o número digitado pelo usuário e armazená-lo na variável `número`;
        
        // Verifica se o número é par
        if (numero % 2 == 0) { // Estrutura condicional `if-else` é usada para verificar se o número é par ou ímpar.
            quantidadePares = quantidadePares + 1; // Se o número for par, a variável `quantidadePares` é incrimentada em 1;
        } else {
            somaImpares = somaImpares + numero; // Se o número for ímpar, a variável `somaImpares` é incrementada com o valor do número digitado,
            quantidadeImpares = quantidadeImpares + 1; // E a variável `quantidadeImpares` é incrementada em 1; 
        }
    }
	// Calcula a média dos números ímpares
    float mediaImpares = 0; // Fora do loop, a variável `mediaImpares` é inicializada com o valor 0;
    if (quantidadeImpares > 0) { // Se a variável `quantidadeImpares` for maior que 0,
        mediaImpares = (float)somaImpares / quantidadeImpares; // A média dos números ímpares é calculada dividindo a variável `somaImpares` pela variável `quantidadeImpares`;
    }
    
    // Escreve os resultados na tela
    printf("Quantidade de números pares: %d\n", quantidadePares); // Os resultados são exibidos na tela usando a função `printf`, mostrando a quantidade de números pares, 
    printf("Média dos números ímpares: %.2f\n", mediaImpares); // E a média dos números ímpares com duas casas decimais;
    
    return 0; // Função `return 0` é usada para indicar ao sistema operacional que o programa foi executado com sucesso e retornou 0;
}