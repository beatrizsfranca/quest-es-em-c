#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int x, y, quociente, resto;
	printf ("digite o primeiro valor (x):");
	scanf("%d", &x);
	printf ("digite o primeiro valor (y):");
	scanf("%d", &y);
	
	if (y !=0) {
		   quociente = x / y;
		   resto = x % y;
	printf("O quociente da divisão de %d por %d é: %d\n", x, y, quociente);
        printf("O resto da divisão de %d por %d é: %d\n", x, y, resto);
    } else {
        printf("Erro: divisão por zero não é permitida.\n");
    }	
}