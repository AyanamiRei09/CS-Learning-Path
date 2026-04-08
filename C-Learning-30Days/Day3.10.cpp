#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	for(int i = 1; i <= 9; i++){
		
		for(int j = 1; j <= i; j++){
			
			printf("%d * %d = %-3d", i, j, i*j);//%-3d表示占三个字符，左对齐
		}
		printf("\n");
	}

	return 0;
}