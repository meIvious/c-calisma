#include <stdio.h>
int max_of_array(int A[],int size){
    if(size==1) return A[0];
     int max_of_rest = max_of_array(A + 1 , size - 1);
    if(A[0] > max_of_rest)  return A[0];
     return max_of_rest;
}
int main()
{
    int A[]={1,2,3,4,56,65,77,0};

    printf("%d",max_of_array(A,8));
}
