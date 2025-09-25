#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
int num1, num2, resultado;
printf("digite o priemiero nùmero:");
scanf("%d", &num1);
printf("digite o segundo número:");
scanf("%d", &num2);
resultado = num1 * num2;
printf("o resultado da multiplicação é: %d", resultado);
	return 0;
}