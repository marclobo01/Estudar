#include <stdio.h>
int main(){
	int i,j;
	int seq[3][3]{{1,2,3},{4,5,6},{7,8,9}};
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", seq[i][j]);
			//printf("%d %d", i,j);
		}
		printf("\n");
	}
	
	
	
	
}