#include <stdio.h>
#include <ctype.h>

void maiuscula(char texto[]) {
    int i = 0;

    while(texto[i] != '\0') {
        texto[i] = toupper(texto[i]);
        i++;
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    maiuscula(palavra);

    printf("%s", palavra);

    return 0;
}