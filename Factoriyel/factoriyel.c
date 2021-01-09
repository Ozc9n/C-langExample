#include <stdio.h>

int FactoriyelHesapla(int sayi){
	int fact=1;
	while(sayi>0){
		fact*=sayi;
		sayi--;
	}
	printf("Sayininin factoriyeli : %d\n",fact);	
}
int FactoDoWhile(int sayi){
	int fact=1;
	do {
		fact*=sayi;
		sayi--;
	}while(sayi>0);
	
	printf("Sayinin factoriyeli : %d\n",fact);
}
int FactoFor(int sayi){
	int fact=1;
	int i ;
	for(i=1;i<=sayi;i++){
		fact*=i;
	}
	printf("Sayinin factoriyeli : %d\n",fact);
}
	
		
int main(){
		int sayi ;
		printf("Bir sayi giriniz....\n");
		scanf("%d",&sayi);
		FactoriyelHesapla(sayi);
		printf("Bir sayi daha giriniz....\n");
		scanf("%d",&sayi);
		FactoDoWhile(sayi);
		printf("Bir sayi daha giriniz(Bu son ) \n");
		scanf("%d",&sayi);
		FactoFor(sayi);
 return 0;
}