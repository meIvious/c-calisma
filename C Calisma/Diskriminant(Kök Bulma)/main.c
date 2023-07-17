#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h,i;
	printf("Kok Bulma \n");
	printf("x karenin katsayisini giriniz:");
	scanf("%d",&a);
	printf("x in katsayisini giriniz:");
	scanf("%d",&b);
	printf("sabit sayiyi giriniz:");
	scanf("%d",&c);
	d=b*b-4*a*c;
	e=-b-d^1/2;
	g=-b+d^1/2;
	f=e/2*a;
	h=g/2*a;
	if(d<0)
	{
		printf("Delta sifirdan kucuk oldugu icin reel koku yoktur.");
		
	}
	else {
		printf("x1=%d,x2=%d",f,h);
	}
	getch();

}
