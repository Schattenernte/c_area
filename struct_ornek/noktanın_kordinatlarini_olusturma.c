#include <stdio.h>
#include <string.h>

struct nokta
{
    float x_ekseni;
    float y_ekseni;
};



int main()
{
    struct nokta x;
    x.x_ekseni = 4;
    x.y_ekseni = 8;
    
    printf("X eksenimiz %.2f Y eksenimiz %.2f",x.x_ekseni,x.y_ekseni);
}