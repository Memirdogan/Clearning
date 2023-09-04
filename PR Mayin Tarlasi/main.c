#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//defines

#define ALAN 8 // Mayin tarlasinin kaca kac matris oldugu
#define MAYINSAYISI 7 // Mayin sayim
#define WIN 1 //kazandin
#define LOSE -1 //kaybettin
#define CONTINUE 0 //oyunda devam ediyorum

//Variables Global | degiskenlere tum projede erismek icin

int tables[ALAN+2][ALAN+2];
char tab[ALAN+2][ALAN+2];
int mine_no,y=0;
int b_count=0;// bayrak sayisi

//fonksion

void create_table(); //alt tabloyu olusturmayi saglar
void initializer_table(); // ilk olarak tablomu initializer etmeyi saglar
void print_lowertable(); // alt tabloyu bastirmayi saglar
void print_table(); //tabloyu bastirmami saglar
void place_mines(); //mayin yerlestirme
int verify_game(); //kazanip kazanmadigini kontrol etme
void explorer(int line, int colon); // mayin tarlasinda ne var ne yok kesif etme
int location(int line, int colon); // mayin tarlasinin icindeki istedigim kortinati acar | satir | colon



int main(void)
{
	int line,colon;
	int ilerleme;
	int yeniden;
	char action; // oyuncunun hangi harfi girdigini tutan degisken
	printf("----- Mayin Tarlasi oyununa hosgeldiniz -----\n\n");
	create_table();
	initializer_table();
	
	do
	{
		print_table();
		printf("\n");
		printf("a= sectiginiz kareyi acar | b= sectiginiz kareye bayrak koyar | e=bayragi kaldirip hucrenin acilmasini saglar\n\n");
		printf("Lutfen su formatta giriniz: |a,satir,sutun| veya |b,satir,sutun| veya |e,satir,sutun|\n");
		scanf("%c,%d,%d",&action,&line,&colon);
		printf("\n");
			
		if(action == 'a')
		{
			ilerleme=location(line,colon);
		}
		else if(action == 'b')
		{
			if(mine_no >= b_count)
			{
				b_count++;
				tab[line][colon]='B';
				ilerleme=verify_game();
			}
		}
		else if(action == 'e')
		{
			if(b_count>0)
			{
				b_count--;
			}
			tab[line][colon]='#';
			ilerleme=location(line,colon);
		}
			
		if(ilerleme==LOSE)
		{
			printf("---Oyunu kaybettin---\n");
			print_lowertable();
			printf("Yeniden oynamak ister misiniz? [1-evet][0-hayir] \n");
			scanf("%d",&yeniden);
			switch(yeniden)
			{
				case 0:printf("iyi gunler..\n");
					return 0;
					break;
				case 1:
					b_count=0;
					ilerleme=CONTINUE;
					create_table();
					initializer_table();
					break;
				default:
				printf("Yanlis bir deger girdiniz\n");
				break;
			}
		}	
			
		if(ilerleme==WIN)
		{
			printf("   TEBRIKLER!!!!!!   \n\n");
			print_lowertable();
			printf("Yeniden oynamak ister misiniz? [1-evet][0-hayir] \n");
			scanf("%d",&yeniden);
			switch(yeniden)
			{
				case 0:
					printf("iyi gunler..\n");
					return 0;
					break;
				case 1:
					b_count=0;
					ilerleme=CONTINUE;
					create_table();
					initializer_table();
					break;
				default:
				printf("Yanlis bir deger girdiniz\n");
				break;
			}
		}
			
	}while(1);
	
	return 0;
}

void create_table() //
{
	int i,j,mine_no;
	
	for(i=0;i<=ALAN+1;i++)
	{
		for(j=0;j<=ALAN+1;j++)
		{
			tables[i][j]= 0;
		}
	}
	for(i=0;i<=ALAN;i++)
	{
		tables[i][0]=1;
		tables[i][ALAN+1]=1;
	}
	for(j=0;j<=ALAN;j++)
	{
		tables[0][j]=1;
		tables[ALAN+1][j]=1;
	}
	mine_no=MAYINSAYISI;
	place_mines();
	
}

