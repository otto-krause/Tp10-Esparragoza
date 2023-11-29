#include <stdio.h>

void ingrese(int matrizA[12][12], int matrizB[12][12]){
	int i, j;
	printf("Ingrese los elementos de la matriz 1: \n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("ij %d%d: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
	}
	printf("Ingrese los elementos de la matriz 2: \n");
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			printf("ij %d%d: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
	}
}
	
int conteo(int matrizA[12][12], int matrizB[12][12]){
	int cont=0;
	for(int i=0;i<12;i++){
		if(matrizA[i][i]==matrizB[i][i]){
			cont++;
		}
	}
}

int main() {
	int matrizA[12][12], matrizB[12][12], cont=0;
	
	ingrese(matrizA, matrizB);
	
	cont=conteo(matrizA, matrizB);	
	
	if(cont==12){
		printf("Las Diagonales principales son iguales");
	}
	else{
		printf("No son iguales las diagonales principales");
	}
	return 0;
}

