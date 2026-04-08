#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	for(int i = 2; i <= 100; i += 2){
		
		printf("%d\n", i);
	}
	
	return 0;
}
