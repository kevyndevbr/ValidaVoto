#include <stdio.h>

int main() {

    char nome[30];
    int idade;

    printf("Digite seu nome: ");
    scanf("%29s", nome);  // lê no máximo 29 caracteres, evitando overflow
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 18 && idade >= 0) {
        printf("%s, voce não pode votar\n", nome);
    } else {
        printf("%s, voce pode votar\n", nome);
    }

    return 0;
}


