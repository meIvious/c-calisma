#include <stdio.h>

int main()
{
   int diziboyutu;
   printf("Lütfen Dizi Boyutunu Giriniz \n");
   scanf("%d",&diziboyutu);
   printf(" Dizi Boyutu = %d\n",diziboyutu);
   int dizi[diziboyutu];

   for(int i=0; i<diziboyutu; i++)
   {
       printf("Lütfen Siradaki Dizi Elemanini Giriniz\n");
       scanf("%d",&dizi[i]);
   }

   for(int i=0; i<diziboyutu; i++)
   {
       printf(" %d",dizi[i]);
      
   }
   
   return diziboyutu;
}