void initializer_table() //kapalý olan baslangic tablosu semasi
{
	int i,j;
	
	for(i=0;i<=ALAN+1;i++)
	{	
		for(j=0;j<=ALAN+1;j++)
		
			tab[i][j]='#';
		}	
	for(i=0;i<=ALAN;i++)
		{
		tab[i][0]='*';
		tab[i][ALAN+1]='*';
		}
	for(j=0;j<=ALAN;j++)
		{
		tab[0][j]='*';
		tab[ALAN+1][j]='*';
		}
}

void print_table() //tabloyu bastirmami saglar
{
	int i,j;
	printf("\n");
	
	for(i=1;i<=ALAN;i++)
	{
		printf("%3d",i);
	}
	printf("\n");
	
	for(i=1;i<=ALAN;i++){
		printf("---");
	}
	printf("\n");
	
	for(i=1;i<=ALAN;i++)
	{
		for(j=1;j<=ALAN;j++)
		{
			printf("%3c",tab[i][j]);
		}	
		printf("  |%d",i);
		printf("\n");
	}
	
	for(i=1;i<=ALAN;i++){
	printf("___");
	}
}

void print_lowertable()
{
	int i,j;

	printf("\n");
	
	for(i=1;i<=ALAN;i++)
	{
	printf("%3d",i);
	}
	printf("\n");

	for(i=1;i<=ALAN;i++)
	{
		printf("---");
	}
	printf("\n");	
	//
	for(i=1;i<=ALAN;i++)
	{
		for(j=1;j<=ALAN;j++)
		{
			printf("%3d",tables[i][j]);
		}
		printf(" |%d",i);	
		printf("\n");
	}
	
	for(i=1;i<=ALAN;i++)
	{
		printf("___");
	}
	printf("\n");
}

	void place_mines() //mayin yerlestirme
	{
		srand(time(NULL));
		
		mine_no=MAYINSAYISI;
		
		int i,j,k,p,line,colon;
		
		for(i=1;i<=mine_no;i++)
		{
			line=1+rand()%ALAN;
			colon=1+rand()%ALAN;
			if(tables[line][colon] == -1) i--;
			tables[line][colon]=-1;
			
				for(k=-1;k<=1;k++)//sol orta sag
				{
					for(p=-1;p<=1;p++)//ust orta alt
					{
						if(tables[line][colon]==-1)//bombaysa
						{
							if(tables[line+k][colon+p]!=-1)//komsusu bomba deilse
							{
								tables[line+k][colon+p]++;//cevresindeki bomba sayisini bir attir
							}
						}
					}
		    	}			
		}	
	}

int verify_game() //kazanip kazanmadigini kontrol etme
{
	int i,j;
	int statue;
	
	for(i=1;i<=ALAN;i++)
	{
		for(j=1;j<=ALAN;j++)
		{
			if(tab[i][j]=='B')
			{
				if(tables[i][j]==-1)
				{
					y++;
				}
			}
		}
	}
	
	if(y == MAYINSAYISI)
	{
		statue=WIN;
	}
	else
	{
		statue=CONTINUE;
	}
	
	return statue;
}

void explorer(int line,int colon) // mayin tarlasinda ne var ne yok kesif etme
{
	int i,j;
	
	tab[line][colon]='0'+tables[line][colon];
	
	for(i=-1;i<=1;i++)
	{
		for(j=-1;j<=1;j++)
		{
			if(tables[line+i][colon+j] >0 && tab[line+i][colon+j]== '#')
			{
				tab[line+i][colon+j]='0'+tables[line+i][colon+j];//komsuyu ac
			}
			else if(tables[line+i][colon+j]==0 && tab[line+i][colon+j]=='#')
			{
				explorer(line+i,colon+j);
			}
		}
	}
}

int location(int line, int colon) // mayin tarlasinin icindeki istedigim kortinati acar | satir | colon
{
	int x=0;
	if(tables[line][colon] == -1)//bomba mi
	{
		x=LOSE;
	}
	else if(tables[line][colon] >0)
	{
		tab[line][colon]=('0'+tables[line][colon]);//bitti mi
		//x=verify_game();
		x=CONTINUE;
	}
	else//komsusu bossa
	{
		explorer(line,colon);
	}
	
	return x;
}
