#include <stdlib.h>
#include <stdio.h>

void fun(float ns[7][20]){
	int i,j;
	printf("cantidad promedio de habitantes por piso: \n");
	for(i=0;i<7;i++){
		for(j=0;j<20;j++){
			ns[i][j]=ns[i][j]/6;
			printf("torre %d piso %d promedio de habitantes: %.2f \n",i+1,j+1,ns[i][j]);
		}
	}
}
	
void funcion(int hpc,float *hpt){
	int i,j;
	printf("cantidad total de habitantes del complejo: %d \n",hpc);
	printf("cantidad total de habitantes por torre: \n");
	for(i=0;i<7;i++){
		printf("para la torre %d total de habitantes: %.2f \n",i+1,hpt[i]);
	}
	printf("cantidad promedio de habitantes por torre:  \n");
	for(i=0;i<7;i++){
		hpt[i]=hpt[i]/20;
		printf("para la torre %d promedio: %.2f \n",i+1,hpt[i]);
	}
}
		
int main(){
	int nz[7][20][6],i,j,k,hpc=0;
	float hpt[7]={0},ns[7][20]={0};
	for(i=0;i<7;i++){
		for(j=0;j<20;j++){
			for(k=0;k<6;k++){
				printf("torre %d piso %d departamento %d ingrese habitantes: \n",i+1,j+1,k+1);
				scanf("%d",&nz[i][j][k]);
				printf("%d\t",nz[i][j][k]);
				hpc=hpc+nz[i][j][k];
				hpt[i]+=nz[i][j][k];
				ns[i][j]+=nz[i][j][k];
			}
			printf("\n");
		}
		printf("\n \n");
	}
	funcion(hpc,hpt);
	fun(ns);
}
