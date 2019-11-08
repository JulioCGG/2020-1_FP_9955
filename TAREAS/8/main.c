#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    //declaro las variables
    float n2, resultado;
    int n1, x;
    //Las convierto de char a float o int
    n1= atoi(argu[1]);
    n2= atof(argu[2]);
    //Guardo este valor en otra variable para usarla en el swirch
    x=n1;
    //Funcion
    switch(x){
        case 0:
        resultado = n2 * 1.8;
        resultado=resultado+32;
        printf("%.2f\n", resultado);
        break;
        case 1:
        resultado = n2 - 32;
        resultado=resultado*.55555556;
        printf("%.2f\n", resultado);
        break;
        default:
        printf("Esta opcion no existe\n");
        break;
    }
    return 0;
}
