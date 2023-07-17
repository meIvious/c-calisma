#include <stdio.h>

int squarred_diff1(int x,int y) {
	return (x*x)-(y*y);
}

int squarred_diff2(int x,int y2) {
	return (x-y2)*(x+y2);
}

int main() {
	int x;
    int y;

    int y2;
    int y3;
	printf("Enter x1: ");

	scanf("%d", &x);
	
	printf("\n");

	printf("Enter y1: ");

	scanf("%d", &y);
	
	int result = squarred_diff1(x,y);
	
	if(result<0)
	result=result*-(1);
	
	printf("\n");
	
	printf("the result is: %d\n", result);
	
	if(result<20)
	
	printf("the result is smaller than 20,enter another y value!");
	
	printf("\n");
	
	printf("\n");
	
	printf("Enter y2: ");

	scanf("%d", &y3);
	


	int result3 = squarred_diff1(x,y);
	printf("\n");
	
	if(result3<0)
	result3=result3*-(1);
	
	printf("the result is diff1_2: %d\n", result3);

	
	int result2 = squarred_diff2(x,y3);
	
	if(result2<0)
	result2=result2*-(1);

	printf("\n");
	
	printf("the result of diff2 is : %d\n", result2);
	
	if(result3==result2)
	printf("\nSAME");
	else
	printf("\nDIFFERENT");
	

	return 0;
}
