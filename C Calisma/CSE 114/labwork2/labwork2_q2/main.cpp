#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int limit,number;
	int positives=0,negatives=0,zeros=0;
	printf("Enter the limit:");
	scanf("%d",&limit);
	while(limit){
		printf("Enter the number:");
		scanf("%d",&number);
		
		if(number<0){
			negatives++;
		}
		else if(number>0){
			positives++;
		}
		else if(number==0){
			zeros++;
		}
		
		limit--;
	}
	printf("\n");
	
	printf("positive numbers: %d",positives);
	printf("\n");
	printf("negative numbers: %d",negatives);
	printf("\n");
	printf("zero numbers: %d",zeros);
	
	return 0;
}
