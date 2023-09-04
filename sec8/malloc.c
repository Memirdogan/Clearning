#include <stdio.h>
#include <stdlib.h>

/* -malloc hafizadan belirli bir yer ayirmamiza yarar.
		geriye void tipinde bir pointer dondurur.
		voidin tipi olmad�g�ndan istedigimiz degisskene cast islemi yapabiliriz
	-eger yeterli alan ayrilmadiysa geriye NULL pointer dondurur 
	
	int *ptr=(int*)malloc(5*sizeof(int)); 
*/



int main()
{

  int *ptr;

  int n;
  n=5;
  int i;
  printf("Girdigimiz sayi degeri %d\n",n);

  ptr=(int*)malloc(n*sizeof(int));

  if(ptr==NULL)
  {
      printf("Hafiza bolunmedi\n");
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

      free(ptr);

  }
    return 0;
}
