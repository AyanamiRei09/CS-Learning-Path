#include <stdio.h>
#include <windows.h>

#define Maxsize 50

typedef struct{
	
	int data[Maxsize];
	int length;
} Sqlist;



bool Del_min(Sqlist *L, int *min){
//在 C 语言中，结构体不能通过引用（&）传递。
//如果想修改 L，可以通过指针传递：Sqlist *L。
//同理，int &min 应该改成 int *min，以便修改 min。

	if(L->length == 0){
		
		return false;
	}
	
	*min = L->data[0];//min的值需要通过指针修改！
	int pos = 0;
	
	for(int i = 0; i < L->length; i++){
		
		if(L->data[i] < *min){
			
			*min = L->data[i];
			pos = i;
		}
	}
	
	L->data[pos] = L->data[L->length-1];
	L->length--;
	
	return true;
}

void Print(Sqlist L){
	
	for(int i = 0; i < L.length; i++){
		
		printf("%d ", L.data[i]);
	}
	printf("\n");
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	
	Sqlist L = {{9, 8, 5, 2, 1, 1}, 6};
	
	int min;
	if(Del_min(&L, &min)){//min要传参所以要加&
		printf("删除的最小值是：%d\n", min);
	}
	else{
		printf("顺序表为空，无法删除最小值。\n");
	}
	
	Print(L);
	
	return 0;
}
