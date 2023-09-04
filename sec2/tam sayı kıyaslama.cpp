/*Soru 4.
	(a) Kullanicmin girdigi 2 tam sayidan, ilkinin ikincisi ile karsilastirip esit olup olmadigini,
	eger esit degilse ikincisinden büyuk mü yoksa küçük mü oldugunu ekrana bastiran bir
 	program yazin. 
	(b) Yazdiginiz programi birinci sayinin ikincinin kati olup olmadigini ekrana bastiracak
	sekilde degistirin. Modulo (%) operatörünü kullanabilirsiniz.*/
 
#include <stdio.h>
#include <stdlib.h>

	main(){

	int a,b;
	
	printf("iki adet tam sayi giriniz: \n");
	scanf("%d %d",&a,&b);
	
	if(a == b){
		printf("girdiginiz sayilar esittir\n");
	}
	else{
		if(a>b){
			printf("ilk sayiniz ikincisinden buyuktur\n");
		}
		else{
			printf("ilk sayiniz ikincisinden kucuktur\n");
		}
	}
	
	if(a%b==0){
		printf("%d sayisi %d sayisinin katidir \n",a,b);
	}
	else{
		printf("%d sayisi %d sayisi ile kat degildir \n",a,b);
	}
	
	return 0;

}
