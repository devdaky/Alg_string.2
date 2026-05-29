#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("Quantidade de letras: %d\n", strlen(nome));
    printf("Primeira letra: %c\n", nome[0]);
    printf("Ultima letra: %c\n", nome[strlen(nome) - 1]);

    return 0;
}