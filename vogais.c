#include <stdio.h>

int main() {
    char palavra[100];
    int i = 0, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while(palavra[i] != '\0') {

        if(palavra[i] == 'a' || palavra[i] == 'e' ||
           palavra[i] == 'i' || palavra[i] == 'o' ||
           palavra[i] == 'u' || palavra[i] == 'A' ||
           palavra[i] == 'E' || palavra[i] == 'I' ||
           palavra[i] == 'O' || palavra[i] == 'U') {

            vogais++;
        }

        i++;
    }

    printf("Quantidade de vogais: %d", vogais);

    return 0;
}