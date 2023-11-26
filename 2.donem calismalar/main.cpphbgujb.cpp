#include <iostream>

#include <string.h>
#include <time.h>

void harflerikaristir(char metin[100],int uzunluk);

main()
{
    char metin1[100];
    srand(time(NULL));
    int i,uzunluk;

    gets(metin1);
    uzunluk = strlen(metin1);

    harflerikaristir(metin1,uzunluk);
}
void harflerikaristir(char metin[100],int uzunluk)
{
    int i,sayi,temp = uzunluk;
    for(i=0;i<uzunluk;i++)
    {
        baslangic:
        sayi = rand() % temp;
        if(metin[sayi] != '\0')
        {
        printf("%c",metin[sayi]);
        metin[sayi]= '\0';
        }
        else
        {
            goto baslangic;
        }
    }
}
