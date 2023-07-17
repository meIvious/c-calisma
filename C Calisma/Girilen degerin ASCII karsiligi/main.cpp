#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a;
    printf("Bir karakter giriniz: ");
    scanf("%c",&a);
    printf("Girilen degerin ASCII karsiligi %c = %d",a,a);
	return 0;
}
