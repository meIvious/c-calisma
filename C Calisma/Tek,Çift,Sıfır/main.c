#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi[50],dv,sayac=0,i,tek=0,cift=0,sifir=0,j=0,t[10],c[10];
do{
printf("\nBir sayi giriniz:");
scanf("%d",&sayi[j]);
sayac++;
j++;
printf("devam etmek istiyormusunuz ? \n");
dv=getche();
}while(dv=='e' || dv=='E');
printf("\n%d adet sayi girdiniz.",sayac);
for(i=0;i<sayac;i++)
{
if(sayi[i]==0)
sifir++;
else if(sayi[i]%2==1)
tek++;
else if(sayi[i]%2==0)
cift++;
}
printf("\ntek sayi adedi: %d \ncift sayi adedi: %d \nsifir sayi adedi: %d",tek,cift,sifir);
printf("\ntek sayilar:");
for(i=0;i<sayac;i++)
{

if(sayi[i]%2==1)
printf("\n%d ",sayi[i]);

}
printf("\ncift sayilar:");
for(i=0;i<sayac;i++)
{

if(sayi[i]%2==0)
printf("\n%d",sayi[i]);
}
getch();
	return 0;
}
