#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float ns(float nz[5][3]){
	int i,total=0;
	for(i=0;i<5;i++){
		total=nz[i][1]+total;
	}
	return total;
}

void funcion(float nz[5][3],float total){
	for(int i=0;i<5;i++){
		printf("chofer nro: %d \t total de horas trabajadas: %.0f \t sueldo semanal: %.0f    \n",i+1,nz[i][0],nz[i][1]);
	}
	printf("el total que pagara la empresa es:%f \n",total);
}
		
int main(){
	char nom[50];
	char ps[50];
	float nz[5][3]={0},temp,sue,total=0;
	int i,j;
	strcpy(ps,"");
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			if(j==0){
				printf("ingrese su nombre: "); 
				scanf("%s", &nom);
			}
			if(j==1){
				printf("ingrese su sueldo por hora: "); 
				scanf("%f", &sue);
			}
			if((j>1)&&(j<8)){
				printf("para dia %d:  \n",j-1);
				printf("ingrese horas trabajadas: ");
				scanf("%f",&temp);
				nz[i][0]=nz[i][0]+temp;
				nz[i][1]=nz[i][0]*sue;
				if((j==2)&&(temp>nz[i][2])){
					nz[i][2]=temp;
					strcpy(ps,nom);
				}
			}
		}
	}
	total=ns(nz);
	funcion(nz,total);
	printf("el nombre del trabajador que labura mas el lunes es: %s \n",ps);
	return 0;
}
