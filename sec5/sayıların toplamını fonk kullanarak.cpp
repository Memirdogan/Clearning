/*Soru16.
	Klavyeden girilen Iki tamsayinin toplamini fonksiyon kullanarak hesaplayan 
	C programini yaziniz*/
	
#include <stdio.h>
#include <stdlib.h>

int topla(int sayi1,int sayi2)
{
	return sayi1+sayi2; 
}

int	main(){

	int sayi1,sayi2;
	printf("iki tam sayi giriniz: \n");
	scanf("%d %d",&sayi1,&sayi2);
	
	printf("sayilarin toplami: %d",topla(sayi1,sayi2));

	return 0;
}
