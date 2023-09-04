#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel{
	int sifre;
	char ad[10];
	char soyad[10];
	int yas;
	float maas;
	char cinsiyet[10];
}kisiler;

void sirala(kisiler K[], int M)
{
	int i,j;
	kisiler t;
	
	for(i=0;i<M-1;i++)
	{
		for(j=i+1;j<M;j++)
		{
			if(strcmp(K[i].ad,K[j].ad)>0)
			{
				t=K[i];
				K[i]=K[j];
				K[j]=t;
			}
		}
		
	}
}

void listele(kisiler x[], int m)
{
	int i;
	
	for(i=0;i<m;i++)
	{
		printf("%s	%s	%s	%d	%d	%.2f\n",x[i].ad,x[i].soyad,x[i].cinsiyet,x[i].yas,x[i].sifre,x[i].maas);
	}
}


int main(){
	
	int N,i;
	
	printf("kac adet personel girilcek:\n");
	scanf("%d",&N);
	
	kisiler kisi[N];
	
	for(i=0;i<N;i++)
	{
		printf("-----Yeni personel icin-----\n\n");
		
		printf("personelin adi:\n");
		scanf("%s",&kisi[i].ad);
		
		printf("personelin soyadi:\n");
		scanf("%s",&kisi[i].soyad);	
		
		printf("personelin cinsiyeti:\n");
		scanf("%s",&kisi[i].cinsiyet);		
		
		printf("personelin yasi:\n");
		scanf("%d",&kisi[i].yas);		
		
		printf("personelin sifresi:\n");
		scanf("%d",&kisi[i].sifre);		
		
		printf("personelin maasi:\n");
		scanf("%f",&kisi[i].maas);		
	}
	
	sirala(kisi,N);
	
	listele(kisi,N);
	
	return 0;
}
