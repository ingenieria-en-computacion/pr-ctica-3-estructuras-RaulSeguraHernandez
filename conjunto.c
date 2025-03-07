#include "conjunto.h"
#include <stdio.h>
CONJUNTO conjunto_vacio(){
    CONJUNTO c;
    c.car = 0;
    return c;
}

bool pertenece(CONJUNTO c, DATO d){
    if(!es_vacio(c)){
        for(int i=0; i<c.car;i++){
            if(c.datos[i]==d) return true;
        }
    }
    return false;
}

CONJUNTO agregar(CONJUNTO c, DATO d){
    CONJUNTO t = c;
    if(!pertenece(t,d)&& t.car < TAM ){
        t.datos[t.car] = d;
        t.car++;

    }
    return t;
}

CONJUNTO quitar(CONJUNTO c,DATO d){
    CONJUNTO t = c;
    int i = 0;
    if(pertenece(t,d)){
        for (; i < t.car;  i++){
            if(t.datos[i]==d) break;
        }

        if (i!= t.car-1){
            for(int j=i+1; j<t.car; j++){
                    t.datos[j-1] = t.datos[j];
            }
        }
        t.car--;
    }
    return t;
}

bool es_vacio(CONJUNTO c){  
    return c.car==0;
}

int cardinal(CONJUNTO c){
    return c.car;
}


CONJUNTO _union(CONJUNTO c, CONJUNTO d){
    CONJUNTO t = c;
    for (int i = 0; i< d.car; i++){
            t = agregar(t, d.datos[i]);
    }
    return t;
}

void print_conjunto(CONJUNTO c){
    printf("{ ");
    for (int i = 0 ; i< c.car; i++){
        printf("%d ", c.datos[i]);
    }
    printf("}\n");
}