#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int n;
printf("Digite um n�mero:");
scanf("%d", &n);
if(n==0)
printf("o numero � zero/n");
else if (n > 0)
printf("o n�mero � positivo");
else
printf("O n�mero � negativo");
	return 0;
}