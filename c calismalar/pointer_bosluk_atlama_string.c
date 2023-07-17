#include <stdio.h>
void print_array(char A[],int size){
    for(int i=0;i<size;i++){
        printf("%c",A[i]);
    }
}
void str_cpy(char *source, char *dest){
    char *p=source , *q=dest;
    while(*p){
        while(*p==' ') p++;
        *q=*p;
        p++;
        q++;
    }
}
int main()
{
char A[]="b er   k  a  y";
char B[50];
    str_cpy(A,B);
    print_array(B,8);
}
