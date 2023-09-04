#include <stdio.h>
#include <stdlib.h>

typedef struct yapi1{
	int okulno;
	char cevap[10];
}ogrenciler;

typedef struct yapi2{
	int okulno;
	int note;
}sonuclar;

int main(){
	
	ogrenciler ogrenci[30];
	sonuclar sonuc[30];
	int i,j;
	int dogru,yanlis;
	char anahtar[10];
	
	printf("cevap anahtarini giriniz:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",&anahtar[i]);
	}
	
	for(j=0;j<30;j++)
	{
		printf("okul no giriniz:\n");
		scanf("%d",&ogrenci[j].okulno);
		
		printf("cevapladigi siklari giriniz:\n");
		for(i=0;i<10;i++)
		{
			scanf("%s",&ogrenci[j].cevap[i]);
			
			if(anahtar[i] == ogrenci[j].cevap[i])
			{
				dogru++;
			}
			else
			{
				yanlis++;
			}
		}
		
		printf("Dogru: %d\n Yanlis: %d\n",dogru,yanlis);
		sonuc[j].note= dogru-(yanlis/4);
	}
	
	for(j=0;j<30;j++)
	{
		printf("ogrenci no: %d\nNot: %d\n",sonuc[j].okulno,sonuc[j].note);
	}
	
	return 0;
}
