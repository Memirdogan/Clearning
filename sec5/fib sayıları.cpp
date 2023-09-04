/*Soru21.
	her sayýnýn kendinden önceki sayi ile toplanmasý sonucu oluþan sayý dizisine fibonacci dizisi adý verilir.
	buna göre klavyeden kaç adet fibonacci sayýsý üretileceði bilgisi girilerek sayýlarýn üretilmesini saðlayan 
	c programýný fonk kullanarak yazýnýz*/
#include <stdio.h>
#include <stdlib.h>
void fibonacci(int n)
{
	int ilk=0;
	int ikinci=1;
	int sonraki;
	int i;
	
	printf("uretilecek fib sayilari: \n");
	
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			sonraki=i;
		}
		else
		{
			sonraki=ilk+ikinci;
			ilk=ikinci;
			ikinci=sonraki;
		}
		printf("%d\n",sonraki);
	}
}






int main(){

	int sayi;
	printf("kac adet fib sayisi uretilicek\n");
	scanf("%d",&sayi);
	fibonacci(sayi);
	return 0;
}
