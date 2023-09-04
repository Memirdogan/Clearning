#include <stdio.h>
#include <stdlib.h>

struct customers{
	char isim[10];
	char soyisim[10];
	int kahvalti; //0=almýyor/ 1= 15 euro 
	int aksamyemegi; //0=almýyor / 1=35euro
	int hotel;//0=almýyor / 1= 2yildiz 75 euro / 2=3yildiz 100 euro
	int yalniz; //0= tek kalýyo / 1= arkadasýyla kalýyo *2 yemek
};

void hesap(struct customers c[4], int n, int m, int k)
{
	if(c->kahvalti==1)
	k=k+15;
	if(c->aksamyemegi==1)
	k=k+35;
	if(c->hotel==1)
	k=k+75;
	if(c->hotel==2)
	k=k+100;
	if(c->yalniz==1)
	k=k+((c->kahvalti+c->aksamyemegi)*2);
	printf("hesap %d Euro",k);
}
void aksamyemegi(struct customers c[4], int m)
{
	if(c->aksamyemegi==0)
	{
		printf("aksam yemegi almiyor\n");
	}
	if(c->aksamyemegi==1)
	{
		printf("aksam yemegi aliyor\n");
		m++;
	}
}

void kahvaltidurum(struct customers c[4], int n)
{
	if(c->kahvalti==0)
	{
		printf("kahvalti almiyor\n");
	}
	if(c->kahvalti==1)
	{
		printf("kahvalti aliyor\n");
		n++;
	}
}

void bastir(struct customers c[4])
{
	int i,n,m,k;
	for(i=0;i<4;i++)
	{
		printf("--------musteri %d--------\n",i+1);
		printf("adi: %s\n",c[i].isim);
		printf("soyadi: %s\n",c[i].soyisim);
		kahvaltidurum(c,n);
		aksamyemegi(c,m);
		hesap(c,k,n,m);
		printf("\n\n");
		printf("toplam kahvalti yiyen sayisi %d\n",n);
		printf("toplam aksam yemegi yiyen sayisi %d\n",m);
	}
}

int main(){
	struct customers musteri[4];
	int i,m,n,p;
	
	for(i=0;i<4;i++)
	{
		printf("--------%d. musterinin--------\n",i+1);
		printf("adi:");
		scanf("%s",&musteri[i].isim);
		
		printf("soyadi:");
		scanf("%s",&musteri[i].soyisim);
		
		printf("hangi kahvalti secenegi=\n-  0 = almiyor\n-  1 = 15 euro\n ");
		scanf("%d",&musteri[i].kahvalti);
		
		printf("hangi aksam yemegi secenegi=\n-  0 = almiyor\n-  1 = 35 euro\n ");
		scanf("%d",&musteri[i].aksamyemegi);
		
		printf("hangi hotel secenegi=\n-  0 = almiyor\n-  1 = 2yildiz 75 euro\n-  2 = 3yildiz 100 euro\n ");
		scanf("%d",&musteri[i].hotel);
		
		printf("otelde arkadasinizla mi kalcaksiniz=\n-  0 = hayýr\n-  1 = evet\n ");
		scanf("%d",&musteri[i].kahvalti);
	}
	printf("\n\n");
	bastir(musteri);
	

	return 0;
}
