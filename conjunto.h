#ifndef __CONJUNTO_H__
#define __CONJUNTO_H__
#define TAM 1000
#include <stdbool.h>
typedef int DATO;

typedef struct Conjunto{
    DATO datos[TAM];
    short car;
}CONJUNTO;

CONJUNTO conjunto_vacio();
bool pertenece(CONJUNTO, DATO);
CONJUNTO agregar(CONJUNTO, DATO);
CONJUNTO quitar(CONJUNTO,DATO);
bool es_vacio(CONJUNTO);
int cardinal(CONJUNTO);
CONJUNTO _union(CONJUNTO , CONJUNTO );
void print_conjunto(CONJUNTO);

#endif