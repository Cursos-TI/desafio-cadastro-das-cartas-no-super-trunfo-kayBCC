#include <stdio.h>

int main () {

int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1);
numero1++;
printf("Depois do incremento: %d\n", numero1);
numero1--;
printf("Apos decremento: %d\n", numero1);
resultado = numero1++;
printf("Apos Pos-incremento - numero 1: %d - Resultado %d\n ", numero1, resultado);
resultado = ++numero1;
printf("Apos Pre-incremento - numero 1: %d - Resultado %d\n ", numero1, resultado);
resultado = numero1--;
printf("Apos Pos-decremento - numero 1: %d - Resultado %d\n ", numero1, resultado);
resultado = --numero1;
printf("Apos Pre-decremento - numero 1: %d - Resultado %d\n ", numero1, resultado);
}