#include <stdio.h>
#include <locale.h>
 int main()
 {
	setlocale(LC_ALL,"");
	int num, antecessor, sucessor;
	printf("digite um número:");
	scanf("%d", &num);
	antecessor = num - 1;
	sucessor = num + 1;
	printf ("o antecessor de %d é: %d\n", num, antecessor);
	printf ("o sucessor de %d é :%d\n", num, sucessor);
	
	 return 0;
 }