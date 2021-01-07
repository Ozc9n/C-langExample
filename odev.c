#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{   
	int adet=7;//Kac adet sayi döndürecegini belirtmis oluyoruz.
	int aralik=10;//0-10 arasindaki(10 haric) degerleri dondurur.
	int i = 0, j = 0; 
	int gecici_hafiza = 0;
	int talihli_rakamlar[adet];
	int sayilar_ayni_mi = 0;

	srand(time(NULL));

	do {
		sayilar_ayni_mi = 0;
		gecici_hafiza = rand() % aralik;
		if(i==0 && gecici_hafiza==0){//Buradaki kosul ilk sayinin 0 dan farkli olmasini saglar
			gecici_hafiza = rand() % aralik;
		}		
		for (j = 0; j < i; j++) {
			if (gecici_hafiza == talihli_rakamlar[j]) {
				sayilar_ayni_mi = 1;
				break;
			}
		}
		if (sayilar_ayni_mi == 0) 
		{ 
		talihli_rakamlar[i] = gecici_hafiza; 
		i++; 
		}
	} while (i < adet);

	printf("%d Adet Talihli Numara: ", adet);
	for (i = 0; i < adet; i++) { printf(" %d",talihli_rakamlar[i]); }

	printf("\n\n");
	printf("1821012028 Huseyin Ozcan");


	getche();
	return 0;
}