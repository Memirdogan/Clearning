/*Soru 3.
Kullancidan 3 farkh tam sayi girmesini isteyen, kullanicmin girdigi bu sayilari okuyup
sayilar�n en k���g�n� ve en b�y�g�n� ekrana bastiran program
Yazacaginiz programm ekran ciktisi asagida verilmistir:

 �s farkli tam sayi giriniz: 29 78 14
 En k���k sayi: 14
 En b�yuk sayi: 78
 
  NOT: En k���k ve en b�yuk sayiyi bulmak i�in yapacaginiz karylastirmalarda if(...)
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
