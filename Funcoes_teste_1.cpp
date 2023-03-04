#include <stdio.h>


int soma(int a,int b){
	int result;
	result = a + b;
	return result;
}

char convert(int u){
	if(u >= 7){
		return 'A';
	}else{
		return 'B';
	}	
}

int main(){
								//printf("%d",soma(1,2));
	int o;
	scanf("%d",&o);
	
	printf("%c \n",convert(o));
	
	printf("%c \n",convert(soma(33,2)));
}
