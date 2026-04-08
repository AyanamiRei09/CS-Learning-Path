#include <stdio.h>
#include <windows.h>

void Insertsort(int arr[], int n);
void Bubblesort(int arr[], int n);
void Selectsort(int arr[], int n);

int main(){
	SetConsoleOutputCP(CP_UTF8);

	int arr[100];
	int n;

	printf("你要输入几个数（上限100）：\n");
	scanf("%d", &n);
	
	if(n <= 0 || n > 100){
		
		printf("输入非法！！");
		return 0;
	}

	printf("请输入%d个数字：\n", n);
	for(int i = 0; i < n; i++){
		
		scanf("%d", &arr[i]);
	}
	
	int choice;
	printf("选择排序方式：1-插入 2-冒泡 3-选择\n");
	scanf("%d", &choice);

	if(choice == 1){
    	Insertsort(arr, n);
	}
	else if(choice == 2){
    	Bubblesort(arr, n);
	}
	else if(choice == 3){
    	Selectsort(arr, n);
	}
	else{
		printf("输入非法！！");
		return 0;
	}

	printf("\n最终排序结果：\n");
	for(int k = 0; k < n; k++){
		
		printf("%d ", arr[k]);
	}
	
	return 0;
}

//冒泡排序
void Bubblesort(int arr[], int n){
	
	for(int i = 0; i < n-1; i++){  //比 i < n更稳健
		
		for(int j = 0; j < n-1-i; j++){

			if(arr[j] > arr[j+1]){

				int tempt;
				tempt = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tempt;
			}
		}
	}
}
//选择排序，依次找后面最小的数，插入到最终位置。
void Selectsort(int arr[], int n){
    
    for(int i = 0; i < n-1; i++){
        
        int min = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
//插入排序，把当前元素，插入到前面“已经排好序”的序列中
void Insertsort(int arr[], int n){
	
	for(int i = 1; i < n; i++){

		int j = i-1;
		int key = arr[i];
		
		while(j >= 0 && arr[j] > key){

			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}