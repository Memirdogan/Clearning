/*Soru 7.
	Kullanici tarafindan girilen reel bir sayinin asagida verilen f fonksiyonuna gore f(x)
	degerini hesaplayip döndiüren bir program yaziniz
	
	f(x)= x^3 + 13x^2 + 47x + 5
	
	bir reel sayi giriniz: 2.43
	>> f(2.430) = 210.323 */

#include <stdio.h>
#include <stdlib.h>

	main(){
		
	float x;
	
	
	printf("lutfen bir reel sayi giriniz:\n");
	scanf("%f",&x);
		
	printf(">>F(%.3f) = %.3f",x,x*x*x+13*x*x+47*x+5);

	return 0;

}
