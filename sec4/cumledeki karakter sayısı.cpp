/*Soru14.
	Cümledeki karakter sayýsýný bulan program yazýnýz*/

#include <stdio.h>
#include <stdlib.h>

	main(){

	char cumle[100];
	int i=0;
	
	printf("bir cumle giriniz\n");
	fgets(cumle,sizeof(cumle),stdin);
	
	while(cumle[i]){
		i++;
	}
	printf("girdiginiz cumledeki karakter sayisi: %d ",i);
	
	return 0;

}
