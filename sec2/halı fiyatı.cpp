/*Soru11.
	Hali Fiyati Hesaplama
	Bir �grenci evinde �grenciler salonu haliyla kaplatmak istemektedir.D�senecek halinin metrekaresi 40 ��
	TI'dir.Ayrica halici salonu d�semek i�in 200 TI is�ilik almaktadir.Buna g�re metrekareyi girdi olarak |
	alan ve haliciya �denmesi gereken toplam tutari hesaplayan bir C programi yaziniz. */
	
	
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
