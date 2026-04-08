#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int score = 0;
	
	printf("请输入你的成绩：\n");
	scanf("%d", &score);
	
	printf("你的等级是：\n");
	if(score >= 90 && score <= 100){
		printf("A");
	}
	else if(score >= 80 && score <= 89){
		printf("B");
	}
	else if(score >= 70 && score <= 79){
		printf("C");
	}	
	else if(score >= 60 && score <= 69){
		printf("D");
	}	
	else if(score < 60){
		printf("F");
	}
	else{
		printf("输入不合法！\n");
	}	
	
	return 0;
}