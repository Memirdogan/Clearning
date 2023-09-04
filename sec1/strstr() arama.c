#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //strstr()
     char can[100]="C dilini ogreniyoruz";
     char *sub;
     sub=strstr(can,"ogr");
     printf("\nArama sonrasi yeni string: %s",sub);


    return 0;
}
