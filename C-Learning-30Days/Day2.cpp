#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int age = 0;
	
	printf("请输入你的年龄：\n");
	scanf("%d", &age);
	
	if(age < 0){
		printf("输入不合法！");
	}
	else if(age >= 18){
		printf("你已经成年了！\n");
	}
	else{
		printf("你还未成年！\n");
	}
	
	return 0;
}
