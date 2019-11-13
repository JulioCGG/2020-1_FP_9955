#include<stdio.h>
#include<stdlib.h>
//Se empieza la funcion e ingresan los valores
double raiz(double num, double tolerancia, double resultado){
    //Se declaran variables para usar dentro del programa
    double division, diferencia;
    //funcion que se usara
    division=num/resultado;
    diferencia=resultado-division;
    diferencia=diferencia>0? diferencia: -diferencia;
    if(diferencia<=tolerancia){
        return resultado;
    }
    else{
        resultado=(resultado+division)/2;
        //Esto se regresara    
        return raiz(num, tolerancia, resultado);
    }
}
//Se inicia la funcion principal
int main(int argc, char *argv[]){
    double num, tolerancia, resultado;
    //convierto los valores que entran en flotantes
    num=atof(argv[1]);
    tolerancia=atof(argv[2]);
    resultado=atof(argv[3]);
    //aplico la funcion determinada
    resultado=raiz(num, tolerancia, resultado);
    //imprimo resultado
    printf("%lf\n", resultado);
}

