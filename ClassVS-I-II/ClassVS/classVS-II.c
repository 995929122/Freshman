#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include <string.h>
#include<math.h>
#include <time.h>
#include<Stdbool.h>
#include <stdlib.h>
#include<ctype.h>
#include<Windows.h>
//https://cplusplus.com/
//https://en.cppreference.com/w/

//1.函数是什么
//2.库函数
//3.自定义函数
//4.函数参数
//5.函数调用
//6.函数的嵌套调用和链式访问
//7.函数的声明和定义
//8.函数递归

//常用库函数
//	I0函数
//	字符串操作函数
//	字符操作函数
//	内存操作函数
//	时间 / 日期函数
//	数学函数
//	其他库函数


//strcpy
//char* strcpy(char* destination， const char* source);
//
//memset
//void* memset(void* ptr, int value, size_t num);
//https://blog.csdn.net/okawari_richi/article/details/57411796


//int main()
//{
//	char str[] = "hello world";
//	memset(str, '*', 15);
//	printf("%s\n", str);
//	//***** world 没有复制\0		
//	// 源字符串比目标字符串长的时候会导致溢出	eg：把5改大就会报错 比如改成15 输出是：***************烫烫烫烫烫烫烫烫烫烫烫烫???
//
//	return 0;
//}


//自定义函数的格式
//ret_type fun_name(paral,*)
//	{
//	statement;//语句项
//	}
//	ret_type		返回类型
//	fun_name		函数名
//	paral		函数参数



//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}		//这个程序无法实现交换功能 只变了形参xy 没有改变ab  （形参和实参的地址不一样）
//void Swap2(int* pa, int* pb)//定义指针变量
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;					//解引用
//	*pb = tmp;
//
//}
//int main()				
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	//
//	printf(" a=%d b=%d\n", a,b);
//	//Swap1(a,b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a=b;
//	b = tmp;*/
//	printf(" a=%d b=%d\n", a,b);
//	return 0;
//}
//函数的参数
//实际参数(实参) :
//	真实传给函数的参数, 叫实参。实参可以是 : 常量、变量、表达式、函数等。无论实参是何种类
//	型的量, 在进行函数调用时，它们都必须有确定的值, 以便把这些值传送给形参。
//形式参数(形参) :
//	形式参数是指函数名后括号中的变量, 因为形式参数只有在函数被调用的过程中才实例化(分配内存单元), 
//	所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。
//.上面Swap1和Swap2函数中的参数x，y, px， py都是形式参数。在main函数中传给Swap1的num1,
//num2和传给Swap2函数的& num1, & num2是实际参数。
//实参传给形参时
//形参是实参的临时拷贝，对形参的修改不会影响实参
//Swap1——传值调用
//Swap2——传指调用
/*传值调用
函数的形参和实参分别占有不同内存块, 对形参的修改不会影响实参。
传址调用
●传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
●这种传参方式可以让函数和函数外边的变量建立起正真的联系, 也就是函数内部可以直接操
作函数外部的变量*/


//函数可以嵌套调用和链式访问
//链式访问：把一个函数的返回值作为另一个函数的参数
//printf("%d\n", strlen("abc"));这就是一种链式访问



//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("Name\t Counter\n");
//	printf("----------------\n");
//	printf("John\t%8d\n",a);
//	printf("Sally\t%8d\n",b);
//	printf("Tom\t%8d\n",c);
//	printf("----------------\n");
//	printf("Total\t%8d",a+b+c);
//}
//https://blog.csdn.net/u012142460/article/details/94733824



//哈希表
//https://zhuanlan.zhihu.com/p/144296454


