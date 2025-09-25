#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"");
double compra, pago, troco;
int trocoCentavos;
int i, qtd;
int cedulas[] = {10000, 5000, 2000, 1000, 500, 200}; 
int moedas[]  = {100, 50, 25, 10, 5, 1};
 printf("Digite o valor da compra: ");
    scanf("%lf", &compra);

    printf("Digite o valor pago: ");
    scanf("%lf", &pago);

    troco = pago - compra;

    if (troco < 0) {
        printf("Valor pago insuficiente!\n");
        return 0;
    }
trocoCentavos = round(troco * 100);

    printf("\nTroco: R$ %.2f\n", troco);

    printf("\nCédulas:\n");
    for (i = 0; i < 6; i++) {
        qtd = trocoCentavos / cedulas[i];
        trocoCentavos = trocoCentavos % cedulas[i];
        if (qtd > 0)
            printf("%d nota(s) de R$ %d\n", qtd, cedulas[i] / 100);
    }

    printf("\nMoedas:\n");
    for (i = 0; i < 6; i++) {
        qtd = trocoCentavos / moedas[i];
        trocoCentavos = trocoCentavos % moedas[i];
        if (qtd > 0)
            printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
    };
	return 0;
}