#include <stdio.h>
void print_array(char A[],int size){
    for(int i=0;i<size;i++){
        printf("%c",A[i]);
    }
}
void f(char *source,char *end,char *dest){
    char *p=source , *q=end - 1;  //while(*q){q++;}q--;
if(*p){
    p++;
    while(p<q){
        *dest=*p;
        p++;
        dest++;
    }
}
}

int main()
{
  char A[]="pqrtscd";
  char B[50];
f(A,A + 7,B);  // f(A,A,B)
print_array(B,5);
}
