#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char txt[70];
	char copia[70];
	int i=0;
	gets(txt);
	while(txt[i] != '\0'){
		copia[i] = txt[i];
		i++;
	}
	copia[i]='\0';
	printf("%s \n", copia);
	printf("%d \n", i);
}
