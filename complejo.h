#ifndef COMPLEJO_H
#define COMPLEJO_H

typedef struct complejo{
    double r;
    double i;
}COMPLEJO;

double modulo(COMPLEJO*);
COMPLEJO* asignar_real(COMPLEJO*, double);
COMPLEJO* asignar_imaginario(COMPLEJO*, double);
COMPLEJO* sumar_complejos(COMPLEJO*, COMPLEJO*);
double Parte_real(COMPLEJO*);
double Parte_imaginaria(COMPLEJO*);

#endif