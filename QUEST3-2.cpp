#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n, n1;
	do{ //faz
		scanf("%d", &n); //digitar o numero
		if((n <= 2 ) || (n >= 1000)){ // se o n�mero estiver nesse intervalo
		printf("Valor invalido! Tente novamente!\n"); //printa valor inv�lido
		}
	} while (!((n > 2) && (n < 1000))); //repete at� n�o satisfazer, se satisfazer
	n1 = 1; //a minha var�avel � =1
	while (n1 != 11) { //repete at� que minha vari�vel seja igual 11
	printf("%d X %d = %d\n", n1, n, n1*n); //eu printo isso aqui.
	n1 = n1 + 1; //logo depois eu atribuo � minha vari�vel + 1
	}
	}

