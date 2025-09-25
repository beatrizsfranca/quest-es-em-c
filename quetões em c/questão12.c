#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"");
double a = 7.0, b = 8.0, c = 9.0;
double d = 4.0, e = 5.0, f = 6.0;
double media1, media2, soma, mediaDasMedias;
media1 = (a + b + c) / 3.0;
media2 = (d + e + f) / 3.0;
soma = media1 + media2;
mediaDasMedias = soma / 2.0;
printf("Media1 = %.2f\n", media1);
printf("Media2 = %.2f\n", media2);
printf("Soma das medias = %.2f\n", soma);
printf("Media das medias = %.2f\n", mediaDasMedias);

    return 0;
}