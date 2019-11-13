#include<stdio.h>
//inicio de la funcion con recursividad
int saludos(int x){
    int i, z=0;
    for(i=0; i<x; i++){
        z=z+i;
    }
    return z;
}
int main(int argc, char *argv[]){
    int personas, n;
    personas= atoi(argv[1]);
    n=saludos(personas);
    printf("%i\n", n);
    return 0;
}

