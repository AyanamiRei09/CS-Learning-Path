#include <stdio.h>
#include <windows.h>

void change1(int x);//x是x的值
void change2(int *x);//*x是x的地址

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int a = 10;
	
	change1(a);
	printf("change1:%d\n", a);//change1是值传递并不改变变量的值。
	
	change2(&a);
	printf("cahnge2:%d\n", a);//change2是指针传递，可以改变值

	return 0;
}

void change1(int x){
	x = 100;
}

void change2(int *x){
	
	*x = 100;
}
