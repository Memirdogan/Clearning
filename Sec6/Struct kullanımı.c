#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{

char ad[10];
char soyad[10];
int yas;
};

int main()
{
   struct ogrenci can; //��renci adl� struct'a main i�inde kullanabilmek i�in de�i�ken at�yoruz can de�i�kenini atad�k
   strcpy(can.ad,"Can");
   strcpy(can.soyad,"Boz"); //string ifade oldu�u i�in strcpy kulland�k yoksa alt sat�rdaki gibi atayabiliriz
   can.yas=27; //klas�r gibi mant�k can de�i�kenindeki struct�n i�indeki yas de�i�kenine atama yapt�k

   printf("%s \t %s \t %d",can.ad,can.soyad,can.yas);

    return 0;
}
