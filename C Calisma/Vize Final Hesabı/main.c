#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vize;
	int final;
	float ort;
	printf("vize notunu giriniz:\n");
	scanf("%d",&vize);
	printf("final notunu giriniz:");
	scanf("%d",&final);
	ort=vize*40/100+final*60/100;
	printf("ortalamaniz:%d dir",&ort);
	getch();
	return 0;
}
