/*Soru15.
	5 adet fonksiyon yazin
	-Kullaniciya karakter dizisi girdiren bir fonksiyon yazin
	-kullanicinin girdigi karakter dizisinin kaç elemanli oldugunu bulan bir fonksiyon yazin
	-Kullanicinin girdigi karakter dizisindeki bosluklari kaldiran bir fonksiyon yazin
	-Karakter dizisindeki karakterlerin yerlerini sondan basa dogru yer degistiren bir fonksiyon yazin
	-Bir tane palendrom fonksiyonu yazin.
	Bu fonksiyon karakter dizisinin bastan sona ve sondan basa yaziminda ayni karakter dizisi olup 
	olmadigini kontrol etsin.Eger öyleyse yani palendromsa 1 göndersin,palendrom degilse 0 göndersin

	Yukaridaki fonksiyonlari kullanarak kullanicidan bir karakter dizisi girmesini isteyen
	daha sonra palendrom olup olmadigini ekrana bastiran bir C programi yazin*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 40

void cumleyi_oku(char cumle[MAX])
	{
		int i=0;
		scanf("%c",&cumle[i]);
		while((cumle[i]!='\n') && i<MAX)
		{
			i++;
			scanf("%c",&cumle[i]);
		}
		cumle[i]='\0';
	}
	
int dizinin_boyu(char boy[MAX])
{
	int i;
	for(i=0;boy[i]!='\0';i++);
	return i;
}

void boslugu_kaldir(char bosluk[MAX])
{
	int i,j=0;
	
	for(i=0;bosluk[i]!='\0';i++)
	if(bosluk[i]!=' ')
	{
		bosluk[j]=bosluk[i];
		j++;
	}
	
	bosluk[j]!='\0';
	printf("boslugu kaldirdiktan sonra cumlemiz: ");
	
	for(i=0;bosluk[i]!='\0';i++)
	{
		printf("%c",bosluk[i]);
	}
}

void tersine_cevir(char cumlemi[MAX],char ters[MAX])
{
	int i;
	int j=dizinin_boyu(cumlemi)-1;
	for(i=0;cumlemi[i]!='\0';i++)
	{
		ters[i]=cumlemi[j];
		j--;
	}
	
	printf("\ncumlenin tersine cevrilmis hali :");
	for(i=0;i<dizinin_boyu(ters);i++)
		printf("%c",ters[i]);
}

int palendrom(char cumlem[MAX])
{
	int test=0,i=0,L;
	char tersim[MAX];
	
	boslugu_kaldir(cumlem);
	L=dizinin_boyu(cumlem);
	tersine_cevir(cumlem,tersim);
	
	for(i=0;i<L;i++)
	{
		if(tersim[i]!=cumlem[i])
			test=0;
		else
			test=1;
	}
	return test;
}

int	main(void){

	char cumle[MAX];
	int a;
	
	printf("bir cumle/kelime giriniz \n");

	cumleyi_oku(cumle);
	a=palendrom(cumle);
	if(a==1)
		printf("\nbu bir palendromdur\n");
	if(a==0)
		printf("\nbu bir palendrom degildir\n");
	return 0;
}
