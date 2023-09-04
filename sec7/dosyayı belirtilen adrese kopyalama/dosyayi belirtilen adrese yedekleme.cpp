#include <stdio.h>
#include <stdlib.h>



int main(){
	
	FILE *giris,*cikis;
	
	char kaynak[50],hedef[50],karakter;
	
	printf("Lutfen yedeklenecek dosyanin adini ve uzantisini giriniz ! orn: metin.txt\n");
	gets(kaynak);
	
	giris=fopen(kaynak,"r");
	if(giris == NULL)
	{
		printf("yedeklenecek dosya bulunamadi\n");
		exit(1);
	}
	
	printf("lutfen yedeklenecek dosyanin uzantisini giriniz\n");
	gets(hedef);
	
	cikis=fopen(hedef,"w");
	
	if(cikis == NULL)
	{
		printf("dosya olusturulamadi\n");
		exit(1);
	}
	
	for(karakter=getc(giris);karakter != EOF;karakter=getc(giris))
	{
		putc(karakter,cikis);
	}
	
	fclose(giris);
	fclose(cikis);
	printf("yedekleme tamamlandi...");
	
	return 0;
}
