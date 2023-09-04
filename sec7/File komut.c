#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE Yapisi file pointer olarak adlandirilir

    FILE *dosya;    seklinde tanimlanir.


    Dosyayi aacmak icin fopen(),
    Dosyayi kapatmak icin fclose(), kullanilir


    FILE *dosya;
    dosya=fopen(const char dosya_adi,const char mod);
    
    ....
    dosyaislemleri
    .....
    fclose(dosya);

    DosyaacmaModlari

    r       ReadOnly          Sadece okuma icin. Dosyanin acilabilmesi icin onceden olusturulmasi gerek

    w       WriteOnly         Yalnizca yazma icin. Dosya kayitli olsun veya olmasin yeniden olusturulur

    a       append            Ekleme. Kayitli bir dosyanin sonuna veri eklemek icin kullanilir

    r+      Okuma ve Yazma    Bu modda acilmis olan bir dosyanin daha onceden var olmasi gerekir

    w+      Okuma ve Yazma    Bu modda acilmis olan bir dosya var olsun veya olmasin yeniden olusturulur

    a+      Okuma ve Yazma    Kayitli bir dosyanin sonuna veri eklemek icin acilir


	fflush(stdin); (bellegi bosaltip hata almayi engeller)
	
    Fonksiyon

	gets(cumle)
    fgetc()   Dosyaya bir karakter veri okur
    fgets(satir,100,dosya);   Dosyaya bir karakter dizi okur
    fread()   Dosyaya bir kayit dizi veya karakteri ikili olarak okur
    fscanf()  Dosyadaki verileri bicimlendirerek okur
    
	fputs()   Dosyaya bir karakter dizisi kaydeder
	fprintf() Dosyaya bicimlendirilmis veri kaydetmek icin kullanilir
	
	getchar() karakter karakter girdi almak icin kullanilir.
	putchar() Yalnizca tek bir karakteri (char tipinde bir degeri) ekrana yazdirir.
	
	
	{
		putc karakter karakter girdi alicaksak for ile putc(cumle[i],dosya);
	}
	
	------------------------------------------
	fgetc ile getchar arasindaki fark kullanim farkidir fgetc de dosyayi belirtmemiz gerekir
	------------------------------
	int ch = getchar(); // Bir karakter oku
	if (ch == EOF) {
    // Dosya sonuna veya hata durumuna ulasildi
	} else {
    // Okunan karakter üzerinde islemler yapilabilir
	}
	------------------------------
	FILE *dosya = fopen("dosya.txt", "r");
	int ch = fgetc(dosya); // Dosyadan bir karakter oku
	if (ch == EOF) {
    // Dosya sonuna veya hata durumuna ulasildi
	} else {
    // Okunan karakter üzerinde islemler yapilabilir
	}
	fclose(dosya); // Dosyayi kapatmayi unutmayin
	------------------------------
	
	
    DOSYANIN SONUNUN BELIRENMESI feof() //file eof (end of file) = feof

    Dosyadan okuma islemleri yapilirken,cogu kez dosyanin sonunu denetlemek gerekecektir.Dosya
    gostergesinin dosyanin sonuna isaret edip etmedigini anlamak icin feof fonksiyonu kullanilir

    FILE *dosya;
    while(!feof(dosya))
    {
        fgetc(dosya);        Dosyanin sonuna gelinmedigi surece dosyadan karakter okur

    }

}
