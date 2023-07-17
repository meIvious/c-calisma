#include <stdio.h>
void print_array(char A[],int size){
    if(size==1) {printf("%c",A[0]);}
    else{
        printf("%c",A[0]);
        print_array(A + 1 , size - 1);
    }
}
void reverse_copy(char *source , char *dest){
    char *p=source , *q=dest;
    while(*q){q++;}q--;
    while(*p){
        *q=*p;
        p++;
        q--;
    }
}
int main()
{
   char test[]="berkay";
   char dest[50];
   reverse_copy(test,dest);
   print_array(dest,6);
}
