#include  <stdio.h>
#include  <stdlib.h>
int main(int argc, char * argv[]){
	int lista[argc], suma=0;
	float promedio;
	for (int i=1; i<argc; i++){
	lista[i]=atoi(argv[i]);
	}
	for (int i=0; i<argc; i++){
	suma=suma+lista[i];
	}
	promedio=(float)suma/(argc-1);
	printf("%f\n", promedio);
	return 0;
}