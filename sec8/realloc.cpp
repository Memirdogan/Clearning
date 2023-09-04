#include <stdio.h>
#include <stdlib.h>

/* Realloc fonksiyonu daha oncesinde bellekten ayrilmis olan alanimizda degisiklik yapmamizi saglar.
	
	-Malloc veya calloc kullanarak bellekten ayirdigimiz alan yetersiz gelirse
		reallak dinamik olarak ayirdigimiz alani tekrardan guncellememizi saglar
	-yoksa bellekte alan kalmadiysa islem basarisiz olur ve geriye NULL doner 
	
	 ptr=realloc(ptr,n*sizeof(int));
	*/


int main()
{
  int *ptr;
  int n;
  n=5;
  int i;
  printf("Girdigimiz sayi degeri %d\n",n);

  ptr=(int*)calloc(n,sizeof(int));

  if(ptr==NULL)
  {
      printf("Hafiza bolunmedi\n");
      exit(0);
  }
  else
  {
      for(i=0;i<n;i++)
      {
          ptr[i]=i+1;
      }

      printf("Elemanlarim\n");
      for(i=0;i<n;i++)
      {
          printf("%d, ",ptr[i]);
      }
      printf("\n");
      n=10;
      printf("Girdigimiz sayi degeri %d\n",n);

      ptr=realloc(ptr,n*sizeof(int));
      printf("Bellek basarili bir sekilde tekrar ayrildi\n");
      for(i=5;i<n;i++)
      {
          ptr[i]=i+1;
      }

      printf("Elemanlarim\n");
      for(i=0;i<n;i++)
      {
          printf("%d, ",ptr[i]);
      }
      free(ptr);

  }
    return 0;
}
