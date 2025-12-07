#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int secreto, palpite;

   
    srand(time(NULL));

   
    secreto = rand() % 100 + 1;

    printf("Tente adivinhar o nUmero secreto (entre 1 e 100): ");
    scanf("%d", &palpite);

    if (palpite == secreto) {
        printf("Parabens, voce acertou!\n");
    } else if (palpite > secreto) {
        printf("Muito alto, tente um numero menor!\n");
    } else {
        printf("Muito baixo, tente um numero maior!\n");
    }



    return 0;
}
