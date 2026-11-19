#include<stdio.h>
int fun_max(int * arr,int len){
	int * max_val = &arr[0];
	for(int i= 0;i<len;i++){
		if(arr[i]> *max_val){
			max_val = &arr[i]; 
		}
	}
	return *max_val;
}
int main(){
	int arr[] = {2,5,7,4,9,3};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("the max is : %d",fun_max(arr,len));
}
