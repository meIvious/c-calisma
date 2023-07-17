#include <iostream>
#include<string.h>
 
int main() {
   char kelime[5][20], gecici[20];
   int i, j;
 
   printf("\n5 farkli kelime giriniz : ");
   for (i = 0; i < 5; i++)
      scanf("%s", kelime[i]);
 
   for (i = 1; i < 5; i++) {
      for (j = 1; j < 5; j++) {
         if (strcmp(kelime[j - 1], kelime[j]) > 0) {
            strcpy(gecici, kelime[j - 1]);
            strcpy(kelime[j - 1], kelime[j]);
            strcpy(kelime[j], gecici);
         }
      }
   }
 
   printf("\nSiralanmis hali : ");
   for (i = 0; i < 5; i++)
      printf("\n%s", kelime[i]); 
}
