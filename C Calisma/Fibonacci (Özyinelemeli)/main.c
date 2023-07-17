#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main() {
 int kullanici_degeri;
 int sayia=1;
 int sayib=1;
 int i;
  printf("sayi girisi yapiniz:");
  scanf("%d",&kullanici_degeri);
 
 printf("%d\n%d\n",sayia,sayib);
 
 for(i=0; i<kullanici_degeri; i++)
 {

  sayia=sayia+sayib;
  sayib=sayia+sayib;
  printf("%d\n%d\n",sayia,sayib);
 }
	return 0;
}
