#include <iostream>

int main(){
	

	int i;//i para ser usado no for
	int tamanho =10;//tamanho do vetor
	int numeros[tamanho];//o vetor "numeros" tera tamanho = a variavel tamanho
	
	numeros[0] = 5;
	numeros[1] = 10;
	numeros[2] = 15;
	numeros[3] = 20;
	numeros[4] = 25;
	numeros[5] = 30;
	numeros[6] = 35;
	numeros[7] = 40;
	numeros[8] = 45;
	numeros[9] = 50;
	
	for(i=0;i<tamanho;i++){//o for para ter incremento
		printf("%d\n", numeros[i]);//
	}
	
	
	return 0;
}
