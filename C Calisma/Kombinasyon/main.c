#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char metin[100];
    char karakter;
    int i,esle=0;

    puts("Bir Metin Giriniz (Ornek : merhaba dunya)  :");
    gets(metin);

    puts("Bir Karakter Giriniz (Ornek a,b,c vb...) :");
    scanf("%c",&karakter);

    for (i=0;metin[i]!='';i++)
    {
        if(metin[i]==karakter)
            esle++;
    }

      printf("%c karakteri %d kere kullanilmistir",karakter,esle);

      printf("sonlandirmak icin enter tusuna basiniz");

      fflush(stdin);//system girdi parametlerinin bosaltilmasi..
      getchar();//ekrandan deger girilene kadar beklenir..
      return 0;
}
