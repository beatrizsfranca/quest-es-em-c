#include <stdio.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL,"");
int a = 25;
int b = 100;
printf("Antes da troca: a = %d, b = %d\n", a, b);
scanf(" a = %d, b = %d\n"); 
printf("depois da troca: b = %d, a = %d\n", a, b);
a = b;
b = a;
	return 0;
}