#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int i = 1;
	int sum = 0;
	
	while(i <= 100){
		printf("%d ", i);
		sum += i;
		i++;
	}
	printf("\n");
	printf("%d", sum);
	
	return 0;
}