#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

//strcat 字符串拼接
 
//插排
//void insertion_sort(int arr[], int len)
//{
//	int i, j, key;
//	for (i = 1; i < len; i++)
//	{
//		key = arr[i];
//		j = i - 1;
//		while ((j >= 0) && (arr[j] > key))
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	insertion_sort(arr, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}
// 十大经典排序算法
//https://www.runoob.com/w3cnote/ten-sorting-algorithm.html 

 
 
//操作符
//
//		算术操作符
//	除法操作符 得到商 取模得到余
//	int a=5/2；商2余1 得到2
//	double=5/2.0可以得到浮点数
//	取模左右两边操作数都应是整数
// 
// 
//		移位操作符（作用于整数）
//	左移操作符
//	左边抛弃 右边补零	有乘2效果
// 
//	右移操作符
//	右移一位有除2效果
// 1.算术右移（常见）
//	右边抛弃 左边补原符号位
// 2，逻辑右移
//	右边丢弃 左边补0
// 
//整数的二进制表示有：源码 反码 补码
//存储到内存的是补码
//正数三码相同
//10000000000000000000000000000001		——	-1	原码
//11111111111111111111111111111110		——	-1	反码
//11111111111111111111111111111111		——	-1	补码
//复数补码-1取反得原码（符号位不变）
//int main()
//{
//	int a = -4;
//	int b = a << 1;
//	printf("%d", b);
//	b = a >> 1;
//	printf("%d", b);
//}
//
//	   位操作符（作用于整数）
//	&	按位与
//	|	按位或
//	^	按位异或		相同为0 相异为1
//
//不创建临时变量交换变量的值
//int main()
//{
//	int a = 3, b = 5;
//	//加减法-----数据可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d", a, b);
//
//	//异或方法
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d", a, b);
//	//a^b得到一个新密码x	x^原b得原a / x^原a得原b
//	//执行效率不高 可读性不高
//}
//
//求二进制中数字1的个数
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//
//
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}*/
//
//
//	//优化			每次都把最右边的1消掉
//	int i = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//}
//
//	  赋值操作符	-可以连续赋值
//  a = x = y + 1;		即x=y+1;   a=x;
//	复合赋值操作符
// 略略略略略略
//
//
//		单目操作符	（只有一个操作数）
//	!		逻辑反		——真假互换  用于条件判断
//	-/+		负值/正值
//	&		取地址
//  sizeof  计算的是变量所占内存空间的大小 会计算\0 
//  ~		对一个数的二进制按位取反
//  --/++	前置：先++/-- 后使用
//  *		间接访问操作符（解引用操作符）
// （类型）	强制类型转换
//int main()
//{
//	int a = 10;
//	int* p = &a;	//p是指针变量
//	*p = 20;		//解引用操作符
//	printf("%p %d", p, a);
//}
//	数组类型: int arr[10];中 除去数组名即是数组类型
//		
// 关系操作符
// == < > 等 
// 略略略
//
//
//		逻辑操作符
//	&& 逻辑与	||	逻辑或
//	&& 逻辑与中左边出现0之后不再进行后面的计算
//  || 逻辑或中左边出现1之后不再进行后面的计算
//
//		条件操作符
//	exp1？exp2：exp3；
//
//
//		逗号表达式
//	exp1，exp2，exp3...expN；
//	从左到右依次执行 ，整个表达式的结果是最后一个表达式的结果
//
//
//		下标引用、函数调用和结构成员
//	1.[]下标引用
// 操作数：一个数组名+一个索引值
//	2.()函数调用操作符
// 接受一个或多个操作数：第一个操作数是函数名 其余操作数就是传递给函数的参数
//	3.访问一个结构的成员
// .		结构体.成员名			book1.name
// ->		结构体指针->成员名
//struct Stu	//这整行是一个类型（类似int）
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct Stu s1 = { "Louis" ,20};
//	struct Stu* ps = &s1;
//	printf("%s\n", s1.name);
//	printf("%s\n", (*ps).name);//	写法繁琐
//	printf("%s\n", ps->name);
//}




