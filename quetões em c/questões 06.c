#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float raio, area;
	printf("Digite o valor do raio do c�rculo:");
	scanf("%f", &raio);
	area = M_PI * raio * raio ;
	printf("A �rea �: %.10f\n", area);
	return 0;
}