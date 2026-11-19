#include<stdio.h>
int main(){
	int n;
	int sum = 0; 
	printf("please input 5 numbers:\n");
	for(int i = 0;i<5;i++){
		scanf("%d",&n);
		if(n<0){
			continue;
		}
		else{
			sum += n;
		}
	} 
	printf("sum is :%d\n",sum);
	return 0;
} 
