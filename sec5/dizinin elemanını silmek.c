#include <stdio.h>
#include <stdlib.h>

void kayitsil(int A[],int sira,int elemansayisi)
{
    int i;
    if(sira>=elemansayisi+1)
    {
        printf("Gecerli bir sira numarasi giriniz\n");
    }
    else
    {
        for(i=sira-1;i<elemansayisi-1;i++)
        {
            A[i]=A[i+1];
        }
        printf("Kayit silindikten sonraki durum\n");
        for(i=0;i<elemansayisi-1;i++)
        {
            printf("%d\n",A[i]);
        }
    }

}
int main()
{
    /*Bilgisayar tarafından rastgele üretilen N adet sayı bir dizide tutulmaktadır.
    Dizi içerisinde istenilen bir değerin dizideki sıra numarası girilerek ilgili sırada bulunan dizi
    değerinin silinmesini sağlayan C programını fonksiyon kullanarak yazınız*/
    int n;
    int i;
    int sirano;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0)) ;
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("\nSilinecek degerin sira numarasini giriniz\n");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);

    return 0;
}
