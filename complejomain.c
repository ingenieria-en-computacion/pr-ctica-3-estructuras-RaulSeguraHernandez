#include <stdio.h>
#include "complejo.h"
#include <stdlib.h>

int main(){

    COMPLEJO* c1 = (COMPLEJO*)malloc(sizeof(COMPLEJO));
    COMPLEJO* c2 = (COMPLEJO*)malloc(sizeof(COMPLEJO));

    asignar_real(c1, 3);
    asignar_imaginario(c1, 4);
    printf("el modulo de c1 es %f\n", modulo(c1));
    asignar_real(c2, 4);
    asignar_imaginario(c2, 3);
    COMPLEJO* c3 = sumar_complejos(c1,c2);
    printf("la suma de c1 y c2 es %f + %f i \n", Parte_real(c3), Parte_imaginaria(c3));

    return 0;
}