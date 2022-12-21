#include <stdio.h>
#include<string.h>

int main(){
	char txt1[20];
	char txt2[20];
	int i=0;
	
	while(i==0){
	
	printf("Digite sua senha: \n");
	gets(txt1);
	printf("Confirme sua senha: \n");
	gets(txt2);
	
	if(strcmp(txt1,txt2)==0){
		printf("Entrando...");
		i++;
	}else{
		printf("SENHAS DIFERENTES \n");
	}

	
	}
}
