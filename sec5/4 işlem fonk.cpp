/*Soru17.
	Klavyeden girilen iki tamsayinin toplamini, farkini, çarpimini ve bölümünü gerçeklestiren 
	C programini fonksiyon kullanarak yaziniz*/
#include <stdio.h>
#include <stdlib.h>
void islem(int sayi1,int sayi2)
{
	printf("sayilarinizin toplami: %d \n",sayi1+sayi2);
	printf("sayilarinizin farki: %d \n",sayi1-sayi2);
	printf("sayilarinizin carpimi: %d \n",sayi1*sayi2);
	printf("sayilarinizin bolumu: %d \n",sayi1/sayi2);
}

int main(){

	int sayi1,sayi2;
	printf("iki tam sayi giriniz: \n");
	scanf("%d %d",&sayi1,&sayi2);
	islem(sayi1,sayi2);

	return 0;
}
