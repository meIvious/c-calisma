#include <iostream>
#include <math.h>
void print_digits(int n){
	if(n<10)
	printf("%d",n);
	else{
		print_digits(n/10);
		printf("%d",n%10);
	}
}
///////////////////////////////////////////
void print_digits_reverse(int n){
	if(n<10)
	printf("%d",n);
	else{
		printf("%d",n%10);
		print_digits_reverse(n/10);
	}
}
///////////////////////////////////////////
int log2(int n){
	// for example 32=(2*2*2*2)*2
	if(n==1)
	return 0;
	return 1 + log2(n/2);
}
///////////////////////////////////////////
int divide (int a,int b){
	if(a<b)
	return 0;
	return 1 + divide(a-b,b);
	//12/3= 1 +9/3
}
///////////////////////////////////////////
int appears(int *left,int *right,int o){
	printf("x\n");
	if(left==right)
	return (*left==o);
	return (*left==o) || appears(left + 1,right,o); //short circuit evaluation
}
///////////////////////////////////////////
int count_array(int *left,int *right,int o){
    if(left==right)
	return (*left==o);
	return (*left==o) +count_array(left + 1,right,o);
}
///////////////////////////////////////////
void print_array(int A[],int size){
	if(size==1)
	printf("%d",A[0]);
	else{
		printf("%d",A[0]);
		print_array(A+1,size - 1);
	}
}
///////////////////////////////////////////
void array_copy(int *dest,int *source,int size){
	if(size==1) *dest=*source;
	else{
		*dest=*source;
		array_copy(dest +1,source+1,size-1);
	}
}
///////////////////////////////////////////
void array_copy_reverse(int *dest,int *source,int size){
	if(size==1) *dest=*source;
	else{
		*(dest+size-1)=*source;
		array_copy(dest,source+1,size-1);
	}
}
int main(int argc, char** argv) {
	print_digits(123456);
	printf("\n");
	print_digits_reverse(123456);
	printf("\n");
	int n=32;
	printf("Log2(%d): %d.",n,log2(n));
	int a=12,b=3;
	printf("\n%d / %d: %d.\n",a,b,divide(a,b));
	int o=25,A[5]={25,10,20,25,25},B[5]={0};
	printf("%d\n",appears(A,A+4,o));////////try to solve the towers of hanoi problem
	printf("\n%d appears %d times in the array.\n",o,count_array(A,A+4,o));
	print_array(A,5); printf("\n");
	print_array(B,5); printf("\n");
	array_copy_reverse(B,A,5);
	print_array(A,5); printf("\n");
	print_array(B,5); printf("\n");
	return 0;
}
