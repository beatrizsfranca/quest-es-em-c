#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int n;
printf("Digite um n�mero: ");
scanf("%d", &n);
if (n % 2 == 0)
printf("O n�mero � par\n");
else
printf("O n�mero � impar\n");
return 0;

}