#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int num1, num2,resultado;
	printf("digite o primeiro n�mero:");
	scanf("%d", &num1);
	printf("digite o segundo n�mero:");
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf("o resultado da sua soma �:%d", resultado);
	
	return 0;
}