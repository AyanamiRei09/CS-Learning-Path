#include <stdio.h>
#include <windows.h>

void SelectSort(int arr[], int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int n;
	int arr[100];
	
	printf("请输入待排序数字个数（最大个数为100）：\n");
	scanf("%d", &n);
	if(n < 0 || n > 100){
		
		printf("输入非法！！");
	}
	
	//输入待排序数组。
	printf("请输入待排数组：\n");
	for(int i = 0; i < n; i++){
		
		scanf("%d", &arr[i]);
	}
	
	SelectSort(arr, n);
	printf("\n");
		
	//输出已排序数组
	printf("最终结果：");
	for(int i = 0; i < n; i++){
		
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void SelectSort(int arr[], int n){
	
	for(int i = 0; i < n; i++){
		
		int Min = i;
		int temp = 0;
		
		for(int j = i+1; j < n; j++){
			
			if(arr[j] < arr[Min]){
				
				Min = j;
			}
		}
		
		temp = arr[Min];
		arr[Min] = arr[i];
		arr[i] = temp;
	}
}