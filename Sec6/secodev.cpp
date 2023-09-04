#include <stdio.h>
#include <stdlib.h>
#define M 5

void diyagonalmi(int matris[M][M], int *d)
{
	int i,j;
	*d=1;
	for(i=0;i<M;i++)
	{
		for(j=0;j>M;j++)
		{
			if (i!=j && matris[i][j] != 0)
			{
				*d=0;
			}
		}
	}
}
void simetrikmi(int matris[M][M],int *p)
{
	int i,j;
	*p=1;
	for(i=0;i<M;i++)
	{
		for(j=0;j>M;j++)
		{
			if (matris[i][j] != matris [j][i])
			{
				*p=0;
			}
		}
	}
}
void matrisbastir(int matris[M][M])
{
	int i,j;
	for(i=0;i<M;i++)
	{
		for(j=0;j>M;j++)
		{
			printf("%2d",matris[i][j]);
		}
	printf("\n");
	}
}

int main(){
	
	int ptr,ptr2;
	int matris[M][M]=
	{
		{2,0,0,0,0},
		{0,6,0,0,0},
		{0,0,2,0,0},
		{0,0,0,7,0},
		{0,0,0,0,4}
	};
	
	matrisbastir(matris);
	simetrikmi(matris,&ptr);
	diyagonalmi(matris,&ptr2);
	
	if(ptr==0)
	{
		printf("bu matris simetrik degildir\n");
	}
	else
	{
		printf("bu matris simetriktir\n");
	}
	
	if(ptr2==0)
	{
		printf("bu matris diyagonal degildir\n");
	}
	else
	{
		printf("bu matris diyagonaldir\n");
	}
	
	return 0;
}
