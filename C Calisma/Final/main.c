
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i,sayi;
   float n,toplam,ortalama;
    
    printf("Lutfen kisi miktarini giriniz : ");  
      scanf("%f",&n); 
     
     toplam = 0;
     
      for (i=1; i<=n; i++ )
      {
      printf("%d. final notunu giriniz :",i);
      scanf("%d",&sayi);
      
      toplam = toplam + sayi;
      }
      ortalama = toplam /n;
      printf("\n       --SONUC--");
      printf("\n\nGirilen sayilarin aritmetik ortalamasi: %f dir.", ortalama);
           
    getch();
	return 0;
}

