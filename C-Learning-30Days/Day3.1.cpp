#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	for(int i = 1; i <= 100; i++){
		
		printf("%d\n", i);
	}
	
	return 0;
}
