#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*if(x > y)
    {
       printf("X Y den buyuktur");
    }
    else
    {
       printf("X Y den kucuktur veya esittir");
    }


    if(condition)
    {
        kodlar
    }
    else if(conditon)
    {
        kodlar
    }
     else if(conditon)
    {
        kodlar
    }
    else{

    }*/


   int x;
   int y;

    printf("X sayisini giriniz\n");
    scanf("%d",&x);

    printf("Y sayisini giriniz\n");
    scanf("%d",&y);

    if(x < y)
    {
       printf("X Y den kucuktur");
    }
    else if(x == y){
        printf("X Y ye esittir");
    }
    else
    {
       printf("X Y den buyuktur");
    }







    return 0;
}
