#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	int flag = 0;
	
	for(int i = 1; i <= 100; i++){
//		if(i % 2 == 0){
//			if(flag < i){
//				flag = i;
//			}
//		}
		if(i % 2 == 0 && flag < i){
			flag = i;
		}
	}
	printf("%d", flag);
	
	return 0;
}