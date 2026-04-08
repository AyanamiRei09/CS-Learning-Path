//任务二：
#include <stdio.h>
#include <windows.h>

void scanf_arr(int arr[], int n);
int* Find_max(int arr[], int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int arr[100];
	int n = 0;

    printf("请输入数组大小：");
	scanf("%d", &n);
	
    printf("请输入数组元素：");
    scanf_arr(arr, n);
		
	int* max= Find_max(arr, n);
	printf("最大值是：%d\n", *max);
	
	return 0;
}

int* Find_max(int arr[], int n){
	
	int* max = &arr[0];  // 将 max 初始化为数组第一个元素的地址	
	
	for(int i = 0; i < n; i++){
		
		if(arr[i] > *max){
			
			max = &arr[i]; // 更新 max 为更大的元素的地址
		}
	}
	return max; // 返回指向最大值的地址
}

void scanf_arr(int arr[], int n){
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &arr[i]);
	}
}