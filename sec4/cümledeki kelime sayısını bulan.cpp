/*Soru13.
	 Klavyeden girilen bir c�mledeki kelime say�s�n� bylan c program�n� yaz�n�z*/


#include <stdio.h>
#include <stdlib.h>

	main(){
	
	char cumle[100];
	int i=0;
	int sayac=0;
	
	printf("bir cumle giriniz\n");
	fgets(cumle,sizeof(cumle),stdin);
	
	while(cumle[i])
	{
		if(cumle[i]==32){
			sayac++;
		}
		i++;
	}

	printf("girilen cumledeki kelime sayisi: %d\n", sayac+1);
	return 0;

}
