#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 3;
    int *punt;

    punt = &num;

    printf("La direccion de memoria almacenada en el puntero es: %d", punt);
    printf("La direccion de memoria de la variable es: %d", num);
    printf("La direccion de memoria del puntero es: %d", &punt);
    printf("El tamaño de memoria utilizado por esa variable es: %d", sizeof(num));

    


    return 0;
}