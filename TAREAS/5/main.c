#include <stdio.h>
#include <stdlib.h>

//switch para usarlo despues
int valor(char x){
    int y;
    switch(x){
        case 'J':
            y=10;
            break;
        case 'Q':
            y=10;
            break;
        case 'K':
            y=10;
            break;
        case 'A':
            y=11;
            break;
        case 'j':
            y=10;
            break;
        case 'q':
            y=10;
            break;
        case 'k':
            y=10;
            break;
        case 'a':
            y=11;
            break;
    }
    return y;
}
//SE INICIA LA FUNCION
int main(int argc, char * argv[]){
    //se lee variables
    int resultado;
    char coi;
    // for para leer los valores y sacarlos
    for(int i=1; i<argc; i++){
        //empieza a correr la lista
        coi=argv[i][0]=='J'||argv[i][0]=='j'||argv[i][0]=='Q'||argv[i][0]=='q'||argv[i][0]=='K'||argv[i][0]=='k'||argv[i][0]=='A'||argv[i][0]=='a';
        //if para usar funcion valor
        if(coi==1){
            resultado=valor(argv[i][0]);
        }
        else{
            resultado=atoi(argv[i]);
        }
        //se imprime el valor
        printf("%i\n", resultado);
    }
    return 0;
} 

