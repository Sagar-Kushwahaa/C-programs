#include<stdio.h>
int fibo(int n){
	if(n<=1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}


int main(){
	int num,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%d ",fibo(i));
	}
	
}
