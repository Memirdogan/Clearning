#include <stdio.h>
#include <stdlib.h>
/* bilgi.txt dosyasi i�erisinde birtakim bilgilerin oldugu varsayimaktadir.Buna g�re kullanici tarafindan
irilen bir c�mlenin karakter karakter bilgi.txt dosyasina eklenmesini saglayan C programini yaziniz.*/


int main(){
	
	FILE *dosya = fopen("bilgi.txt","w");
	char cum[100];
	if(dosya == NULL)
	{
		printf("dosya olusturulamadi.\n");
	}
	else
	{
		printf("dosyaya yazdirmak istediginiz cumle:\n");
		gets(cum);
		fprintf(dosya,"%s",cum);
		printf("dosyaya bilgiler kaydedildi.\n");
		fputs("\n",dosya);
		fclose(dosya);
	}
	
	int i;
	fopen("bilgi.txt","a");
	if(dosya == NULL)
	{
		printf("dosya olusturulamadi.\n");		
	}
	else 
	{
		printf("lutfen cumle giriniz\n");
		gets(cum);
		
		for(i=0;cum[i];i++)
		{
			putc(cum[i],dosya);
		}
		
	}
	printf("bilgiler eklendi");
	fclose(dosya);
	return 0;
}
