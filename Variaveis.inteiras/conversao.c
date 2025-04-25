#include <stdio.h>

int main() {

    int a = 10;
    float b = 3;
    float resultado = a + b; // convertido para float
    
    printf("Resultado: %2.f\n", resultado);

    // pode ocorrer percas de dados caso trabalhe com muitas variaveis

    float quociente = (float) a / b; // explicitamente convertido em float
    printf("Resultado: %2.f\n", resultado);
}