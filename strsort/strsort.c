#include <stdio.h>

/* 引用此头文件中的 strcmp函数进行字符串的比较操作。*/
#include <string.h>

/* 定义一个常量，代表字符串的个数。
 因为字符串个数和程序中多个地方相关，在此处统一定义，
 那么如果字符串的个数需要修改时，则只需要修改此处的数值，
 那么程序中其引用到此常量的地方都会被自动修改成此数据，
 因此可以方便修改（只需要修改一次），
并且不容易出错(多次修改同一个值有可能改错其中的一个或几个)。
*/
#define STR_NUM 3

/* 字符串的最大长度，包括结尾的\0字符 */
#define MAX_STR_LEN 10

int main(){

	/* 定义二维字符串数组，为存储读入的字符分配空间 */
	char a[STR_NUM][MAX_STR_LEN];

	/*
	因a是二维数组，a[i]代表的还是一个数组，所以不能直接进行 a[0] = a[1]之类的操作。
	所以要定义一个指针数组来进行排序中的交换数组元素的操作。
	*/
	char *ps[STR_NUM];
	char *temp; /* 元素交换操作用的字符指针 */
	int i=0,j=0;

	// 读入字符串，并将
	for(i=0;i<STR_NUM;i++){
		ps[i]=a[i]; // 用字符数组的首地址初始化每个ps数组元素
		scanf("%s", ps[i]);
	}

	/* 交换排序字符串 */
	for(i=0;i<STR_NUM;i++){
		for(j=i+1;j<STR_NUM;j++){
			if(strcmp(ps[i], ps[j]) > 0){
				temp = ps[i];
				ps[i]=ps[j];
				ps[j]=temp;
			}
		}
	}

	/* 输出排序结果 */
	for(i=0;i<STR_NUM;i++)
		printf("%s\n", ps[i]);

	return 0;
}
