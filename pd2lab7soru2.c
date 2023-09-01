#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
.Verilen cümle içerisinde verilen kelimeyi arayan ve eðer kelime cümlede varsa bulunduðu yerlerin baþlangýç
indisini ekrana yazdýran programýn kodunu yazýnýz
*/
int main()
{


    char cumle[100],kelime[100];
    printf("lutfen cumle giriniz: ");
    gets(cumle);
    printf("lutfen kelime giriniz:  ");
    gets(kelime);
    char *p1,*p2;
    int n=strlen(cumle);
    int m=strlen(kelime);
    int kontrol;


    for(p1=cumle;p1<cumle+n;p1++)
    {
        for(p2=kelime;*p2;p2++)
        {
            if(*p1==*p2)
            {
                 kontrol=1;
            }
            p1++;
        }
    }

    if(kontrol==1)
    {
        printf("aranan kelime cumlede mevcut");
    }
    else
    {
        printf("verilen cumle icerisinde kelime bulunamadi");
    }

    return 0;
}



