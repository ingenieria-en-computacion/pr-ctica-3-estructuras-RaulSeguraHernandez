#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUNTO c,d,e;
    c = conjunto_vacio();
    e = conjunto_vacio();
    d = conjunto_vacio();

    printf("El conjunto c está vacío %d\n", es_vacio(c));
    c = agregar(c,2);
    c = agregar(c,3);
    c = agregar(c,4);
    c = agregar(c,56);
    c = agregar(c,7);

    d = agregar(d,2);
    d = agregar(d,4);
    d = agregar(d,6);
    d = agregar(d,8);

    e = _union(c,d);
    print_conjunto(e);

    return 0;
}