#include "complejo.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double modulo(COMPLEJO* c){
    if (c==NULL){
        printf("apuntador invalido");
        return 0;
    }
    return sqrt((c->i)*(c->i) + (c->r)*(c->r));
}

COMPLEJO* asignar_real(COMPLEJO* c, double real){
    if (c==NULL){
        printf("apuntador invalido");
        return NULL;
    }
    c->r=real;
    return c;
}

COMPLEJO* asignar_imaginario(COMPLEJO* c, double imaginario){
    if (c==NULL){
        printf("apuntador invalido");
        return NULL;
    }
    c->i = imaginario;
    return c;
}

COMPLEJO* sumar_complejos(COMPLEJO* a, COMPLEJO* b){
    COMPLEJO* suma = (COMPLEJO*)malloc(sizeof(COMPLEJO));
    if (b==NULL|| a==NULL){
        printf("apuntador invalido");
        return suma;
    }
    
    suma->r = a->r + b->r;
    suma->i = a->i + b->i;
    return suma;
}

double Parte_real(COMPLEJO* c){
    if (c==NULL){
        printf("apuntador invalido");
        return 0;
    }
    return c->r;
}
double Parte_imaginaria(COMPLEJO* c){
    if (c==NULL){
        printf("apuntador invalido");
        return 0;
    }
    return c->i;
}