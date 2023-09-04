#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define VARMI

   /*#ifdef PII
    //successful code
    #else
    //else code
    #endif

    #ifdef PI
      printf("C harika gidiyor");
     #else
      printf("C muthis gidiyor");
   #endif*/


int main()
{
   int sayi;
   #ifdef VARMIIIIII
      sayi=2;
     #else
      printf("Lutfen bir deger giriniz\n");
      scanf("%d",&sayi);
   #endif

   printf("Sayi degerim %d",sayi);




    return 0;
}
