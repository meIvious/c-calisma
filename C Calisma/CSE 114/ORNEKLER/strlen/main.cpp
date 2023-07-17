#include <iostream>
///// strlen(stringlength)
int string_length(char str[]){
	int i=0;
	while(str[i])
	i++;
	return i;
}
int string_length_w_pointers(char *p){
	char *q=p;
	while(*q)
	q++;
	return q-p;
}



int main(int argc, char** argv) {
	char str[50]="C course";
	char *p;
	p=str;
	printf("Length of \%s\ is: %d.\n Enter new: " ,str,string_length(str));
	scanf("%s",p);
	printf("Length of \%s\ is :%d.\n",str,string_length(str));
	///////////////////////////////////////////////////////////////////////
	printf("----------//////////////////without pointers////////////////////////////----------\n");
	printf("Length of \%s\ is: %d.\n Enter new: " ,str,string_length(str));
	scanf("%s",&str);
	printf("Length of \%s\ is :%d.\n",str,string_length(str));
	printf("----------//////////////////with_string_length_w_pointers////////////////////////////----------\n");
   ////////////////////////////////////////////////////////////////////////

	printf("Length of \%s\ is: %d.\n Enter new: " ,str,string_length(str));
	scanf("%s",str+1);
	printf("Length of \%s\ is :%d.\n",str,string_length(str));
	return 0;
}