//力扣第九题  整数转换成字符串进行解题的尝试（失败）
//bool isPalindrome(int x) {
//    
//    //char* itoa(int num, char* str, int radix)
//    //{
//    //    char index[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
//    //    unsigned unum;//存放要转换的整数的绝对值,转换的整数可能是负数
//    //    int i = 0, j, k;//i用来指示设置字符串相应位，转换之后i其实就是字符串的长度；转换后顺序是逆序的，有正负的情况，k用来指示调整顺序的开始位置;j用来指示调整顺序时的交换。
//
//    //    //获取要转换的整数的绝对值
//    //    if (radix == 10 && num < 0)//要转换成十进制数并且是负数
//    //    {
//    //        unum = (unsigned)-num;//将num的绝对值赋给unum
//    //        str[i++] = '-';//在字符串最前面设置为'-'号，并且索引加1
//    //    }
//    //    else unum = (unsigned)num;//若是num为正，直接赋值给unum
//
//    //    //转换部分，注意转换后是逆序的
//    //    do
//    //    {
//    //        str[i++] = index[unum % (unsigned)radix];//取unum的最后一位，并设置为str对应位，指示索引加1
//    //        unum /= radix;//unum去掉最后一位
//
//    //    } while (unum);//直至unum为0退出循环
//
//    //    str[i] = '\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
//
//    //    //将顺序调整过来
//    //    if (str[0] == '-') k = 1;//如果是负数，符号不用调整，从符号后面开始调整
//    //    else k = 0;//不是负数，全部都要调整
//
//    //    char temp;//临时变量，交换两个值时用到
//    //    for (j = k; j <= (i - 1) / 2; j++)//头尾一一对称交换，i其实就是字符串的长度，索引最大值比长度少1
//    //    {
//    //        temp = str[j];//头部赋值给临时变量
//    //        str[j] = str[i - 1 + k - j];//尾部赋值给头部
//    //        str[i - 1 + k - j] = temp;//将临时变量的值(其实就是之前的头部值)赋给尾部
//    //    }
//
//    //    return str;//返回转换后的字符串
//
//    //}
//    if (x < 0)
//        return 0;
//    if (x < 10 && x >= 0)
//        return 1;
//    int copy = x;
//    int i = 1;
//    for (; x / 10 != 0; x /= 10)
//        i++;
//    int* p=NULL;
//    int* q=NULL;
//    p = (int*)malloc(i * (sizeof(int)));
//    q = (int*)malloc(i * (sizeof(int)));
//    _itoa(copy, p, 10);
//    _itoa(copy, q, 10);
//    int check = 0;
//    for (int m = 0, n = i - 1; m<i; m++, n--)
//    {
//        if (p[m] == q[n])
//            check++;
//    }
//    if (check == i)
//        return 1;
//    return 0;
//}
//
//
//int main()
//{
//    int a = 0,b=999;
//    scanf("%d", &a);
//    b=isPalindrome(a);
//    
//    printf("%d", b);
//}
//https://www.runoob.com/w3cnote/c-int2str.html


//输出二进制数(网上扒拉的  重点看第二种方法)
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[33] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		for (i = 1; i <= sizeof(int) * 8; i++)
//		{
//			arr[i] = n % 2;
//			n /= 2;
//		}
//		
//		int k = 0;
//		
//		for (k = i - 1; k >= 1; k--)
//		{
//			printf("%d", arr[k]);
//		}
//
//		printf("\n");
//		return 0;
//	}
//}
//int main()
//{
//	int n = 5;//0000000101
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int k = 1 << 31;
//
//		for (i = 0; i < sizeof(int) * 8; i++)
//		{
//			printf("%d", -((n & k) >> 31));
//			n <<= 1;
//		}
//
//		printf("\n");
//		
//	}
//}



