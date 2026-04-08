#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int arr[5];
	
	for(int i = 0; i < 5; i++){
		
		scanf("%d", &arr[i]);//scanf里不要随便加空格！！！
	}
	
	for(int i = 0; i < 5; i++){
		
		printf("%d ", arr[i]);		
	}

	return 0;
}
