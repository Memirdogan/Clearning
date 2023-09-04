/*Soru 1.
Kullanicidan girmesini istedigi a, b, c ve x degerlerini kullanarak asagidaki aritmetik
islemin sonucunu hesaplayan ve ekrana basan C programini yaziniz.

ax²+bx+c = ?

Örnek ekran çiktisi asagida verildigi gibi olabilir:

a, b, c ve x sayilarini giriniz: 5 6 7 8
>> Sonuç: 375

NOT: Hesaplamalarinizi dogrudan printf(...) komutunun içinde yapabilirsiniz. */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a,b,c,x;
	
	printf("a, b, c ve x sayilarini giriniz:\n");
	scanf("%d %d %d %d",&a,&b,&c,&x);

	printf(">> sonuc: %d ", a*x*x + b*x + c);

	return 0;
}