//				表达式
// 
// 
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}		只打印c 因为 a b 发生了隐式类型转换 
//		a=10110110；第一位做符号位 中间填0  b同理
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4		+c是个整型
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}
//
//		算术转换		
//某操作符的各个操作数属于不同类型是，要将一个操作数转换为另一个操作数的类型才能继续操作
//		long double
//		double
//		float
//		unsigned long int
//		long int
//		unsigned int
//		int
// 如果某操作数的类型排名较低，那么要转换为另一个操作数的类型后执行运算
//
//







//			指针
//	是个变量 存的是地址/内存编号
//	任何类型的指针都能存任意类型的相同地址。但是d
//	指针类型决定了指针进行解引用操作时能访问的空间的大小
//	int*p		*p能访问4个字节
//	char*p		*p能访问1个字节
//	double*p	*p能访问8个字节
//
//
//	指针+-整数
//	int* pa;	char* pb;
//	printf("%p%p/n",pa,pa+1);
//	两者差4
//	printf("%p%p/n",pb,pb+1);
//	两者差1
//	指针的类型决定指针加1向后跳几个字节----决定了指针的步长
//	
//	指针-指针
// 得到的是指针之间元素的个数
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}
//		指针与数组
// 允许指向数组元素的指针与指向数组最后一个元素后面的内存位置的指针比较
// 但不允许指向数组元素的指针与指向第一个元素之前的那个内存位置的指针比较
// 
// &数组名 取出的是整个数组的地址；
// &数组名+1 跳过整个数组的地址
// 
// 
//		二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//}
// int** 理解：最右边的*说明变量是个指针 前边的部分说明这个指针变量的类型
// 
//	*p=i;
//	p++;
//		*p++=i;
// 
// 
//		野指针
//   指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//	   成因：
//	1.指针未初始化，默认是随机值（与未初始化的局部变量类似）；
//	2.指针越界访问；
//	3.指针指向的内存空间释放； 
//	   规避：
//	1.初始化；
//	2.避免越界；
//	3.指针指向空间释放即使置NULL；
//	4.指针使用之前检查有效性；
//	NULL	------用于指针初始化
//	
//	
//			指针数组	-存放指针的数组
//int main()
//{
//	int a = 9, b = 3, c = 4;
//	int* arr[3] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr[i]);
//		printf("%d\n", *arr[i]);
//	}
//}
//	
//	
//	
//	

//malloc函数
//calloc函数
//realloc函数
//free函数





//		结构体
//struct name
//{
//	char name[20];
//};
//typedef struct name
//{
//	char name[20];
//}name;		将类型struct name重命名为name
//
//	结构体的成员可以是结构体
//
//	结构体成员访问
//	.成员
//	
//结构体传参
//typedef struct name
//{
//	char name[20];
//}name;	
//void print1(name tmp)
//{
//	printf("%s\n", tmp.name);
//}
//void print2(name* pn)
//{
//	printf("%s", pn->name);
//}
//int main()
//{
//	name n1 = { "zhang san" };
//	print1(n1); print2(&n1);
//}
//print2更优 因为不用开辟内存拷贝结构体
//函数传参的时候，参数需要进行压栈
//栈区		局部变量 函数的形参 函数调用也开辟空间 
// 堆区		动态内存分配
//  静态区	全局变量 静态变量
//数据结构：
// 线性数据结构：
//	 顺序表
//	 链表
//	 栈
//	 队列
// 树形数据结构：
//	 二叉树
// 图；
// 
// 栈只能从栈顶入，栈顶出；先进后出，后进先出
// 插入一个元素：压栈
// 删除一个元素：出栈		四舍五入约等于弹匣？
// 





