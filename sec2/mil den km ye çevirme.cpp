/*Soru10.
	Mil Sorusu
	Bir arabanin gittigi yolu mil cinsinden girdi olarak alan ve bunu km ye çeviren bir c programi yazin.(1mil=1.609 km)*/

#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

	main(){

	float yol,km;
	
	printf("gidilen mil yolunu giriniz:\n");
	scanf("%f",&yol);
	
	km=yol*MIL;
	
	printf("gittiginiz km miktari %.2f ",km);
	
	return 0;
}
