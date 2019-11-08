#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    //declaro las variables
    int n1, x, resultado;
    //Las convierto de char a int
    n1= atoi(argu[1]);
    //Guardo este valor en otra variable para usarla en el while
    x=n1;
    resultado=0;
    //Funcion
    while(x>0){
        resultado = resultado + x%10;
        x = x/10;
    }
    //Imprimo resultado
    printf("%i\n", resultado);
    return 0;
}
