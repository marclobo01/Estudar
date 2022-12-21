#include <stdio.h>
#include <string.h>
int main(){
	
	char txt1[100];
	char txt2[]= "eae";
	char txt3[100];
	int i=0;
	gets (txt1);
	while(txt1[i] != '/0'){
		txt3[i] = txt1[i];
		i++;
	};
	txt3[i]='/0';
	
	printf("%s", txt3[1]);
	
	
	return 0;
}
