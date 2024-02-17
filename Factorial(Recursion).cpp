#include<stdio.h>

long int fact(int n){
	if(n>=1){
		return n*fact(n-1);
	}
	else{
		return 1;
	}	
}
int main(){
	int num;
	printf("Enter the number for factorial :");
	scanf("%d",&num);
	printf("Factorial = %ld",fact(num));
}
