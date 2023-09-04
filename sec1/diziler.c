#include <stdio.h>
#include <stdlib.h>

/* 
DÝZÝLER
•DÝZÝ: Ayný tipten oluþan elemanlar tek bir isimle ifade edilmesidir.
• Örneðin: short dizi[10];
•Tüm dizilerde bulunan özellikler:
• Eleman tipi (yukarýdaki örnekte: short);
• Dizinin ismi (yukarýdaki örnekte : dizi);
• Dizinin boyutu [] içinde kullanýlýr. (Burada: 10).

HAFIZA
Diziler hafýzada n* s byte kadar yer tutar.
•Burada n tablonun boyutunu, s deðiþken tipinin hafýzada tuttuðu byte i ifade eder.
örneðin: Bir önceki slaytta deðiþken tipimiz short tu.
• O halde s; hafýzada 2 byte lik yer tutar.
•Tablomuzun boyu 10
sizeof(dizi) dediðimiz zaman 20 byte lýk yer tuttuðunu cevap olarak görebiliriz

DÝZÝYÝ BASTIRMA
•Dizinin herhangi bir elemanýný bastýrmamýz için o elamanýn
Dizinin içindeki pozisyonunu kullanmamýz gerekir.
•Dizinin ilk elemanýný bastýrmak için dizi[0] þeklinde bastýrmamýz gerekir
• Örneðin : Dizinin 4. elamanýný bastýrmak için dizi[3] þeklinde...
? Eðer ekrana bastýrmak istersek: printf("%d", dizi [3]);
*/

int main()
{
	int can [5]={1,3,5,7,9};
		printf("%d", can [0]); 
return 0;
} 
