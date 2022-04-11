#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int satis;
    union
    {
        double fiyat;
        char   marka[20];
    }bilgi;

}araba;

int main()
{
    araba araba_A;
    araba_A.satis = 0; // satilmadigi icin 0 atamasi yaptik.
    strcpy(araba_A.bilgi.marka,"ANADOL");
    araba_A.satis = 1; // satildigi icin 1 atamasi yaptik.
    araba_A.bilgi.fiyat = 20;
}