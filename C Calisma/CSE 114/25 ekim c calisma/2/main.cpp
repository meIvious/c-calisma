#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j;
	for(i=0;i<10;i++){
		//printf 9 ..... i
		for(j=9;j>=i;j--)
		{
		if(j>=i)
		printf("%d",j);
		//else break;
		//printf("x");
	}
	//break;
		printf("\n");
		
	}
	return 0;
}
