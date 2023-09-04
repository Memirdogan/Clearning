#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
-I. Bir ögrencinin okul numarasi, adi, soyadi ve yas bilgilerini tutan ogrenci bilgi
adli bir yapi tanimlayiniz
—2.ogrenci 1 ve ogrenci 2 degiskenlerini ogrenci bilgi yapi tipinde tanimlayiniz
-3. Asagidaki ögrenci bilgilerini ogrenci 1 degiskenine atayiniz.
Okul numarasi: 522
Adi : can
Soyadi : Boz
Yasi: 18
-4 ogrenci I degiskenini, ogrenci 2 degiskenine kopyalayiniz.
*/

int main(){
	
	struct ogrenci_bilgi{
	int okulnumarasi;
	char ad[10];
	char soyad[10];
	int yas;
	};

	struct ogrenci_bilgi ogrenci_1,ogrenci_2;
	ogrenci_1.okulnumarasi=522;
	strcpy(ogrenci_1.ad,"can");
	strcpy(ogrenci_1.soyad,"boz");
	ogrenci_1.yas=18;
	
	ogrenci_2=ogrenci_1;
	
	
	return 0;
}
