#include <stdio.h>
#include <stdlib.h>

/* 
D�Z�LER
�D�Z�: Ayn� tipten olu�an elemanlar tek bir isimle ifade edilmesidir.
� �rne�in: short dizi[10];
�T�m dizilerde bulunan �zellikler:
� Eleman tipi (yukar�daki �rnekte: short);
� Dizinin ismi (yukar�daki �rnekte : dizi);
� Dizinin boyutu [] i�inde kullan�l�r. (Burada: 10).

HAFIZA
Diziler haf�zada n* s byte kadar yer tutar.
�Burada n tablonun boyutunu, s de�i�ken tipinin haf�zada tuttu�u byte i ifade eder.
�rne�in: Bir �nceki slaytta de�i�ken tipimiz short tu.
� O halde s; haf�zada 2 byte lik yer tutar.
�Tablomuzun boyu 10
sizeof(dizi) dedi�imiz zaman 20 byte l�k yer tuttu�unu cevap olarak g�rebiliriz

D�Z�Y� BASTIRMA
�Dizinin herhangi bir eleman�n� bast�rmam�z i�in o elaman�n
Dizinin i�indeki pozisyonunu kullanmam�z gerekir.
�Dizinin ilk eleman�n� bast�rmak i�in dizi[0] �eklinde bast�rmam�z gerekir
� �rne�in : Dizinin 4. elaman�n� bast�rmak i�in dizi[3] �eklinde...
? E�er ekrana bast�rmak istersek: printf("%d", dizi [3]);
*/

int main()
{
	int can [5]={1,3,5,7,9};
		printf("%d", can [0]); 
return 0;
} 
