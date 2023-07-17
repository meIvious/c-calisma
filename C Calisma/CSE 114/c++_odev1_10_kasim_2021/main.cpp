#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printLine(int a,int b) {
    if(a==2){
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);

}
   else if (a==3){

	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
}
    else if(a==4){
	
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
}
	else if(a==5){
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
	printf("\n%d   %d",a,b);
    printf("\n%d   %d",a,b); 

}
}

void printTriangle(int x){
    if(x%2==0){
	printf("%d",x);
	printf(" %d",x);
	printf(" %d",x);
	printf("\n");
	printf(" %d",x);
	printf(" %d",x);
	printf("\n");
	printf("  %d",x);
}
	else {
	printf("  %d",x);
	printf("\n");
	printf(" %d",x);
	printf(" %d ",x);
	printf("\n");
	printf("%d",x);
	printf(" %d ",x);
	printf("%d",x);
	}
}

int main(int argc, char** argv) {
	int a,b,x;
	printf("Please enter two values for printLine:");
	scanf("%d%d",&a,&b);
	printf("\n");
	printf("Please enter x for printTriangle:");
	scanf("%d",&x);
    printLine(a,b);
    printf("\n");
    printTriangle(x);

return 0;
}

 




