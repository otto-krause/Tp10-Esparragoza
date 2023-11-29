#include <stdio.h>

int ingrese_val(int matriz[7][20], int vector[20]){
	int cont=0;
	for(int i=0;i<20;i++){
		printf("N° Legajo: %d \n", i+1);
		for(int j=0;j<7;j++){
			printf("ingrese los kilometros recorridos del dia %d: ", j+1);
			scanf("%d", &matriz[i][j]);
			cont=cont+matriz[i][j];
		}
		vector[i]=cont;
		cont=0;
	}
}

void imprimir(int matriz[7][20], int vector[20]){
	printf("N° \tDia1 \tDia2 \tDia3 \tDia4 \tDia5 \tDia6 \tDia7 \tTotal \n");
	for(int i=0;i<20;i++){
		printf("%d \t", i+1);
		for(int j=0;j<7;j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("%d \n", vector[i]);
	}
}
	
int main() {
	int matriz[7][20], vector[20];
	ingrese_val(matriz, vector);
	imprimir(matriz, vector);
	return 0;
}

