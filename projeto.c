#include <stdio.h>
int soma(int a, int b){
	int soma_num = a+b;
	return soma_num;	
}

int subtracao(int a, int b){
		int sub = a+b;
	return sub;	
}

int main(){
	printf("Soma dos dois n�meros: %d\n",soma (5,5));
		printf("Subtracao dos dois n�meros: %d\n",subtracao (5,5));
	return 0;
}
