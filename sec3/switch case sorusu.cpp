/*Soru12.
	�� adet �r�n�m�z var:Kitap,Temel Gida ve l�ks
	
	>>Devlet her �� gruba farkli oranlarda vergi uyguluyor.Kitap I�in %4.0, 
	temel gida i�in %5.6,l�ks �r�n gammi i�in %19,6
	
	>>Her �r�n�n bir kodu var:Kitabin kodu O,temel gidanin kodu 1, l�ks �r�n�n kodu 2 
	
	>>�Kullanicidan istediginiz �r�n�n kodunu ve fiyatini isteyen daha sonra Switch case 
	yapisini kullanarak son fiyati ekrana bastiran bir Cprogrami yaziniz.*/


#include <stdio.h>
#include <stdlib.h>
#define kitapvergi 0.04
#define gidavergi 0.056
#define luksvergi 0.196

	main(){

	int kod,fiyat,devam;
	float vergi,sonfiyat;
	
	do{
	printf("urun kodunu giriniz:(0=kitap, 1=gida, 2=luks)\n");
	scanf("%d",&kod);

	printf("urun fiyatini giriniz:\n");
	scanf("%d",&fiyat);
	
		switch(kod){
		case 0: 
			vergi=fiyat*kitapvergi;
			sonfiyat=fiyat+vergi;
			printf("urunun fiyati: %d \nurunun vergisi: %.2f \nurunun son fiyati: %.2f \n",fiyat,vergi,sonfiyat);
			
			printf("baska urunlerle devam etmek istiyor musunuz? (1=evet ,2=hayir)\n");
			scanf("%d",&devam);
		break;
		
		case 1: 
			vergi=fiyat*gidavergi;
			sonfiyat=fiyat+vergi;
			printf("urunun fiyati: %d \nurunun vergisi: %.2f \nurunun son fiyati: %.2f \n",fiyat,vergi,sonfiyat);
			
			printf("baska urunlerle devam etmek istiyor musunuz? (1=evet ,2=hayir)\n");
			scanf("%d",&devam);
		break;
		
		case 2:
			vergi=fiyat*luksvergi;
			sonfiyat=fiyat+vergi; 
			printf("urunun fiyati: %d \nurunun vergisi: %.2f \nurunun son fiyati: %.2f \n",fiyat,vergi,sonfiyat);
			
			printf("baska urunlerle devam etmek istiyor musunuz? (1=evet ,2=hayir)\n");
			scanf("%d",&devam);
		break;
		
		default: printf("gecersiz kod girdiniz!\n");
		
			printf("baska urunlerle devam etmek istiyor musunuz? (1=evet ,2=hayir)\n");
			scanf("%d",&devam);
		break;
		}
	}while(devam ==1);
	
	printf("iyi gunler..");
	return 0;
}