//骡马数字转整数
//int romanToInt(char* s) {
//    int Num = 0;
//    for (int i = 0; i < 15; i++)
//    {
//        if (s[i] == 'I' && s[i + 1] == 'V')
//        {
//            Num += 4;
//            i++;
//            continue;
//        }
//        if (s[i] == 'I' && s[i + 1] == 'X')
//        {
//            Num += 9;
//            i++;
//            continue;
//        }
//        if (s[i] == 'X' && s[i + 1] == 'L')
//        {
//            Num += 40;
//            i++;
//            continue;
//        }
//        if (s[i] == 'X' && s[i + 1] == 'C')
//        {
//            Num += 90;
//            i++;
//            continue;
//        }
//        if (s[i] == 'C' && s[i + 1] == 'D')
//        {
//            Num += 400;
//            i++;
//            continue;
//        }
//        if (s[i] == 'C' && s[i + 1] == 'M')
//        {
//            Num += 900;
//            i++;
//            continue;
//        }
//        if (s[i] == 'I') {
//            Num += 1;
//            continue;
//        }
//        if (s[i] == 'V')
//        {
//            Num += 5;
//            continue;
//        }
//        if (s[i] == 'X')
//        {
//            Num += 10;
//            continue;
//        }
//        if (s[i] == 'L')
//        {
//            Num += 50;
//            continue;
//        }
//        if (s[i] == 'C')
//        {
//            Num += 100;
//            continue;
//        }
//        if (s[i] == 'D')
//        {
//            Num += 500;
//            continue;
//        }
//        if (s[i] == 'M')
//        {
//            Num += 1000;
//            continue;
//        }
//        if (s[i] == 0)
//            break;
//    }
//    return Num;
//}
//int main()
//{
//    char str[15];
//    gets(str);
//    int result = romanToInt(str);
//    printf("%d", result);
//
//}



//字母金字塔
//int main() {
//    int n;
//    printf("请输入一个整数n：");
//    scanf("%d", &n); 
//    for (int i = 1; i <= n; i++) {
//            // 打印前面的空格
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//
//            // 打印字母
//        for (int j = 1; j <= i; j++) {
//            char letter = 'A' + j - 1;
//            printf("%c", letter);
//        }
//
//            // 打印字母（逆序）
//        for (int j = i - 1; j >= 1; j--) {
//            char letter = 'A' + j - 1;
//            printf("%c", letter);
//        }
//
//        // 换行
//        printf("\n");
//    }
//    
//    return 0;
//}



//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char str1[50] = "",str2[50]="";
//	scanf("%s %s", str1, str2);
//	//int check = 0;		第一遍写的检查量 后续的写法不需要该变量；
//	for (int j = n - 1, k = 0; k < n; k++, j--)
//	{
//		if (str1[j] == str2[k])
//			continue;
//		else
//		{
//			printf("%s and %s are not reverse.", str1, str2);
//			return 0;
//		}
//	}
//	printf("%s and %s are reverse.", str1, str2);
//	
//}



//整数转字符串
//https://blog.csdn.net/qq742143797/article/details/107450976



//toupper()       小写转大写的库函数


//二分查找的一种具体实现
//int binary_search(int arr[], int k, int sz)			//arr[]里面不需要数字 因为他本质上不是个数组 本质上arr是个指针
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。找不到的返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//    数组传参                 传递过去的是数组arr首元素的地址
//	//需要从外部传sz进去   在函数内部用上述方法求sz是求不到的
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;				//++的优先级较高 会先作用于p而不是*p，所以需要加括号
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);//1
//	Add(&num);
//	printf("num = %d\n", num);//2
//	Add(&num);
//	printf("num = %d\n", num);//3
//	return 0;
//}




//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//答案是4321，因为printf函数的返回值是打印的字符的个数
//}



//自定义函数若是定义放在主函数后面，在主函数使用前要先声明
//int Add(int, int);		//声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//更好的方案是在头文件声明函数；如下
#include"Function.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//函数的递归
//递归的两个必要条件
//●存在限制条件, 当满足这个限制条件的时候, 递归便不再继续。
//●每次递归调用之后越来越接近这个限制条件。
//int main()
//{
//	printf("乐死我了\n"); /*Sleep(1000)*/; main(); return 0;					//最几把简单的递归		最终导致栈溢出 stack over flow
//}
//
// 
//内存分 栈区（函数形参 局部变量） 堆区（动态开辟的内存malloc calloc） 静态区（全局变量 static修饰的变量）
//栈区用完就释放


