#include <stdio.h>

int main(){
	int notas[6][2];
	int i,j,p,m=0;
	float media=0;
	//coleta os valores das notas
	for(i=0;i<6;i++){
		//for(j=0;j<2;j++){
			scanf("%d", &p);
			notas[i][0]=i+1;
			notas[i][1]=p;
		//}
	}
	//imprime as notas
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			printf("%d   ", notas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	//pega a maior nota, as notas pares 
	for(i=0;i<6;i++){
		for(j=0;j<2;j++){
			if(notas[i][j]>m){
				m=notas[i][j];
			}
		}
		if(notas[i][1]%2==0){
				//printf("%d",i);
				printf("%d  ", notas[i][1]);
			}
		media+=(float)notas[i][1];
	}
	
	printf("\n");
	
	printf("%d \n", m);
	
	printf("%f \n",media/6);
	
	for(i=0;i<6;i++){
		if((float)notas[i][1]>=media/6){
			printf("%d  ",notas[i][1]);
		}
	}
	
	
	
}
