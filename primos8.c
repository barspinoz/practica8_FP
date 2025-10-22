#include <stdio.h>
#include <math.h>
int main(){
    int n, filtro;
    int continuar;
    int i; 
    int j; 

    do {
    printf("Programa para encontrar numeros primos anteriores \nFavor de ingresar tu numero deseado:");
    scanf("%d", &n);

    if (n<2) {
    printf("no hay numeros primos");
    }
    else {
        if (n<5) printf ("Números primos : 2, 3");
        else {
            for (i=2; i<n; i++){
                for(j=2; j<i; j++){
                    filtro = i % j;
                    if (filtro == 0){
                        break;
                    }
                    }
                if (filtro != 0) printf("%d, ", i);
                }
            }
    }
    printf("\nSi desea intentarlo de nuevo, pulse 1 : ");
    scanf(" %i", &continuar);
    } while (continuar == 1);
    return 0;
}