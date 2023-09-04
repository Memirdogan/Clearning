#include <stdio.h>
#include <stdlib.h>
/* Asagidaki verilen yapi kullanilarak N adet ögrencinin ders notlari bilgisini ve ortalamasini 
hesaplayarak dersler.txt dosyasina yazan C programini yaziniz
vize1 %20
vize2 %20
final %60 */

struct ogrenci{
	char adsoyad[30];
	char ders[10];
	int vize1,vize2,final;
};

int main(){
	
	FILE *dosya = fopen("dersler.txt",w");
	
	int N,i;
	float ort;
	
	printf("lutfen kac adet ogrencinin bilgilerini girceginizi yaziniz:\n");
	scanf("%d",&N);
	
	struct ogrenci ogrencim[N];

	if(dosya == NULL)
	{
		printf("dosya olusturulamadi");
	}
	else
	{
		fprintf(dosya,"Adi Soyadi\t ders adi \t Vize1\t Vize2\t final\t ortalamasi\t\n\n");
		for(i=0;i<N;i++)
		{
			fflush(stdin);
			
			printf("lutfen %d. ogrencinin ad soyad giriniz:\n",i+1);
			gets(ogrencim[i].adsoyad);
		
			printf("ders adini giriniz:\n");
			gets(ogrencim[i].ders);
		
			printf("ogrencinin 1.vize notunu giriniz:\n");
			scanf("%d",&ogrencim[i].vize1);
			
			printf("ogrencinin 2.vize notunu giriniz:\n");
			scanf("%d",&ogrencim[i].vize2);
			
			printf("ogrencinin final notunu giriniz:\n");
			scanf("%d",&ogrencim[i].final);
			
			ort=((float)ogrencim[i].vize1*20/100)+((float)ogrencim[i].vize2*20/100)+((float)ogrencim[i].final*60/100);
			
			fprintf(dosya,"%s\t %s\t %d\t %d\t %d\t %.2f\t\n",ogrencim[i].adsoyad,ogrencim[i].ders,ogrencim[i].vize1,ogrencim[i].vize2,ogrencim[i].final,ort);
			
		}
		
		printf("bilgiler basari ile yazdirildi.");
	}

		


	
	

	return 0;
}
