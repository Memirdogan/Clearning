#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct araba{
   int model[25];
   char renk[10];
   int km;
   };

   struct tarih{
   int gun;
   char ay[10];
   int yil;
   };

   struct calisan_bilgi{
       int sicil_no;
       char isim[30];
       char adres[50];
       struct tarih ise_giris;
       double maas;
	};calisan

   struct sehir{
   char sehir_adi[20];
   int sicaklik;
   };

   struct sehir turkiye[82]; 

   typedef float tipim; //tipim de�i�kenini float olarak tan�mlam�s bundan sonra tipim kulland���nda float olarak alg�l�ycak pc
   struct hacim_prizma{
   tipim en;
   tipim boy;
   tipim yukseklik;
   tipim hacim;
	};

   typedef struct hacim_prizma prizma;
   prizma prizma_a;
   
	return 0;
}
