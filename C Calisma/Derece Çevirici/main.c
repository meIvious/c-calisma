#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float celcius,fahrenheit;
	printf("Celcius degeri giriniz:");
	scanf("%f",&celcius);
	fahrenheit=(1.8)*celcius+32;
	printf("fahrenheit degeri %f",fahrenheit);
	getch();
	return 0;
}
