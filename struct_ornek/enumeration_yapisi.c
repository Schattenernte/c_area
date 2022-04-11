#include <unistd.h>
#include <stdio.h>

// yılın aylarını gösteren bir enumeration yazınız

typedef enum
{
    ocak = 1,
    subat,
    mart,
    nisan,
    mayis,
    haziran,
    temmuz,
    agustos,
    eylul,
    ekim,
    kasim,
    aralik
}aylar;

void    ayi_goster(aylar ibo)
{
    switch(ibo)
    {
        case ocak:
            printf("Ocak ayi");
            break;
         case subat:
            printf("Subat ayi");
            break;
         case mart:
            printf("Mart ayi");
            break;
         case nisan:
            printf("Nisan ayi");
            break;
         case mayis:
            printf("Mayis ayi");
            break;
         case haziran:
            printf("Haziran ayi");
            break;
    }
}

int main()
{
    aylar ibo = mayis;
    ayi_goster(ibo);
}