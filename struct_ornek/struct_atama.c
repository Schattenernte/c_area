#include <unistd.h>
#include <string.h>

struct ogrenci_bilgi
{
    int     no;
    char    ad[10];
    char    soyad[10];
    int     yas;
};

int main()
{
    struct ogrenci_bilgi ogrenci_1, ogrenci_2;

    ogrenci_1.no = 428;
    strcpy(ogrenci_1.ad, "ibrahim");
    strcpy(ogrenci_1.soyad, "yapar");
    ogrenci_1.yas = 20;

    // bir yapıyı diğerine kopyalama

    ogrenci_2 = ogrenci_1;

}