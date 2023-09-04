#include <stdio.h>
#include <stdlib.h>

int main()
{
   int aci1,aci2,aci3;
   printf("3 tane aci giriniz \n");
   scanf("%d%d%d",&aci1,&aci2,&aci3);

   if(aci1+aci2+aci3==180)
   {
       if(aci1==60 && aci2==60 && aci3==60)
       {
           printf("Bu bir eskenar ucgendir\n");
       }
       else if(aci1==aci2 || aci1==aci3 || aci2==aci3)
       {
           printf("Bu bir ikizkenar ucgendir.\n");

       }
       else
       {
           printf("Bu bir cesitkenar ucgendir.");
       }

   }
   else
   {
       printf("Acilar ucgen olusturmaz");
   }

    return 0;
}
