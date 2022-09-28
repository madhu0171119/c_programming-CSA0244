#include<stdio.h>
int main(){
	int *p;
	int *q;
	int first,second,sum;
	printf("enter two integers to add\n");
	scanf("%d\n%d",&first,&second);
	p=&first;
	q=&second;
	sum=*p+*q;
	printf("sum=%d",sum);
	return 0;
}