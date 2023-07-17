#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char adi[20];
	int i;
	int sayi=0;
	printf("Adi giriniz:");
	scanf("%s",adi);
	while(adi[sayi]!=NULL)
	{
		sayi++;
	}
	printf("SONUC-->");
	for(i=(sayi-1);i>=0;i--)
	{
		printf("%c",adi[i]);
	}
	return 0;
}
