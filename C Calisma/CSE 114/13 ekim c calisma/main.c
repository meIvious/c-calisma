#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=15; 
	int y=10;
	int z=20;
	if (x)
	printf("Yes \n");
	else
	printf("NO \n");	
	if(y>0)
	if(z>0)
	x=5;
	else 
	x=-5;
	if (y>0)
    if(z>0)	
    x=5;
    else 
    x=-5;
    printf("x:%d\n",x);
	return 0;
}
