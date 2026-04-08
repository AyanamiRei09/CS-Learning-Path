#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int sum = 0;
	int count = 0;
	int arr[10];
	float avg = 0;
	
	printf("输入个数（最多十个）：\n");
	scanf("%d", &count);
	
	if(count < 0 || count > 10){//避免用户输入超出数组范围
		
		printf("非法输入！");
		return 0;
	}
	
	printf("输入具体数值：\n");
	for(int i = 0; i < count; i++){
		
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	avg = (float)sum / count;//C语言中没有float()函数
	printf("平均数为：%.2f\n", avg);//数据类型要对齐
	
	return 0;
}