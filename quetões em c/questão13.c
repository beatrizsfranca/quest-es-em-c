#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
float preco_fabrica, impostos, revendedor, preco_final;
printf("Digite o preço de fabrica do carro: ");
scanf("%f", &preco_fabrica);
impostos = preco_fabrica * 0.45;
revendedor = preco_fabrica * 0.28;
preco_final = preco_fabrica + impostos + revendedor;
printf("O preco final do carro é: %.2f\n", preco_final);
	return 0;
}