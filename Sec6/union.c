#include <stdio.h>
#include <stdlib.h>

//struct ile kullanýmý ayný fakat hafýzada daha az byte kaplar

union test
{
    int x,y;
};


int main()
{
    union test t;

    t.x=2;
    printf("%d\n",t.x);

    printf("Union imizin tuttugu alan %d byte tir",sizeof(t));

    t.y=10;
    printf("%d",t.y);
    return 0;
}
