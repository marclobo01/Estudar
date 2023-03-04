#include <stdio.h>

//calcula o fatorial de um numero
int fatorial(int n){
	int fat=1;
	for(int i = 2;i<=n;i++){
		fat= fat*i;
	}
	return fat;
}

// caso o numero seja primo, retorna 1;
int primo(int n){
	int result =0;
	int n_div = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			n_div++;
		}
	}
	if(n_div == 2){
		result = 1;
	}
	return result;
}

int main(){
	int s=0;

	for(int i=1;i<+10;i++){
		if(primo(i)==1){
			fatorial(i);
			s = fatorial(i) + s;
		}
	}

printf("%d",s);



	
	
	
	
	
}
