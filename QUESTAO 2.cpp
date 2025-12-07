#include <stdio.h>
#include <locale.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura); 

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }

    return 0;
}