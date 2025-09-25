#include <stdio.h>
#include <locale.h>

int main() 
{
setlocale(LC_ALL,"");
int n;
printf("Digite um numero: ");
scanf("%d", &n);
if (n >= 0)
printf("Valor: %d\n", n);
else
printf("Valor: %d\n", -n);
return 0;
}
