#include  <stdio.h>
#include  <stdlib.h>
int main(int argc, char * argv[]){
	//se declara las variables
	int lista[argc], suma=0;
	float promedio;
	//se inicia el for para convertir los caracteres que ingresen a numeros
	for (int i=1; i<argc; i++){
	lista[i]=atoi(argv[i]);
	}
	//se inicia otro for para realizar la suma de los numeros
	for (int i=0; i<argc; i++){
	suma=suma+lista[i];
	}
	//se calcula el promedio
	promedio=(float)suma/(argc-1);
	printf("%.2lf\n", promedio);
	return 0;
}
