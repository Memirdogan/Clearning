/* Soru 2.
Kullanicidan aldigi tam sayi kenar uzunluklari (a,b) ve yükseklik (h) bilgisini kullana
rak bir dikdörtgen prizmanin sirasiyla taban alanini, yanal alanlarinin toplamini, top
lam alanini ve hacmini ekrana bastiran programin C kodunu yaziniz. 
Örnek ekran çiktisi asagida verilmistir.

Dikdortgen prizmanin a,b ve h uzunluklarini giriniz: 5 7 10
Dikdörtgen prizmanin:
Taban alani: 35
Yanal alanlar toplami: 240
Toplam alani: 310
Hacmi: 350 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int a,b,h;
	int tabanalan,yanalalan,toplamalan,hacim;
	
	printf("Dikdortgen prizmanin a,b ve h uzunluklarini giriniz:\n");
	scanf("%d %d %d",&a,&b,&h);
	
	tabanalan=a*b;
	yanalalan=2*a*h+2*b*h;
	toplamalan=yanalalan+2*tabanalan;
	hacim=tabanalan*h;
	
	printf("Dikdortgen prizmanin\n");
	printf("taban alani: %d\n",tabanalan);
	printf("Yanal alanlar toplami: %d\n",yanalalan);
	printf("Toplam alani: %d\n",toplamalan);
	printf("Hacmi: %d\n",hacim);
	
}
