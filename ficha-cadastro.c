#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    double salario;
    char Genero;

    printf("Digite seu nome: ");
    scanf("%s", nome); 

    printf("Digite seu gênero: ");
    scanf(" %c", &Genero); 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    printf("DADOS DIGITADOS:\n");
    printf("Nome: %s\n", nome);
    printf("Gênero: %c\n", Genero);
    printf("Idade: %d\n", idade);
    printf("Salario: R$ %.2f\n", salario);

    return 0;
}
