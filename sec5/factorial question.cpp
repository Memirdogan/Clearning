/*Soru19.
	Klavyeden girilen bir tamsayinin faktoriyelini fonksiyon kullanarak hesaplayan C programini yaziniz*/
#include <stdio.h>
#include <stdlib.h>

int factorial(int number)
{
	int a=1,i;
	for(i=1;i<=number;i++)
		a*=i; //a=a*i
	return a;
}

int main(){

	int number;
	printf("enter an integer: \n");
	scanf("%d",&number);
	printf("factorial of the number you entered is : %d ",factorial(number));
	return 0;
}
