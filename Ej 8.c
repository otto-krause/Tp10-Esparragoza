#include <stdio.h>
#include <stdlib.h>

void funcion(int nz[5][6]){
	int i,j,conta=0,contb=0;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("para fila %d y columna %d ingrese un num: ",i+1,j+1);
			scanf("%d",&nz[i][j]);
			if(nz[i][j]<0){
				conta++;
			}
			if((nz[i][j]==0)&&(i==j)){
				contb++;
			}
		}
	}
	ns(conta,contb);
	
}

void ns(int conta, int contb){
	printf("cantidad de elementos negativos: %d \n",conta);
	printf("cantidad de elementos iguales a 0 en la diagonal principal: %d \n",contb);
}
	
		
int main(){
	int nz[5][6];
	funcion(nz);
}
