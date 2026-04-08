#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int sum = 0;
	
	for(int i = 1; i <= 100; i++){
		//if(i % 2 == 1){
		if(i % 2 != 0){//更专业，能够判断负数的奇偶
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\n%d", sum);
	
	return 0;
}