#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int flag = 0;
	
	for(int i = 1; i <= 100; i++){
		if(flag < i){
			flag = i;
		}	
	}
	printf("%d", flag);
	
	return 0;
}