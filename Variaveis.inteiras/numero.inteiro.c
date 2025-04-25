#include <stdio.h>

int main(){
int a = 10;
int b = 3;
int soma = a + b;
int diferenca = a - b;
int produto = a * b;
int quociente = a / b;
// especificador de formato
printf("Soma: %.2f\n", soma);
printf("Diferença: %.2f\n", diferenca);
printf("Produto: %.2f\n", produto);
printf("Quociente: %.2f\n", quociente);
}