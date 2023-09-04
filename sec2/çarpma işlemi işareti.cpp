/*Soru8.
	Kullanici tarafindan girilen iki tam sayinin �arpiminin isaretini, sayilari �arpmadan bulan
	bir program yazin. �rnek ekran g�r�nt�s� asagida verilmistir.
	
	2 adet sayi giriniz: -3 432
	>>sign(-3*432)= -1
	
	2 adet sayi giriniz: 10 5
	>>isaret(10*5)= +1

	Not: �arpim islemi yapmadan sonucun isaretini bulmak i�in, her iki sayinin pozitif ve 
	negatif oldugu durumlari d�s�n�p derste g�rd�g�n�z && ve | | operat�rlerini kullanmaniz
	gerekmektedir. */
	
	

#include <stdio.h>
#include <stdlib.h>

	main(){

	int a,b;
	printf("Lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&a,&b);
	
	if((a>0 && b>0) || (a<0 && b<0)){
		
		printf(">> sign(%d*%d)=+1",a,b);
	}

	else if((a>0 && b<0) || (a<0 && b>0)){
		
		printf(">> sign(%d*%d)=-1",a,b);
	}
 	else{
 		printf(">> sign(%d*%d)=0",a,b);
	 }

}



