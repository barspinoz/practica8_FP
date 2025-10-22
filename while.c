#include<stdio.h>
int main(){
    int monto=0;
    int contador=0;
    double total=0;
    printf ("========Ventas(WHILE)========\n");
    printf("Ingresa el monto(0 para terminar):");
    scanf("%i" ,&monto);
    while (monto>0)
    {
        total+=monto;
        contador++;
        printf("Monto actual acumulado: $%lf\n", total);
        printf("Ingresa el monto de la siguiente venta (0 para terminar): ");
        scanf("%i", &monto);
    }
    printf("\n=========RESUMEN DEL DIA=======\n");
    printf("\nTotal de clientes registrados: %i\n", contador);
    printf("El monto total del día es de: $%lf\n", total);
    printf("Fin del programa.....");
    return 0;
}
/*While es una estructura de control que permite ejecutar repetidamente
un bloque de código mientras una condición específica sea verdadera. 
Es ideal para situaciones en las que no se sabe de antemano cuántas 
veces se debe repetir el ciclo, ya que depende de una condición evaluada 
en cada iteración.
la diferencia principal radica en cuándo se evalúa la condición: 
antes (while) o después (do-while) de ejecutar el bloque de código.*/
