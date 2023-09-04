/*Soru20.
	1 den 10 a kadar her bir sayinin faktoriyelini fonksiyon kullanarak hesaplayan ve sonuçlari ekrana
	listeIeyen C programini yaziniz*/
#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int a)
{
	int i;
	int sonuc=1;
	for(i=1;i<=a;i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}

int main(){

	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d! = %d\n",i,faktoriyel(i));
	}
	return 0;
}
