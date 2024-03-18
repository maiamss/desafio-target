/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será 
a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um 
programa na linguagem que desejar onde, informado um número, ele calcule a sequência de 
Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

#include <stdio.h>
// Função para verificar se um número pertence à sequência de Fibonacci
int Fibonacci(int num) {
    int n1 = 0; 
    int n2 = 1; 

    // Caso especial para 0
    if (num == 0)
        return 1;

    // Verificar se o número pertence à sequência de Fibonacci
    while (n2 <= num) {
        if (n2 == num)
            return 1; // retorna verdadeiro se pertence à sequência de Fibonacci
        int aux = n2;
        n2 += n1;
        n1 = aux;
    }

    return 0; // retorna falso se não pertence à sequência de Fibonacci
}

int main() {
    int num;

    // Ler um número do usuário
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Verificar se o número pertence à sequência de Fibonacci
    if (!(Fibonacci(num)))
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    else
        printf("%d pertence a sequencia de Fibonacci.\n", num);

    return 0;
}