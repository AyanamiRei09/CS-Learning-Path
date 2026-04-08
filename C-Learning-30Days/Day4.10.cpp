#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[100];
	int n;
	
	printf("请输入待排序数字个数（最大为100）：\n");
	scanf("%d", &n);
	
	if(n <= 0 || n > 100){
		printf("输入非法！");
		return 0;
	}
	
	printf("请输入%d个数字：\n", n);
	for(int i = 0; i < n; i++ ){
		scanf("%d", &arr[i]);//别忘了&！！！	
	}

	//插入排序
	for(int i = 1; i < n; i++){//i=1  默认第0个元素已经有序
		
		int j = i-1;//不是i+1排序前面的数据
		int key = arr[i];
		
		while(j >= 0 && arr[j] > key){//arr[j] > key && j >= 0错误！！！！循序不能出错！！
			arr[j+1] = arr[j];//把大的写在前面表示数据往右移动
			j--;
		}
		
		arr[j+1] = key;//因为j多减了一次，出循环的判断条件是j<0，所以j要+1！！！

		printf("第%d轮：", i);
		for(int k = 0; k < n; k++){
		
			printf("%d ", arr[k]);
		}
		printf("\n");
	}
	
	printf("最终结果：\n");
	
	for(int k = 0; k < n; k++){
	
		printf("%d ", arr[k]);
	}
	
	return 0;
}