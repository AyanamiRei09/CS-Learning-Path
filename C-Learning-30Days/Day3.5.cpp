#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int sum = 0;
	
	for(int i = 1; i <= 100; i++){
		if(i % 3 == 0){
			sum += i;
		}
	}
	printf("%d", sum);
	
	return 0;
}