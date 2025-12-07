#include <stdio.h>
#include <locale.h>

int main() {

    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

   
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        printf("Eh um triangulo ");

        if (a == b && b == c) {
            printf("Equilatero.\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles.\n");
        } else {
            printf("Escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo valido.\n");
    }

    return 0;
}