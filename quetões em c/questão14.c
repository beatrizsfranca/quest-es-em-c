#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int n;
printf("Digite um número:");
scanf("%d", &n);
if(n==0)
printf("o numero é zero/n");
else if (n > 0)
printf("o número é positivo");
else
printf("O número é negativo");
	return 0;
}