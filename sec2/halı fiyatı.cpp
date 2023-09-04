/*Soru11.
	Hali Fiyati Hesaplama
	Bir ögrenci evinde ögrenciler salonu haliyla kaplatmak istemektedir.Dösenecek halinin metrekaresi 40 ——
	TI'dir.Ayrica halici salonu dösemek için 200 TI isçilik almaktadir.Buna göre metrekareyi girdi olarak |
	alan ve haliciya ödenmesi gereken toplam tutari hesaplayan bir C programi yaziniz. */
	
	
	#include <stdio.h>
	#include <stdlib.h>
	#define fiyat 40
	
	int main(){

	int mk,tutar;
	
	printf("hali kaplatmak istediginiz mk alani giriniz: \n");
	scanf("%d",&mk);
	
	tutar=200+mk*fiyat;
	
	printf("hali kaplatmak icin gereken tutar: %d ",tutar);
	
	return 0;
}
