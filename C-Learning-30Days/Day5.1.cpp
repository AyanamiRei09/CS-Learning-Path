#include <stdio.h>
#include <windows.h>

int Input(int arr[], int *n);
int Menu(int *choice);
int Sort(int arr[], int n, int choice);
void Output(int arr[], int n);

void BubbleSort(int arr[], int n);
void SelectSort(int arr[], int n);
void InsertSort(int arr[], int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int n = 0;
	int arr[100];
	int choice;
	
	if(Input(arr, &n) != 1){
		return 0;
	}
	
	if(Menu(&choice) != 1){
		
		return 0;
	}
	
	if(Sort(arr, n, choice) != 1){
		return 0;
	}
	
	Output(arr, n);
	
	
	return 0;
}

int Input(int arr[], int *n){
	
	printf("请输入待排序数字个数（最大个数为100）：\n");
	scanf("%d", n);//函数声明中int *n，n已经是指针变量，scanf中不能传入&n，那就变成了指针的地址了！！！！
	
	if(*n <= 0 || *n > 100){
		
		printf("输入非法！！");
		return 0;
	}
	
	//输入待排序数组。
	printf("请输入待排数组：\n");
	for(int i = 0; i < *n; i++){
		
		scanf("%d", &arr[i]);
	}
	return 1;
}

int Menu(int *choice){
	
	printf("请选择排序方式：\n");
	printf("1-BubbleSort\n2-SelectSort\n3-InsertSort\n");
	scanf("%d", choice);//同样，不能使用&choice！！！
	if(choice == 1 || choice == 2 || choice == 3){
		return 1;
	}
	else{
		return 0;
	}
}

int Sort(int arr[], int n, int choice){
	
	if(choice == 1){
		
		BubbleSort(arr, n);
		return 1;//函数return不是程序结束，而是返回主函数！！
	}
	else if(choice == 2){
		
		SelectSort(arr, n);
		return 1;
	}
	else if(choice == 3){
		
		InsertSort(arr, n);
		return 1;
	}
	else{
		
		printf("输入非法！");
		return 0;
	}
}

void Output(int arr[], int n){
	
	for(int i = 0; i < n; i++){
		
		printf("%d ", arr[i]);
	}
}

void BubbleSort(int arr[], int n){
	
	for(int i = 0; i < n-1; i++){
		
		for(int j = 0; j < n-i-1; j++){
			
			if(arr[j] > arr[j+1]){
			
			int temp = 0;
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;	
			}
		}
	}
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

void InsertSort(int arr[], int n){
	
	for(int i = 1; i < n; i++){
		
		int temp = arr[i];
		int j = i - 1;
			
		while(j >= 0 && temp < arr[j]){
			arr[j+1] = arr[j];
			j--;//循环结束时j不在有效位置
		}
		
		arr[j+1] = temp;
	}
}
