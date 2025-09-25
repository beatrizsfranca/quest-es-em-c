#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float cm, polegada;
	printf("digite o valor em centímetros:");
	scanf("%f", &cm);
	polegada = cm / 2.54;
	printf("%.f cm equivalem a %.f polegada.\n", cm, polegada);
	
	return 0;
}