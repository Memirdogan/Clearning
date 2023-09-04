#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        int (4 bytes) | %d
        double  (8 bytes) | %lf
        float (4 bytes) | %f
        char (1 byte) | %c
        string | %s

    float sayim = 5.65;
    double sayim2 = 6.66;


    printf("1.sayim:%.2f 2.sayim:%.2lf",sayim,sayim2);
*/
int a,b;
char c;
printf("lutfen 2 sayý ve isminizin baþ harfini giriniz\n");
printf("birinci sayi:\n");
scanf("%d",&a);
printf("ikinci sayi\n");
scanf("%d",&b);
printf("isminizin bas harfi:\n");
scanf(" %c",&c);
printf("birinci sayiniz: %d  ikinci sayiniz: %d bas harfiniz: %c",a,b,c);


    return 0;
}
