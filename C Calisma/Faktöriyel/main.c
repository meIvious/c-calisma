#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	int i;
	int toplam=1;
	printf("sectiginiz sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		toplam=toplam*i;
	}
	printf("sectiginiz sayinin faktoriyeli=%d dir",toplam);
	getch();
	return 0;
}
