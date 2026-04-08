#define Maxsize 100  //注意：定义后面没有分号;！！


//顺序表结构体
struct Sqlist{
	
	int data[Maxsize];//定义数据类型
	int length;//表示现在表长
	
};//结构体后面加；！！

//结构体初始化方式1：
struct Sqlist L;//创建一个结构体L
	L.data[0] = 5;
	L.data[1] = 7;
	L.data[2] = 3;
	L.length = 3;//length也要初始化。
	
//结构体初始化2：
struct Sqlist L = {{5, 7, 3}, 3};//千面{}中是数组，后面是长度

//typedef
typedef struct Sqlist Sqlist;//
	Sqlist L;//和 int i;做对照。
	
	
//综合结构体：
typedef struct Sqlist{//这里的Sqlist可以省略
	
	int data[Maxsize];
	int length;
} Sqlist;


//遍历顺序表并打印所有元素；
void func(Sqlist L){
	
	for(int i = 0; i < length; i++){
		
		printf("%d ", L.data[i]);
	}
}





	