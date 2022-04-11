#include <stdio.h>
#include <unistd.h>

union test
{
    int x;
    int y;
};

int main()
{
    union test t;

    t.x = 2;
    t.y = 4;

    printf("%d\n",t.x);
    printf("%d\n",t.y);
    printf("Union'un tuttuğu alan = %d byte dir",sizeof(t));
}