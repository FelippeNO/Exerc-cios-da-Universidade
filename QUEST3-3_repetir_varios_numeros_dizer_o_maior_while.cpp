#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n = -110, n2; //inicia com uma vari�vel n abaixo do intervalo proposto
	int primeiraVez = 1;
	
	while(1){ // 1 pq repete sempre
		scanf("%d", &n2); //pede um n�mero
		if (n2 == 0){ //se o n�mero for 0 ele vai executar isso
			if (primeiraVez == 1){ //se for a primeira vez, ele vai validar com a vari�vel primeiraVez. Previne o erro de digitar 0 uma primeira vez e bugar o programa.
			n = 0; //vai atribuir 0 ao n�mero
			}
		if (n < 0){ //se q eu lan�ar s� n�meros negativos
			n = 0; //ele vai voltar a resposta 0. Pois o 0 � uma resposta da entrada.
		}
		break; // quebra o while e vai pra linha 27. Finalizando o c�digo
		}		
	primeiraVez = 0; //aqui o c�digo muda a vari�vel primeiraVez para encerrar o loope da linha 13-14. E vai direto para a 16.
		if (n2 >= -100 && n2 <= 100){ //Analisa o vari�vel n2. Se ela for maior maior que -100 e menor que 100.
			if (n2 > n){ //Se o n2 analisado (desde a primeira vez), for maior que o n�mero anterior (-110, pq setamos a vari�vel)
			n =	 n2; //Ele torna o n inicial igual o n2.
			}
		} else {
		printf("Valor invalido! Tente novamente!\n"); //Se o n2 analisado n�o atender � condi��o da linha 19. E n�o for 0. Ele pede um novo valor e retorna o loop.
		}
	}
	printf("%d", n); //resposta final
}

