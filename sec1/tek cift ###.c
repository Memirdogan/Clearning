#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kullanıcıdan bir sayı girmesini isteyiniz if else kullanarak sayının tek mi çift mi olduğunu
    //ekrana bastıran bir program yazınız
    int sayim;


    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    if(sayim%2 == 0)
    {
        printf("%d sayisi cift sayidir",sayim);
    }
    else
    {
        printf("%d sayisi tek sayidir",sayim);
    }



    return 0;
}
