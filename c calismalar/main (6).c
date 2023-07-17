#include <stdio.h>
char print_array(char A[],int size){
    for(int i=0;i<size;i++){
        printf("%c",A[i]);
        if(i==1) printf(" - ");
    }
}
void reverseWord(char *source, char *dest, int size){
    char *p=source ,  *q = dest ,*r=dest + size - 1;
    for(int i=0;i<2;i++){  
        *q=*p;
        q++;    //normal copy
        p++;
    }
    for(int i=2;i<size;i++){  
        *r=*p;
        r--;   // reverse copy
        p++;
    }
}
int main()
{
   char A[]="berkay";
   char B[50];
    reverseWord(A,B,6);
   print_array(B,6);
}
