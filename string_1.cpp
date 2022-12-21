#include <stdio.h>
#include <string.h>
#include <locale.h>

/*int main(){
	
	char frase[30];
	printf("digite uma frase qualquer \n");
	gets(frase);
	printf("A frase digitada foi: %s \n", frase);
	
}*/
/*int main(){
	
	int tam;
	char frase[30];
	printf("Digite uma frase \n");
	gets(frase);
	tam = strlen(frase);
	printf("%d", tam);
	
}*/

/*int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char frase[100];
	int tam = 0;
	printf("Digita uma frase aí \n");
	gets(frase);
	while(frase[tam] != '\0'){
		tam += 1;
	}
	printf("%d", tam);
}*/

/*int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char texto[30];
	char txt[]="bom dia grupo";
	char copiafrase[40];
	gets(texto);
	strcpy(copiafrase,texto);
	printf("a frasse copiada foi: %s", copiafrase);
}*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char txt1[] = "opa, ";
	char txt2[] = "eae tudo bom amigo";
	strcat(txt1,txt2);
	
	printf("%s", txt1);
	
	
	
	
	
}
