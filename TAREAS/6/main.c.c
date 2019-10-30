#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
    //declarar variables    
    int resultado;
    int argvi[argc];
    for(int i=1; i<argc; i++){
        // neutro multiplicativo        
        resultado=1;
        //este for es para hacer la multiplicacion
        for(int j=1; j<argc; j++){
            argvi[j]=atoi(argv[j]);
            resultado=resultado*argvi[j];
        }
        //se imprime el resultado de cada una
        resultado=resultado/argvi[i];
        printf("%i\n", resultado);
    }
    return 0;
}
