#include <stdio.h>
void print_array(char A[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("%c ",A[i]);
    }
}

void reverse_copy(char *source, char *dest, int size){
    char *p=source ,  *q = dest + size -1;
    for(int i=0;i<size;i++){   /*while(q>=dest)*/
        *q=*p;
        q--;
        p++;
    }
}
int main()
{
    char A[]="berkay";
    char B[6];
    reverse_copy(A,B,6);
    print_array(B,6);
}
