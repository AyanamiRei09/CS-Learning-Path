#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int score = 0;
	char grade;
	printf("请输入你的成绩：\n");
	scanf("%d", &score);
	
	if(score < 0 || score > 100){
		printf("输入不合法！");
		return 0;
	}
	else if(score >= 90){
		grade = 'A';
	}
	else if(score >= 80){
		grade = 'B';
	}	
	else if(score >= 70){
		grade = 'C';
	}	
	else if(score >= 60){
		grade = 'D';
	}	
	else{
		grade = 'F';
	}	
	
	printf("你的成绩是%d, 你的等级是%c\n", score, grade);
	
	return 0;
}