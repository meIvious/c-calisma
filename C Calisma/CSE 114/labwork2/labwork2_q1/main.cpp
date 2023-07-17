#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j,column=1,last=1;
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=column;j++){
			if(last==10)
			last=1;
			printf("%d",last);
			last++;
		}
		column=column*2;
		printf("\n");
	}
	return 0;
}

