/*Soru21.
	her say�n�n kendinden �nceki sayi ile toplanmas� sonucu olu�an say� dizisine fibonacci dizisi ad� verilir.
	buna g�re klavyeden ka� adet fibonacci say�s� �retilece�i bilgisi girilerek say�lar�n �retilmesini sa�layan 
	c program�n� fonk kullanarak yaz�n�z*/
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
