/*5) Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência 
ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include <stdio.h>
#include <string.h>

// Função para inverter os caracteres de uma string
void reverseString(char *str) {
    // Encontrar o tamanho da string
    int tam = strlen(str);
    // Inverter a string
    for (int i = 0; i < tam / 2; i++) {
        char aux = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = aux;
    }
}

int main() {
    // Pedir, ler e mostrar frase do usuário
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Frase original: %s\n", frase);

    // Inverter a frase e mostrar 
    reverseString(frase);
    printf("Frase invertida: %s\n", frase);

    return 0;
}