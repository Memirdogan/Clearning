/*Soru 3.
Kullancidan 3 farkh tam sayi girmesini isteyen, kullanicmin girdigi bu sayilari okuyup
sayilarýn en küçügünü ve en büyügünü ekrana bastiran program
Yazacaginiz programm ekran ciktisi asagida verilmistir:

 Üs farkli tam sayi giriniz: 29 78 14
 En küçük sayi: 14
 En büyuk sayi: 78
 
  NOT: En küçük ve en büyuk sayiyi bulmak için yapacaginiz karylastirmalarda if(...)
blogunu kullanabilirsiniz.*/


#include <stdio.h>
#include <stdlib.h>

main(){

	int a,b,c;
	
	printf("uc farkli tam sayi giriniz:\n");
	scanf("%d %d %d",&a ,&b ,&c);
	
	if(a>b && a>c){
		
		printf("\nEn buyuk sayi: %d \n",a);
		
		if(b>c){
			
			printf("En kucuk sayi: %d \n",c);
		}
		else{
			
			printf("En kucuk sayi: %d \n",b);
		}
	}
	
	else if(b>a && b>c){
		
		printf("\nEn buyuk sayi: %d \n",b);
		
		if(a>c){
			
			printf("En kucuk sayi: %d \n",c);
		}
		else{
			
			printf("En kucuk sayi: %d \n",a);
		}
	}

	else if(c>b && c>a){
		
		printf("\nEn buyuk sayi: %d \n",c);
		
		if(b>a){
			
			printf("En kucuk sayi: %d \n",a);
		}
		else{
			
			printf("En kucuk sayi: %d \n",b);
		}
	}

	else{
		printf("girdiginiz sayilar esit veya gecersiz");
	}

	return 0;
}
