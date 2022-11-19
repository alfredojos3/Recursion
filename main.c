#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, resultado;

    printf("Ingresa un numero positivo: \n\n\n");
    scanf("%d", &numero);

    resultado = sum(numero);

    printf("sum = %d", resultado);
    return 0;

}

int sum(int n){
    if (n != 0)
        return n + sum(n-1);
    else
        return n;

}
