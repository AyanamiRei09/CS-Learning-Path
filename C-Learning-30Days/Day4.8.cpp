#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[] = {4, 5, 9, 3, 5};
	int tempt;
	int min;
	int n = 5;
	
	for(int i = 0; i < n-1; i++){
		
		min = i;
		
		for(int j = i+1; j < n; j++){
			
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		
		tempt = arr[i];
		arr[i] = arr[min];
		arr[min] = tempt;
		
		printf("第%d轮：", i+1);
		for(int k = 0; k < n; k++){
			printf("%d ", arr[k]);
		}
		printf("\n");		
	}
	
	return 0;
}