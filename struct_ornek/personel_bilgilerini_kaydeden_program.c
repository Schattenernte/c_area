// verilen yapıyı kullanarak personel bilgierinin alınmasını 
// ve alındıktan sonra personel adlarına göre a dan z ye alfabetik olarak
// personel bilgieriin listelenmesini sağlayan c programını yazınız

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct personel
{
    int     sifre;
    char    ad[20];
    char    soyad[20];
    int     yas;
    float   maas;
    char    cinsiyet[20];
}kisiler;

void    sirala(kisiler x[], int n)
{
       int      i;
       int      j;
       kisiler  t;

       for (i = 0; i < n - 1; i++)
       {
           for (j = i + 1;j < n;j++)
           {
               if (strcmp(x[i].ad,x[j].ad) > 0)
               {
                   t = x[i];
                   x[i] = x[j];
                   x[j] = t;
               }
           }
       }
}

void    listele(kisiler x[], int n)
{
    int i;
    
    for (i = 0;i < n; i++)
    {
        printf("%d %s %s %d %f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
    }
}


int main()
{
    int N;
    int i;

    printf("kac tane personel bilgisi tutulacak = \n");
    scanf("%d", &N);
    kisiler p[N];
    for (i = 0; i < N; i++)
    {
        printf("Sifre = \n");
        scanf("%d",&p[i].sifre);
        printf("Ad : \n");
        scanf("%s",&p[i].ad);
        printf("SoyAd : \n");
        scanf("%s",&p[i].soyad);
        printf("Yas = \n");
        scanf("%d",&p[i].yas);
        printf("Maas = \n");
        scanf("%2.f",&p[i].maas);
        printf("Cinsiyet = \n");
        scanf("%s",&p[i].cinsiyet);
    }
    sirala(p, N);
    listele(p,N);

}