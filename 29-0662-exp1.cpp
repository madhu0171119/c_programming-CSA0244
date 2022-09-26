#include<stdio.h>

int main(){
	int num,reverse=0,rem;
	char special[20]={'!','@','#','$','%'};
	
	
	
	printf ("enter the number: ");
	scanf("%d",&num);
	if(special){
		printf("invalid input\n");
	}
	do{
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
		
		}while(num!=0);
		printf("%d",reverse);
	
		
	return 0;
	
	}

	