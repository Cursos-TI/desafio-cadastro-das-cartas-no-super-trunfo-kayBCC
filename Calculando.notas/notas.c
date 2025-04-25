#include <stdio.h>

int main() {

int nota1, nota2, nota3;
int media;

printf("*** PROGRAMA DE CALCULO DE MEDIA ***\n");
printf("Digite sua primeira nota: \n");
scanf("%d", &nota1);
printf("Digite sua segunda nota: \n");
scanf("%d", &nota2);
printf("Digite sua terceira nota: \n");
scanf("%d", &nota3);

media = (float)(nota1 + nota2 + nota3 ) / 3;
printf("A media é: %d", media);

return 0;
}