//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		
//		print(x /10);		//先打印123的每一位		打印123的时候  又先打印12	打印12的时候 先打印1  
//	}						//宋氏洋葱定理	但是从最内部开始（滑稽）
//	printf("%d ", x%10);
//}
//int main()
//{//打印数字的每一位   以输入1234为例
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//使其输出1234的每位数字
//	return 0;
//}



//要求不创建临时变量求字符串长度
//int my_strlen(char* str)		//计算字符串长度
//{
//	//return strlen(str);		//emmmm
//	int count = 0;
//	while (*str != '\0')
//	{						//模拟实现了strlen函数
//		count++;			//迭代写法 
//		str++;				//数组里的地址是连续的
//	}return count;		
//}上述方式创建了临时变量count 使用了迭代的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);		//str+1 使得下一层函数调用的数组少首元素
//	else
//		return 0;
//}//递归方法 不创建临时变量
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d", len);
//	int len = my_strlen(arr);//arr是数组，数组传参传过去的不是整个数组，而是首元素的地址
//	printf("%d", len);
//	return 0;
//}





//int main()
//{
//	typedef char makabaka;				//typedef改变量类型名字
//	makabaka str[1000] = "0";			//方框里不给数字会报错
//	gets(str);
//	printf("%d", (int)strlen(str));
//}
//https://blog.csdn.net/qq_43746320/article/details/104603363



//求实数的小数部分
//float f, frac_part;
//frac_part = f - (int)f;
//
//求两个整数的商
//float quotient; int dividend, divisor;
//quotient = dividend / divisor;


//检查数中重复出现的数字
//Enter a number：232
//d[10]={0}
//d[i]=1/0 某数出现之后便置1
//while (x != 0)
//{
//	if (d[x % 10] == 1)
//		break;
//	d[x % 10] = 1;
//	x /= 10;
//}
//while (x != 0)
//{
//	d[x % 10] ++;			//要求找出所有重复数字和重复的次数
//	x /= 10;
//}
//for (i = 0; i < 10; i++)		
//{
//	if (d[i]>1)
//		printf("%d%d", i, d[i]);
//}









//质因数分解
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    int k = 2;					  //k从第一个素数开始
//    while (k <= n) 
//    {
//        if (n % k == 0) 
//        {                         //如果k是n的因数
//            printf("%d\n", k);    //将k输出
//            n /= k;               //此时n变为n/k，继续循环查找n的质因数
//        }
//        else
//            k++;                  //如果此时k不是n的因数，将k值加1
//    }
//    return 0;
//}
//https://blog.csdn.net/MarcoAsensio/article/details/88363024




//简单的质因数分解
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		int an = 0;
//		for (int i = 2; i * i <= n; i++) {
//			if (n % i == 0) {
//				int count = 0;
//				while (n % i == 0) {
//					count++;
//					n /= i;
//				}
//				if (an != 0) printf("*");
//				if (count != 1) printf("%d^%d", i, count);
//				else if (count == 1) printf("%d", i);
//				an++;
//			}
//		}
//		if (an == 0) printf("%d\n", n);
//		else {
//			if (n != 1) printf("*%d\n", n);
//			else if (n == 1) printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret;
//	ret = Jiecheng(n);
//	printf("%d", ret);
//}				//jiecheng




//int Fib(int n)		//斐波那契数列计算
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}									//效率非常低下	可以定义一个全局变量count看看计算次数
//int main()
//{
//	int n=0,ret=0;
//	scanf("%d", &n);
//	//TDD---测试驱动开发
//	ret = Fib(n);
//	printf("%d", ret);
//}
// 函数递归经典问题
//汉诺塔问题		2^n-1
//void move(int x, int y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
//		move(a, c);//将A座上最后一个盘子移向C座
//		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
//	}
//}
////move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//青蛙跳台阶
//一个斐波那契问题
//1 2 3 5 8

//abs 返回绝对值
//https://blog.csdn.net/weixin_44006573/article/details/124596118



