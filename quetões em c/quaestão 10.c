#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
int valor;
int cedulas[] = {100, 50, 20, 10, 5, 2, 1}; 
int qtd, i;
printf("Digite o valor a ser sacado: ");
scanf("%d", &valor);
 for (i = 0; i < 7; i++) {
        qtd = valor / cedulas[i];
        valor = valor % cedulas[i];
        if (qtd > 0) {
printf("%d nota(s) de %d\n", qtd, cedulas[i]);
        }
    }
return 0;
}