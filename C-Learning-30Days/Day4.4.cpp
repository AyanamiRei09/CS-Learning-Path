#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[] = {1, 5, 86, 45, 7};
	int n = 5;
	int tempt;
	
	for(int i = 0; i < n-1; i++){
		
		for(int j = 0; j < n-1-i; j++){
			
			if(arr[j] > arr[j+1]){
				
				tempt = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tempt;
			}
			for(int i = 0; i <= n-1; i++){
				printf("%d ", arr[i]);
			}
			printf("\n");	
		}	
	}
	
	return 0;
}