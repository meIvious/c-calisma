#include <stdio.h>
void recursive_print( int A[],int size){
    if(size==1) printf("%d",A[0]);
    else{
        printf("%d ",A[0]);
        recursive_print(A + 1 , size - 1);
    }
}
void topla_kopyala(int source[],int dest[],int size){
    if(size==1) dest[0]=source[0];
    if(size==2) dest[0]=source[0] + source[1];
    else {
        dest[0]=source[0];
        dest[0]=source[0] + source[1];
        topla_kopyala(source + 2 , dest + 1,size - 1);
    }
}
int main(){
   int test[]={1,2,3,4,5,6};
    int c[3];
   topla_kopyala(test,c,4);
    recursive_print(c,3);
}
