#include <stdio.h>

int main() {
    int n = 0; // entrada
    int primero = 0;
    int segundo = 1;
    int siguiente = 0; //salida
    
    printf("Ingrese n:\n");
    scanf("%d", n); //llenar variables
    
    //casos especiales para los primeros dos terminos
    if (n == 1) {
        siguiente = primero;
    } else if (n == 2) {
        siguiente = segundo;
    } else {
        //calcular desde el término 3 hasta el n
        for (int i = 3; i <= n; i++) {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }
    }
    
    printf("El termino %d de la secuencia de Fibonacci es: %d\n", n, siguiente);
    
    return 0;
}
