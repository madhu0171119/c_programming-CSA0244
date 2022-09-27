#include<stdio.h>
int main(){
	int d,m,i,j=1;
	float y;
	while(j==1){
		printf("enter date/month/year: ");
		scanf("%d/%d/%f",&d,&m,&y);
		i==y;
		if(d>0 && d<32 && y>0 && i==y && m>0 && m<13){
			if(i%4==0){
				printf("its leap year");
			}else {
				printf("its not a leap year");
				
			}
		}else{
			printf("invalid ");
		}
		printf("\n do you want ;1/0:");
		scanf("%d",&j);
		
		
		
	}
	return 0;
}