//int main()
//{
//	int arr[9][9] = {0};
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			if (i == j || i + j == 8)
//				arr[i][j] = 1;
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//		//二维数组初始化最多省略一维（i）	
//		//int[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};		3可以省略
//}



//发牌
//#define NUM_SUITS 4
//#define NUM_RANKS 13
//int main(void)
//{
//	bool in_hand[NUM_SUITS][NUM_RANKS] = { false };
//	int num_cards, rank, suit;
//	const char rank_code[] = { "23456789tjqka" };
//	const char suit_code[] = { "cdhs" };
//	srand((unsigned)time(NULL));
//	printf("Enter the number of cards in your hands:");
//	scanf("%d", &num_cards);
//	printf("Your hand:");
//	while (num_cards > 0)
//	{
//		suit = rand() % NUM_SUITS;
//		rank = rand() % NUM_RANKS;
//		if (!in_hand[suit][rank])
//		{
//			in_hand[suit][rank] = 1;
//			num_cards--;
//			printf("%c%c ", rank_code[rank], suit_code[suit]);
//		}
//	}
//	printf("\n");
//}






//数组排序 设置变量保存最小的数字的下标  最后交换位置
//for (i = 0; i < N - 1; i++)
//{
//	int k = j;
//	for (j = i + 1; j < N; j++)
//		if (a[k] > a[j])k = j;
//	if (k != j)t - a[i], a[i] = a[k], a[k] = t;
//}






//int main(void)
//{
//    int sum1 = 0, sum2, len;
//    char a[10000] = { '\0' };
//
//    scanf("%s", a);
//    len = strlen(a);
//
//    do
//    {
//        sum2 = len;
//        sum1 = 0;
//        int i = 0;
//        for (i = 1; i < len; i++)
//        {
//            if (a[i - 1] != a[i])
//                a[sum1++] = a[i - 1];
//
//            else
//                i++;
//        }
//
//        if (len == i)
//            a[sum1++] = a[i - 1];
//
//        
//        len = sum1;
//
//    } while (sum1 != sum2);/*不断比较，确定最后得到的字符
//                         串不能再删除*/
//
//    for (int i = 0; i < sum1; i++)
//        printf("%c", a[i]);
//
//    return 0;
//}
// 
//删除字符串中重复相邻元素
//int main()
//{
//    char s[10000] = { "0"};
//    scanf("%s", s);
//    int len = (int)strlen(s);
//    int check;
//    do
//    {
//        check = len;
//        int i = 0, j = 0,count=0;
//        for (;i<len; )
//        {
//            if (s[i] == s[i + 1])
//            {
//                s[j] = s[i + 2];
//                i += 2;
//                count++;
//            }
//            else
//            {
//                i++; j++;
//                s[j] = s[i];
//                //i++; j++;
//            }
//        }
//        
//        len = check - 2 * count;
//    } while (check != len);
//    for (int i = 0; i < len; i++)
//        printf("%c", s[i]);
//}


//stelen计算\0前面的字符串长度


//数组在内存中的存储
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//}
//数组在内存中是连续存放的
//二维数组默认按行的顺序充填    地址按行的顺序连续




//数组作为函数参数
//
//void bubble_sort(int* arr, int sz)//(int arr[],int sz)不要这样写
//{
//	//确定冒泡排序趟数
//	int i = 0; int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag=0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
//	int i = 0; int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//	//arr 是数组，对数组arr进行传参
//	//实际上传递过去的是数组arr首元素的地址 ---> &arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//数组名是数组首元素的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);	//对地址进行解引用
//	//证明了上述结论
//	//例外：
//	//1.sizeof(数组名)计算的是整个数组的大小 单位是字节
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//2.&数组名	，数组名代表整个数组，取出的是整个数组的地址
//	printf("%p\n", &arr);
//	//输出结果虽然和上面一样 但它其实是数组地址 代表整个数组的地址从该位置开始
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);//该行的输出跳过了整个数组的地址 比较发现增加了4*7(元素个数)
//}


