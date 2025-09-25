#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");	
float salario_fixo, vendas, comissao, salario_final;
printf("Digite o salario fixo do vendedor: ");
scanf("%f", &salario_fixo);
printf("Digite o valor total das vendas do mes: ");
scanf("%f", &vendas);
comissao = 0.15 * vendas;
salario_final = salario_fixo + comissao;
printf("Salario fixo: R$ %.2f\n", salario_fixo);
printf("Salario final do mes (com comissão): R$ %.2f\n", salario_final);
	return 0;
}