#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randomizar(int matriz[4][4]){
	srand(time(NULL));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=rand()%10;
		}
	}
}
	
void imprimir(int matriz[4][4], int cont){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d", matriz[i][j]);
			printf("\t");
			if(matriz[i][j]==0){
				cont++;
			}
		}
		printf("\n");
	}
	printf("El '0' se repite %d veces", cont);
}

int main() {
	int matriz[4][4], cont=0;
	randomizar(matriz);
	imprimir(matriz, cont);
	return 0;
}

