#include <stdio.h>

int ingresar(int matriz[5][5]){
	int mayor=0;
	for(int i=0;i<5;i++){
		printf("Empleado %d: \n", i+1);
		for(int j=0;j<5;j++){
			printf("Ingrese la venta del dia %d: ", j+1);
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]>mayor){
				mayor=matriz[i][j];
			}
		}
	}
	return mayor;
}
	
void imprimir(int mayor){
	printf("Mayor venta realizada: %d", mayor);
}
	
int main() {
	int matriz[5][5], mayor;
	mayor=ingresar(matriz);
	imprimir(mayor);
	return 0;
}
