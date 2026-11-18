#include<stdio.h>
int total(int * arr,int len ){
	int sum = 0;
	int * p = arr;
	int i;
	for( i = 0;i<len;i++){
		sum += *(p+i);
		//*(p+i) = arr[i],if *p=arr
		
	}
	return sum;
}
int main(){
	int arr[5] = {1,2,3,5,6};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("the total is :%d",total(arr,len));
	
}
