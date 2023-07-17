#include <iostream>
// strcpy (string copy)

void string_copy(char *dest,char *source){
	while(*source!=0){
		//dest[0]=soruce[0];
		*dest++ = *source++;
	}
	*dest;
}

int main(int argc, char** argv) {
	char str1[50]="Ali";
	char str2[50]="Ali";
	const char *str3="Ahmet";
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
