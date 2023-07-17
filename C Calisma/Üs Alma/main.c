#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 

int main() {    
    int sayi,us,sonuc=1;
    printf("Sayi giriniz : "); scanf("%d",&sayi);
    printf("Us Giriniz :"); scanf("%d",&us);
     
    sonuc = pow(sayi,us);
     
    printf("Sonuc : %d",sonuc);
     printf("\n");
    system("pause");
    return 0;
}

/*
int main() {
	
int dizi[50], gecici, adet;
printf("Kac adet sayi girilecek: ");
scanf("%d", &adet);
for(int i=0; i<adet; i++){
printf("%d)Sayi giriniz: ", i+1);
scanf("%d", &dizi[i]);
}
for(int i=0; i<adet-1;i++){
for(int j=i+1; j<adet; j++){
if(dizi[i] > dizi[j]){
gecici = dizi[i];
dizi[i] = dizi[j];
dizi[j] = gecici;
}
}
}
for(int i=0; i<adet; i++)
printf("%d ", dizi[i]);
printf("n");
system("pause");
return 0;
}
*/

	

