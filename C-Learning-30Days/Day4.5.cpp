#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[] = {4, 9, 75, 44, 28};
	int tempt;
	int n = 5;
	int swapped = 0;//标志位
	
	for(int i = 0; i < n-1; i++){
		
		swapped = 0;//每轮循环开始都清零
		for(int j = 0; j < n-1-i; j++){
			
			if(arr[j] > arr[j+1]){
				
				tempt = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tempt;
				swapped = 1;//发生交换就置一
			}
		}
		
		if(swapped == 0){
			break;//当没有发生交换时跳出循环
		}	
	}
	
	for(int i = 0; i <= n-1; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}