#include <stdio.h>
void recursive_print_array(int A[],int size){
    if(size==1){
        printf("%d",A[0]);
    }
    else{
        printf("%d ",A[0]);
        recursive_print_array(A + 1 , size - 1);
    }
}
void f(int *source,int *dest){
    int *p=source , *q=dest;
    while(*p){
        *q=*p + *(p + 1);
        p+=2;
        q++;
    }
}
int main()
{
    int A[]={10,5,4,14,30,1,1,16,23,17};
    int B[5];
    f(A,B);
    recursive_print_array(B,5);
}
