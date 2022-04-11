typedef struct
{
    char    isim[20];
    float   x_ekseni;
    float   y_elseni;
}nokta;

void    ekranayazdir(nokta p[], int n)
{
    int i;

    for (i = 0;i<n; i++)
        printf("%s : (%2.f,%2.f)\n",p[i].isim,p[i].x_ekseni,p[i].y_elseni);
}

int main()
{
    nokta ibo[4] = {{"ibo",8,4},{"osman",4,8},{"hakan",2,4},{"ali",2,4}};
    ekranayazdir(ibo,4);
}