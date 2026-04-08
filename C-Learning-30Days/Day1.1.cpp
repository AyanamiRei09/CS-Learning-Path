#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);  // 设置控制台输出编码为 UTF-8
	
	int age;
	char name[20];
	
	printf("请输入你的名字：\n");
	scanf("%s", name);
	printf("请输入你的年龄：\n");
	scanf("%d", &age);
	
	printf("My name is %s, I am %d years old", name, age);
	
	return 0;
}