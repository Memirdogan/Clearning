#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
    int i;
    int j;
    int gecici;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);
    int dizi[N];

    printf("Dizi elemanlari\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);

    }
    printf("\nDizi elemanlari\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=1;i<N;i++)
    {
        j=i;
        while(j>0 && dizi[j]<dizi[j-1])
        {
            gecici=dizi[j];
            dizi[j]=dizi[j-1];
            dizi[j-1]=gecici;

            j--;
        }
    }
    printf("\n Siralanmis Dizi Elemanlari\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }






    return 0;
}
