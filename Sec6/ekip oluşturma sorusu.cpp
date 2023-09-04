#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kimlik{
	char ad[10];
	char soyad[10];
	int yas;
};

struct ekip{
	char ekipad[10];
	struct kimlik kimlik1;
	struct kimlik kimlik2;
};

void oyuncuyuolustur(struct kimlik *k)
{
	scanf("%s",k->ad);
	
	printf("\n soyismi: ");
	scanf("%s",k->soyad);
	
	printf("\n yasi: ");
	scanf("%d",&k->yas);
}

void ekibiolustur(struct ekip *e)
{
	scanf("%s",e->ekipad);
	
	printf("-----1. Oyuncu-----\n ismi: ");
	
	oyuncuyuolustur(&e->kimlik1);
	
	printf("----- 2. oyuncu -----\n ismi: ");
	
	oyuncuyuolustur(&e->kimlik2);
}

void oyuncuyubas(struct kimlik g)
{
	printf("Oyuncunun adi     : %s \n",g.ad);
	printf("Oyuncunun soy adi : %s \n",g.soyad);
	printf("Oyuncunun yasi    : %d \n",g.yas);
}

int main(){
	
	int i,n;
	
	printf("kac tane ekip olusturulcak?\n");
	scanf("%d",&n);

	struct ekip takim[n];
	
	for(i=0;i<n;i++)
	{
		printf("-----Ekip-----\nEkip %d adi giriniz : ",i+1);
		ekibiolustur(&takim[i]);
	}
	
	printf("----------- EKIP BILGILERI -----------\n");
	
	for(i=0;i<n;i++)
	{
		printf("---Ekip %d---\n",i+1);
		
		printf("Ekibin ismi: %s\n",takim[i].ekipad);
		
		oyuncuyubas(takim[i].kimlik1);
		printf("2. oyuncu\n");
		oyuncuyubas(takim[i].kimlik2);
	}
	
	return 0;
}
