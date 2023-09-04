/*Soru9.
	while dongusu kulanarak 0 ile kullanicidan aldigi n sayisi arasinda yer alan 17nin tum
	tam sayi katlarini ekrana bastiran bir program yainiz. (25 puan)
	Programinizi àsagidaki ekran göriüntüisiünde gÖziüktügü gibi her satiirda 10 adet sayi olacak
	sekilde dizenleyin. (15 puan) */

#include <stdio.h>
#include <stdlib.h>

	main(){

	int i=0,n;
	int satir=0;
	
	printf("lutfen bir sayi giriniz:\n");
	scanf("%d",&n);

	while(i<n){
		
		i++;
		if(i%17==0){
			
			printf("%4d",i);
			satir++;
			
			if(satir%10==0){
				printf("\n");
				
			}
		}	
	}
	
	return 0;
}
