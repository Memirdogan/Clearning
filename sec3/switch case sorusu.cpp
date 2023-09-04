/*Soru12.
	Üç adet ürünümüz var:Kitap,Temel Gida ve lüks
	
	>>Devlet her üç gruba farkli oranlarda vergi uyguluyor.Kitap Için %4.0, 
	temel gida için %5.6,lüks ürün gammi için %19,6
	
	>>Her ürünün bir kodu var:Kitabin kodu O,temel gidanin kodu 1, lüks ürünün kodu 2 
	
	>>«Kullanicidan istediginiz ürünün kodunu ve fiyatini isteyen daha sonra Switch case 
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
