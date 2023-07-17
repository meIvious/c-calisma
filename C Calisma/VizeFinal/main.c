#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vize,final;
    float ort;
 
  printf("\n Vize notunu giriniz : ");
  scanf("%d",&vize);
  printf("\n Final notunu giriniz :");
  scanf("%d",&final);
 
  ort=(vize*0.4)+(final*0.6);
 
  printf("\n Sinav notun : %2.2f",ort);
  printf("\n\n\n --GECME KALMA DURUMU--");
  if(ort>=50){
  	  printf("\n TEBRIKLER GECTINIZ");
  }
 else{
 	  printf("\n MAALESEF KALDINIZ");
 }
 
  
  getchar();
	return 0;
}
