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
   struct ogrenci can; //öðrenci adlý struct'a main içinde kullanabilmek için deðiþken atýyoruz can deðiþkenini atadýk
   strcpy(can.ad,"Can");
   strcpy(can.soyad,"Boz"); //string ifade olduðu için strcpy kullandýk yoksa alt satýrdaki gibi atayabiliriz
   can.yas=27; //klasör gibi mantýk can deðiþkenindeki structýn içindeki yas deðiþkenine atama yaptýk

   printf("%s \t %s \t %d",can.ad,can.soyad,can.yas);

    return 0;
}
