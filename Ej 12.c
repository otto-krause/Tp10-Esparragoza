#include <stdio.h>
#include <stdlib.h>

void funcion(float nz[2][7],float *total){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<7;j++){
			printf("para semana %d y dia %d ingrese las ventas del dia: ",i+1,j+1); scanf("%f",&nz[i][j]);
			total[i]+=nz[i][j];
		}
	}
}
	
void fun(float *total,float *promedio,float semayor){
	int i;
	printf("El total de ventas de cada semana: \n");
	for(i=0;i<2;i++){
		printf("semana %d total de ventas: %.2f \n",i+1,total[i]);
	}
	printf("El promedio de ventas de cada semana: \n");
	for(i=0;i<2;i++){
		printf("semana %d promedio de ventas: %.2f \n",i+1,promedio[i]);
	}
	printf("la semana con mayor venta fue: %.2f",semayor);
}

int main(){
	int i;
	float promedio[2]={0},nz[2][7]={0},total[2]={0},semayor,a;
	funcion(nz,total);
	for(i=0;i<2;i++){
		if(total[i]>a){
			a=total[i];semayor=i+1;
		}
		promedio[i]=total[i]/7;
	}
	fun(total,promedio,semayor);
}
