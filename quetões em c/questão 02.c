#include <stdio.h>
#include <locale.h>
 int main()
 {
	setlocale(LC_ALL,"");
	int num, antecessor, sucessor;
	printf("digite um n�mero:");
	scanf("%d", &num);
	antecessor = num - 1;
	sucessor = num + 1;
	printf ("o antecessor de %d �: %d\n", num, antecessor);
	printf ("o sucessor de %d � :%d\n", num, sucessor);
	
	 return 0;
 }