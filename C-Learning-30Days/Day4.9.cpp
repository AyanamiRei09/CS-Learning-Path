#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int tempt;
	int n = 5;
	int arr[] = {5, 4, 9, 3, 5};
	int max;
	
	for(int i = 0; i < n-1; i++){
		
		max = i;
		
		for(int j = i+1; j < n; j++){//j = i+1 可以避免自己和自己比较消除一次没有意义的比较。
			
			if(arr[j] > arr[max]){
				
				max = j;
			}
		}
		
		tempt = arr[max];
		arr[max] = arr[i];
		arr[i] = tempt;
	}
	
	for(int i = 0; i < n; i++){//外层有i，建议这里变量用K
		
		printf("%d ", arr[i]);
	}
	
	return 0;
}