#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;
    int cem, cinquenta, vinte, dez, cinco, dois;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor < 2) {
       
        printf("Erro: nao é possivel sacar esse valor.\n");
        return 0;
    }

 
    cem = valor / 100;
    valor = valor % 100;

    cinquenta = valor / 50;
    valor = valor % 50;

    vinte = valor / 20;
    valor = valor % 20;

    dez = valor / 10;
    valor = valor % 10;

    cinco = valor / 5;
    valor = valor % 5;

    dois = valor / 2;
    valor = valor % 2;

   
    if (valor == 1) {
        if (cinco > 0) {
           
            cinco--;
            dois += 3;
            valor = 0;
        } else if (dez > 0) {
          
            dez--;
            cinco++;
            dois += 3;
            valor = 0;
        } else if (vinte > 0) {
          
            vinte--;
            cinco += 2;
            dois += 5;
            valor = 0;
        }
    }

   
    if (valor != 0) {
        printf("Erro: não eh possivel sacar exatamente esse valor.\n");
    } else {
        printf("Cedulas entregues:\n");
        if (cem > 0) printf("%d de R$100\n", cem);
        if (cinquenta > 0) printf("%d de R$50\n", cinquenta);
        if (vinte > 0) printf("%d de R$20\n", vinte);
        if (dez > 0) printf("%d de R$10\n", dez);
        if (cinco > 0) printf("%d de R$5\n", cinco);
        if (dois > 0) printf("%d de R$2\n", dois);
    }

    return 0;
}