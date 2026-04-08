#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[5];
	int i = 0;
	//int max = 0;如果数组全是负数，最终结果是0，错误！！！应该：假设第一个是最大 → 再不断比较更新
	int max = arr[0];
	
	for(i = 0; i < 5; i++){
		
		scanf("%d ", &arr[i]);
	}
	for(i = 0; i < 5; i++){
		
		if(	max < arr[i]){

		max = arr[i];		
		}
	}
	
	printf("%d", max);

	return 0;
}
