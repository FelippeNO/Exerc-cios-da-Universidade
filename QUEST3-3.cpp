#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, n2;
	do{ //faz
		scanf("%d", &n); //digitar o numero
		if((n < -100 ) || (n > 100)){ // se o n�mero estiver nesse intervalo
		printf("Valor invalido! Tente novamente!\n"); //printa valor inv�lido
		}
	} while (!((n >= -100) && (n <= 100))); //repete at� n�o satisfazer, se satisfazer
	scanf("%d", &n2);
	if (n2 > n){
		n == n2;
	}
	else{
		n==n;
	}
	while (n != 0) { //repete at� que minha vari�vel seja igual 0
	printf("%d", n); //eu printo isso aqui.
	}
	}

