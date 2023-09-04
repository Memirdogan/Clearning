#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// girilen degerler 10,5,7,15,8
// bubbelsort bunlari siralar
// 5 7 8 10 15

int main()
{
    int N;
    int i;
    int j,gecici;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&N);
    int dizi[N];

    srand(time(0));
    for(i=0;i<N;i++)
    {
       dizi[i]=rand()%100;
    }

    printf("Dizi elemanlari\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",dizi[i]);
    }

    for(i=0;i<(N-1);i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }
        }
    }

    printf("\n Siralanmis dizi elemanlari:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",dizi[i]);
    }

    return 0;
}
