#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi_adedi;
	int sayi;
	int pozitif=0;
	int negatif=0;
	int sifir=0;
	int i;
	printf("girilecek sayi adedini giriniz:");
	scanf("%d",&sayi_adedi);
	for(i=1;i<=sayi_adedi;i++){
		printf("tam sayi giriniz:");
		scanf("%d",&sayi);
		if(sayi>0){
			pozitif=pozitif+1;
		}
		else if(sayi==0){
			sifir=sifir+1;
		}
		else{
			negatif=negatif+1;
		}
	}
	printf("pozitif sayi adedi %d dir\n",pozitif);
	printf("negatif sayi adedi %d dir\n",negatif);
    printf("sifir adedi %d dir\n",sifir);
	getch();
	return 0;
}