//快排
//// 交换数组中两个元素的值
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//// 将数组划分为两个子数组，并返回划分点的位置
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];  // 选择数组中最后一个元素作为枢轴
//    int i = low - 1;
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//
//    swap(&arr[i + 1], &arr[high]);
//    return i + 1;
//}
//// 快速排序函数
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        // 划分数组，获取划分点位置
//        int pi = partition(arr, low, high);
//
//        // 分别对划分后的两个子数组进行排序
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//// 打印数组
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main() {
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("原始数组: \n");
//    printArray(arr, n);
//
//    // 进行快速排序
//    quickSort(arr, 0, n - 1);
//
//    printf("排序后的数组: \n");
//    printArray(arr, n);
//
//    return 0;
//}





//struct node
//{
//    int data;
//    struct node* next;
//};
//int main()
//{
//    struct node* head, * p, * q=NULL, * t;
//    int i, n, a;
//    scanf("%d", &n);
//    head = NULL;
//    for (i = 0; i < n; i++) 
//    {
//        p = (struct node*)malloc(sizeof(struct node));
//        scanf("%d", &a);
//        p->data = a;
//        p->next = NULL;
//        if (head == NULL)
//            head = p;
//        else
//            q->next = p;
//        q = p;
//    }
//    //输出链表
//    t = head;// i=1;int j;
//    scanf("%d", &j);
//    while (t != NULL) 
//    {
//        //if(i==j)
//        printf("%d ", t->data);
//        t = t->next;
//        i++;
//    }
//    return 0;
//}



//Debug.调试版本 具备调试信息 无优化
//Release.发布版本  优化过 无调试信息

//栈区的默认使用：
//先用高地址 后用低地址
//数组随着下标增长，地址由低到高变化		
//https://zhuanlan.zhihu.com/p/268061465

//for里定义循环变量是c艹的语法


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}					//六昏！
//
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}					//七昏！
//
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}					//只加断言：八昏！		加const：满昏！
//					//加const防止后续写代码带来不明显错误
//					//const指定的左值不能改
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}

//assert（表达式）	------表达式为真：	什么也不做；表达式为假：报错；

//多用const assert提高代码健壮度

//const int* p；
//const放在指针变量的*左边时 修饰对象是*p 不能通过p来改变*p的值 但p所指定的地址可以改变
// int* const p
//const放在*右边是 修饰对象是p 意味着p存的地址不能发生改变




//#include<stdio.h>
//#include<stdlib.h>
//typedef struct student {
//	int id;
//	int m, e, c;
//	int t;
//}stu;
//int flag=0;
//int Cmp(const void* a, const void* b)
//{
//	if (((struct student*)a)->t == ((struct student*)b)->t)
//		return ((struct student*)a)->id - ((struct student*)b)->id;
//	return ((struct student*)a)->t - ((struct student*)b)->t;
//}
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		stu* s; int i = 0;
//		s = (stu*)malloc(n * sizeof(stu));
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d%d%d%d", &s[i].id,&s[i].m,&s[i].e,&s[i].c);
//			s[i].t = s[i].m + s[i].e + s[i].c;
//		}
//		int max = s[0].t;int min= s[0].t;
//		for (i = 1; i < n; i++)
//		{
//			max = max > s[i].t ? max : s[i].t;
//			min = min < s[i].t ? min : s[i].t;
//		}
//		qsort(s, n, sizeof(struct student), Cmp);
//
//		if (flag)printf("\n");
//		printf("BEST\n");
//		for (i = 0; i < n; i++)
//		{
//			if (s[i].t == max)
//				printf("%d %d %d %d %d\n", s[i].id, s[i].t,s[i].m, s[i].e, s[i].c);
//		}
//		printf("WORST\n");
//		for (i = 0; i < n; i++)
//		{
//			if (s[i].t == min)
//				printf("%d %d %d %d %d\n", s[i].id, s[i].t,s[i].m, s[i].e, s[i].c);
//		}
//		flag++;
//	}
//}
////https://zhuanlan.zhihu.com/p/340689712
////https://blog.csdn.net/Cooler_z/article/details/122384559		qsort
////https://blog.csdn.net/TheWhiteFox/article/details/108502906   动态内存分配malloc
////1.参数
////qsort函数包含四个参数，分别是：
////1.数组名
////2.元素个数（从前往后计算）
////3.数组元素所占字节（int，double，char等所占字节）
////4.排序原则（递增，递减，奇偶交叉等）
////int cmp(const void* a, const void* b) {
////	return *(int*)a - *(int*)b;
////}
////qsort(num, n, sizeof(int), cmp);
////2.含义
////前三个大概没什么好说的，非常简单。主要介绍下第四个的排序原则。
////我们通过定义一个函数cmp，通过cmp返回的参数来确定排序规则，需要注意的是：cmp函数的参数需要以const void* a, const void* b的形式来定义，表示a和b的类型是未确定的，在return中进行强制类型转换为int型。* (int*)a - *(int*)b表示以递增顺序，若想以递减只需将a和b换位。


//指向函数的指针
//int (*p)();
//指针函数
//int* p();