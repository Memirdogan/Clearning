/*Soru 3. 
	Kullanicmin girdigi bir n sayisina kadar olan tüm tam sayilarin toplamm hesaplayip
	düzgün bir sekilde ekrana bastiran bir program yazin.
	
	bir tane tam sayi giriniz: 8
	1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36  */

#include <stdio.h>
#include <stdlib.h>

	main(){

	int a,i,toplam=0;
	
	printf("lutfen bir sayi giriniz:\n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		
		toplam=toplam+i;
		
		if(i==a){
			printf(" %d  ",i);
		}
		else{
			printf(" %d +",i);
		}
	}
	printf("= %d ",toplam);
	
	return 0;
	
 /*sayýlarýn toplamý toplam deðiþkeninde birikiyo ve en son onu bastýrýyoruz 
 döngüde i ile a eþit olana kadar + lý eþit olunca + sýz bastýrýp istenilen çýktýyý elde ediyoruz */
}
