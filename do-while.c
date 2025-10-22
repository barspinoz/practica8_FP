#include<stdio.h>
int main(){
    int monto=0;
    int contador=0;
    double total=0;
    printf ("========Ventas(WHILE)========\n");
    do{
    printf("Ingresa el monto(0 para terminar):");
    scanf("%i" ,&monto);
     if(monto>0){
        total+=monto;
        contador++;
        printf("Monto actual acumulado: $%lf\n", total);
    }
    }while (monto>0);
    printf("\n=========RESUMEN DEL DIA=======\n");
    printf("\nTotal de clientes registrados: %i\n", contador);
    printf("El monto total del día es de: $%lf\n", total);
    printf("Fin del programa.....");
    return 0;
}

/*Do.While es una estructura de control repetitiva en el lenguaje C que 
permite ejecutar un bloque de código al menos una vez, independientemente 
de si la condición es verdadera o falsa. Su principal característica es
que evalúa la condición después de ejecutar el bloque de instrucciones,
lo que garantiza que el código dentro del ciclo se ejecute al menos 
una vez.
la diferencia principal radica en cuándo se evalúa la condición: 
antes (while) o después (do-while) de ejecutar el bloque de código.*/ 
