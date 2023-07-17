#include <iostream>
//strcomp (string compare)

int string_compare(char *p,char*q){
	int diff;
	while(*p && *q){
		diff=*p-*q;
		if(diff)
		return diff;
		p++;
		q++;
	}
}

int main(int argc, char** argv) {
	char str1[50] = "Ali";
	char str2[50] = "Ali";
    const char *str3 = "Ahmet";
    char *str4=str1;
    printf("\n%d %d\n",str1,str2);
    if(str1==str2)    
    printf("Same\n");
    else
    printf("Not Same\n");
    if(str1==str4)    
    printf("Same\n");
    else
    printf("Not Same\n");
	return 0;
}
