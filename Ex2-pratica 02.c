#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int telefone, local, moradia, dinheiro, trabalho, resultado;
	
	printf("Responda �s seguintes Perguntas com 1 para SIM e 0 para N�O\n");
	printf("Voc� telefonou para a v�tima? ");
	scanf("%d", &telefone);
	printf("Voc� esteve no local do crime? ");
	scanf("%d", &local);
	printf("Voc� mora perto da v�tima? ");
	scanf("%d", &moradia);
	printf("Voc� devia dinheiro para a v�tima? ");
	scanf("%d", &dinheiro);
	printf("Voc� j� trabalhou com a v�tima? ");
	scanf("%d", &trabalho);
	
	resultado = telefone + local + moradia + dinheiro + trabalho;
	
{

	if (resultado >= 0 && resultado <= 1)
	{
		printf("\nA pessoa � inocente!");	
	}

	else if (resultado == 2)
	{
		printf("\nA pessoa � suspeita!");	
	}
	
	else if (resultado >= 3 && resultado <= 4)
	{
		printf("\nA pessoa � c�mplice!");	
	}

	else if (resultado == 5)
	{
		printf("\nA pessoa � assassina!");	
	}	
		
}
}
	
