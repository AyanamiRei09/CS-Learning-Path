//在顺序表L的第K个位置上插入元素x

bool Insert_x_Sqlist(Sqlist *L, k, x){
	
	
	if(k <= 0 || k > L -> length+1){//由于使用的是指针 L，应该通过 L->length 来引用 length，而不是直接使用 length。
		
	return false;
	}

	for(int i = L->length-1; i >= k-1; i--){
		
		L->data[i+1] =L->data[i];
	}
	
	L->data[k-1] = x;
	L->length ++;
	
	return true;		
}

