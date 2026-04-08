//任务一：
#include <stdio.h>
#include <windows.h>

void swap(int *a, int *b);

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int x = 3;
	int y = 5;
	
	swap(&x, &y);
	
	printf("x = %d y = %d", x, y);
	

	return 0;
}

void swap(int *a, int *b){
	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}