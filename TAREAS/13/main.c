#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
int numeros [argc - 1];
int i=0, j=1, numero;
    while(i<argc-1){
    numero=atoi(argv[j]);
    numeros[i]=numero;
    i++;
    j++;
    }
    int temporal;
        for(i=1; i<argc-1; i++){
            for(j=0; j<argc-1-i; j++){
                if(numeros[j]>numeros[j+1]){
                temporal=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=temporal;
                }
            }
        }
        for(int i=0; i<argc-1; i++){
        printf("%i\n", numeros[i]);
        }
}
