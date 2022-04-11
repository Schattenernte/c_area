#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    float a;
    float b;
}karmasiksayi;

int main()
{
    karmasiksayi sayi1, sayi2, sonuc;
    char    op;

    printf("Lutfen yapmak istediginiz islemi giriniz : \n");
    scanf("%c",&op);
    printf("Birinci karmasik sayiyi giriniz = \n");
    scanf("%f%f",&sayi1.a, &sayi1.b);
    printf("ikinci karmasik sayiyi giriniz : \n");
    scanf("%f%f",&sayi2.a, sayi2.b);

    if (op == '+')
    {
        sonuc.a = sayi1.a + sayi2.a;
        sonuc.b = sayi1.b + sayi2.b;
    }
    else if (op == '-')
    {
        sonuc.a = sayi1.a - sayi2.a;
        sonuc.b = sayi1.b - sayi2.b;
    }
    else
        printf("Lutfen dogru operator giriniz");
    printf("Sonuc: \n");
    printf("%2.f",sonuc.a);

    if (sonuc.b  >= 0)
        printf(" + %.2f i",sonuc.b);
    else
         printf(" %.2f i",sonuc.b);
}