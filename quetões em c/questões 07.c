#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float volume, area, altura, raio;
	printf("Digite o valor do raio do cilindro:");
	scanf("%f", &raio);
	printf("Digite o valor da altura do cilindro:");
	scanf("%f", &altura);
	area = 2 * M_PI * raio * (altura + raio);
    volume = M_PI * raio * raio * altura;
    printf("A área é: %.2f\n", area);
    printf("O volume é: %.2f\n", volume);
	return 0;
}