#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include <string.h>
#include<math.h>
#include <time.h>

	//
	//int main()
	//{
	//    int a, b;
	//    scanf("%d%d\n", &a, &b);											在scanf函数中除了%d的内容都需要手动输出
	//    printf("%d%d\n", a, b);
	//}
	//int main()
	//{
	//	float a =10;
	//	printf("%10.2f",a);                                               // %m,pX   对应课本29页知识点
	//}


	//标识符和关键字见课本18 20 页
//auto double int struct结构体 break else long switch
//
//case enum枚举 register寄存器 typedef类型定义/类型重命名 char extern引入外部符号 return union
//
//const float short unsigned continue for signed void
//
//default goto sizeof volatile do if while static
//关键字static
//在C语言中 :
//static是用来修饰变量和函数的
//1.修饰局部变量 - 静态局部变量  避免局部变量被销毁，使其生命周期变长
//2.修饰全局变量 - 静态全局变量	 改变变量作用域 使其只能在自己所在源文件内部使用
//3.修饰函数	 - 静态函数  改变函数的链接属性  一般函数具有外部链接属性 被修饰后变成内部链接属性


//除法符号两边都为整型时是整除，eg 5/9=0


	//char					1
	////字符数据类型
	//short					2
	////短整型					-32768~32767
	//int					4
	////整形					-2147483648～2147483647
	//1ong					4或8
	////长整型					-2147483648～2147483647
	//1ong 1ong				8
	////更长的整形				9223372036854775807
	//float					4
	////单精度浮点数
	//double				8
	////双精度浮点数
	//char-字符类型



//https://blog.csdn.net/weixin_62604754/article/details/127591940
	//%s-打印字符串
	//%d -打印整型
	//%c -打印字符
	//%f -打印浮点数字扛小数
	//%p -以地址的形式打印
	//%x -打印16进制数字
	//%o -打印八进制数字
	//%u -打印无符号十进制数字
	//int main()
	//{
	//	int x = -1;
	//	printf("%d,%u,%o,%x", x, x, x, x);
	//	return 0;
	//}
	//		result:-1, 4294967295, 37777777777, ffffffff


	//#include <stdio. h>
	//int g1oba1 = 2019;//全局变量
	//int main()
	//int 1oca1 = 2018;//局部变量
	//// 下面定义的g1oba1会不会有问题?						全局变量和局部变量
	//int则obal = 2020;//局部变量
	//printf("g1oba1 = %d\n"，g1oba1);
	//return 0;
	//}



//作用域(scope), 程序设计概念, 通常来说， - -段程序代码中所用到的名字并不总是有效 / 可用的
	//而限定这个名字的可用性的代码范围就是这个名字的作用域。
	//1.局部变量的作用域是变量所在的局部范围。
	//2.全局变量的作用域是整个工程。
	//																		
//生命周期
	//变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段					
	//1.局部变量的生命周期是:进入作用域生命周期开始, 出作用域生命周期结束。
	//2.全局变量的生命周期是 : 整个程序的生命周期。
	//int main()
	//{
	//	{
	//		int a = 10;
	//		printf("a = % d\n", a);		//ok
	//	}
	//	printf("a = % d\n",a) ;			//error		
	//	return 0;
	//
	//}



//运算符
	//1.算术运算符 用于各类数值运算。包括加(+)、减(-)、乘()、除(/ )、求余(或称模运算，%)、自增(++)、自减(–)共七种。
	//
	//2.关系运算符 用于比较运算。包括大于(> )、小于(< )、等于(== )、 大于等于(>= )、小于等于(<= )和不等于(!= )六种。
	//
	//	3.逻辑运算符 用于逻辑运算。包括与(&&)、或(|| )、非(!)三种。	优先级：！>&&>||		！右结合，&&和||左结合
	// 举例: !a(a代表一个条件)			如果a为假，则!a为真，如果a为真，则!a为假。
	//
	//
	//	4.位操作运算符 参与运算的量，按二进制位进行运算。包括位与(&)、位或(| )、位非(~)、位异或(^)、左移(<< )、右移(>> )六种。
	//
	//	5.赋值运算符 用于赋值运算，分为简单赋值(= )、复合算术赋值(+=, -=, =, /=, %=) 和复合位运算赋值(&=, |=, ^=, >>=, <<=)三类共十一种。
	//
	//	6.条件运算符 这是一个三目运算符，用于条件求值(? : )。
	//
	//	7.逗号运算符 用于把若干表达式组合成一个表达式(，)。
	//
	//	8.指针运算符 用于取内容(*)和取地址(&)二种运算。
	//
	//	9.求字节数运算符 用于计算数据类型所占的字节数(sizeof)。
	//
	//	10.特殊运算符 有括号()，下标[]，成员(→，.)等几种


	//int main()
	//{
	//    char str[] = "*****";//储存字符串模板
	//    //for i = 0到i = 4,i++
	//    for (int i = 0; i < 4; i++) 
	//    {
	//        //打印一行
	//        for (int j = 0; j < i; j++) {
	//            printf("%s", " ");//填充空字符
	//        }
	//        printf("%s\n", str);//打印字符串
	//    }
	//
	//    return 0;
	//}



//常量
	//C语言中的常量和变量的定义的形式有所差异。
	//C语言中的常量分为以下以下几种 :
	//●字面常量
	//●const修饰的常变量				const-常属性
	//●#define定义的标识符常量
	//●枚举常量
	//#include <stdio.h>
	////举例

	//enum Sex								enum——枚举关键字
	//{
	//	MALE,					——0
	//	FEMALE,					——1
	//	SECRET					——2
	//};									大括号后面的；必不可少
	////括号中的MALE, FEMALE ,SECRET是枚举常量

	//const int num =4;																	
	//printf(" %d\n"，num）;															
	//num=8;                                   ——————报错						但const修饰的num本质仍然是变量（常变量），但具有常属性。	
	//printf("%d\n"，num）;															无法用于arr[]  方括号里应当是常量	
	//																					





//字符串+转义字符
	//字符串
	//"he11o bit.\n"			""空字符串
	//这种由双引号(Double Quote)引起来的一串字符称为字符串字面值(String Literal), 或者简称字符串。
	//注 : 字符串的结束标志是一一个\0的转义字符。在计算字符串长度的时候\0是结束标志, 不算作字符串内容。
	//int main()
	//{
	//	char arr1[] = "abc";//数组
	//	char arr2[] = { 'a','b','c' };
	//	printf("%s\n", arr1);							/*----abc*/												//内置a b c \0
	//	printf("%s\n", arr2);							/*----abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫贴 - ? */    //内置a b c
	//	printf("%d\n",strlen(arr1));					/*       \0 是字符串的结束标志    */    //每个字符都有对应值 --- ACSCII
	//	printf("%d\n",strlen(arr2));					//  3   随机值
	//	return 0;
	//}




//转义字符
	//\ ? 在书写连续多个问号时使用, 防止他们被解析成三字母词(略  现在的编译器不会这么搞（大概）)
	//\'	用于表示字符常量'
	//\""	用于表示一个字符串内部的双引号
	//\\	用于表示一个反斜杠, 防止它被解释为一个转义序列符。
	//\a	警告字符, 蜂鸣
	//\b	退格符
	//\f	进纸符
	//\n	换行回车
	//\t	水平制表符
	//\V	垂直制表符
	//\ddd	ddd表示1~3个八进制数字	如\130 ->X
	//\xdd	dd表示两个16进制数字	如\x30 ->0
	//A——Z	65		41H
	//a——z	97		61H					http://c.biancheng.net/c/ascii/
	//0——9	46		30H
					//int main()
					//{
					//	 //printf(' 'c: \\test\\32\\test. c' ) ;
					//	/* printf("%c\n"，’\''); */
					//	printf("%s\n","\"");//用来输出一个引号
					//	//\t -水平制表符
					//	return 0;
					// }
	//				int main()
	//				{
	//					printf("%d\n",strlen("c:\test\32\test.c"));
	//					//\32 -- 32是2个8进制数字
	//					//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//					return 0;
	//				}





//while（表达式）			先判断后执行
	//{执行语句}			
//for( 初始化;判断 ;调整 )	先判断后执行
	//{执行语句}
//do						先执行后判断
// {
// 执行语句
// }while（表达式）
// 	执行后判断表达式 为真则再次执行
//break 跳出循环
//continue 跳出本次循环
//go to 跳到某句

//函数
	//Add(int x，int y)
	//{
	//	int z = x + y;
	//	return z }
	//
	//int main()
	//{
	//	int
	//	numl = 10;
	//	int num2 = 20;
	//	int sum = 0;
	//	int a = 100;
	//	int b = 200;
	////
	//	sum = num1 + num2;
	//	sum = Add(num1，num2);
	////	sum=a+b;
	//	sum = Add(a, b);
	//	printf(" sum = %d\n" ，sum));
	//	return 0;
	//}




//数组			----可以一次性定义多个变量
	//要存储1 - 10的数字, 怎么存储 ?
	//C语言中给了数组的定义 : --组相同类型元素的集合
	//数组定义		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整形数组，最多放10个元素
	//数组通过下标使用 下标从0开始
	//int main()
	//{
	//	int i = 0;
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//	printf("\n");
	//	return 0;
	//}
	//
	//int main()
	//{
	//	char arr1[] = "我是烫烫";
	//	char arr3[] = { 'a','b','c',0 };
	//	char arr4[] = { 'a','b','c' };
	//	printf("%s\n", arr1);
	//	printf("%s\n", arr3);
	//	printf("%s\n", arr4);
	//	return 0;
	//}
	//


//操作符
	//算术操作符
	//+  -	*	/ %		
	//移位操作符
	//<<	>>
	//位操作符
	//&与			^异或		|或
	//赋值操作符
	//=	+=	 -=	 *=   /=   &=    ^=    |=		>>=			 <<=
	//a=a+10----->a+=10


	//异或的计算规律:
	//对应的二进制位相同，则为0 
	//对应的二进制位相异，则为1



	//单目操作符
	//!			逻辑反操作
	//-			负值
	//+			正值
	//&			取地址
	//sizeof		操作数的类型长度(以字节为单位)
	//~           对一个数的二进制按位取反				eg:	a=n b=~a.
	//--			前置、后置--			后置先使用再++   a=10 b=a++		则打印得a=11	 b=10
	//++			前置、后置++			前置先--再使用
	//*			间接访问操作符(解引用操作符)
	//(类型)		强制类型转换			int a+(int)3.14


	
	//关系操作符
	//>
	//>=
	//<
	//<=
	//!=
	//==



	//逻辑操作符
	//&&		逻辑与     q=3 b=5  c=a&&b  则c=1  因为a b 都 非零 为真  则 c为真 也就是1
	//||		逻辑或

//j是否位于ik之间
//i<j&&j<k
//i<j==j<k
//i是否小于，大于或等于j
//通过	(i>=j)+(i==j)	的值进行判断	0/1/2 配合switch	case 0/1/2进行选择	

	//条件操作符
	//exp1？exp2：exp3



	//逗号表达式
	//exp1,exp2,exp3,exp4......expN


//下标引用、函数调用和结构成员
	//[]	下标引用 数组
	//()	函数调用
	//.
	//->



//#define定义常量和宏
//#define MAX（X，Y）（X>Y?X:Y)
//与函数类似


//指针

	//内存
	//内存是电脑上特别重要的存储器, 计算机中所有程序的运行都是在内存中进行的。
	//所以为了有效的使用内存, 就把内存划分成一个个小的内存单元, 每个内存单元的大小是1个字节。
	//为了能够有效的访问到内存的每个单元, 就给内存单元进行了编号, 这些编号被称为该内存单元的地址。
//int main()
//{
//	int a = 10;//4个字节
//	int *p = &a;//取地址 p的类型是int*
//	//有一种变量用来存放地址——指针变量		p是一个指针变量
//	printf(" % p\n", & a);//打印出的结果就是内存地址
//	printf(" % p\n", p); 
//	*p = 20;//*-解引用操作符/间接访问操作符
//	printf(" % d\n", a);//a变成20力
//	return 0;
//}



	//
	//scanf("%f",&a)
	//scang(" %c",&x)
	// scanf不要有数据精度  如：%.2f
	//		第二个scanf前置空格防止读到上一行scanf的回车
	//	也可以在第二个scanf前用getchar处理回车
	//fflush（stdin）清空键盘缓冲区
	// while (getchar() != '\n');也能起到一样的效果
	//http://c.biancheng.net/view/183.html#:~:text=1%20%E6%97%A2%E7%84%B6%E4%B8%8D%E6%83%B3%E5%B0%86%E5%AD%97%E7%AC%A6%27%5Cn%27%20%E8%B5%8B%E7%BB%99%E5%8F%98%E9%87%8F%20i%EF%BC%8C%E9%82%A3%E4%B9%88%E5%B0%B1%E5%85%88%E5%AE%9A%E4%B9%89%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E5%8F%98%E9%87%8F%20ch%EF%BC%8C%E7%84%B6%E5%90%8E%E7%94%A8%20scanf,%E5%B0%86%E5%AD%97%E7%AC%A6%20%27%5Cn%27%20%E5%8F%96%E5%87%BA%E6%9D%A5%E7%BB%99%E5%8F%98%E9%87%8F%20ch%EF%BC%8C%E8%BF%99%E6%A0%B7%E5%B0%B1%E6%9C%89%E6%9C%BA%E4%BC%9A%E8%BE%93%E5%85%A5%E2%80%9CY%E2%80%9D%E6%88%96%E8%80%85%E2%80%9CN%E2%80%9D%E4%BA%86%EF%BC%9B%202%20%E7%9B%B4%E6%8E%A5%E6%B8%85%E7%A9%BA%E8%BE%93%E5%85%A5%E7%BC%93%E5%86%B2%E5%8C%BA%E3%80%82
	//



	//int main()
	//{
	//	int Input = 0;
	//	scanf_s("%d", &Input);
	//	while (Input != 0)
	//	{
	//		printf("%d", Input % 2);				//这个程序输出的二进制结果是反的，可以使用数组对结果进行存储和输出
	//		Input /= 2;					
	//	}
	//	return 0;
	//}  
	//		 while(x!=0)
	//		 {
	//				t=x%10;
	//				x/=10;										//取十进制数字的每位数字
	//		 
	//		 }
	//拓展：https://blog.csdn.net/qq_54053990/article/details/118209875




	//计算机用全1保存-1
	//原码	 反码	补码-————计算机以补码形式保存数据 
	// 负数在内存中存储的时候，存储的是二进制的补码。打印出来的是原码
	// 补码减一取反（符号位不变）得到原码
	//正数三码相同


	//
	//int main()
	//{
	//	int arr[10] = { 0 };//10个整型元素的数组
	//	intsz = 0;
	//	// 10*sizeof(int) = 40
	//	printf("%d\n"，sizeof(arr));
	//	//计算数组的元素个数
	//	//个数=数组总大小/每个元素的大小
	//	sz = sizeof(arr) / sizeof(arr[0]);
	//	printf(" sz = %d\n"， sz);
	//}
	//}


//int main()
//{
//	int i, j;
//	float x, y;
//	scanf("%d%d%f%f", &i, &j, &x, &y);//输入1-20.3-4.0e3
//	//读整数和实数时遇到不合法字符会终止 对%f来说 - . e都是合法的
//	//p42
//	printf("%d%d%f%f", i, j, x, y);
//
//	return 0;
//
	//p46



	//课本p44
	//int i=12;
	//printf("%-6.4d", i);==============printf("%-*.*d", 6, 4, i);
	//*可以替换数字



//结构体			我们自己创造的一种类型
//结构体是C语言中特别重要的知识点, 结构体使得C语言有能力描述复杂类型。
//比如描述学生, 学生包含:名字 + 年龄 + 性别 + 学号这几项信息。
//这里只能使用结构体来描述了。
//以描述书为例
//创建一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()
//{//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言 程序设计",55 };
//	struct Book*pb = &b1;
//	//利用->pb打印出我的书名和价格	
//	//->	结构体指针->成员
//	printf(" %s \n", pb->name);		//此处pb是结构体指针变量 不能用b1替换
//	printf(" %d \n", pb->price);	//
//	
//	
//	//利用*pb打印出我的书名和价格
//	printf(" %s\n", (*pb).name);
//	printf(" % d\n" ,(*pb).price);	
//	//.		结构体变量.成员
//	printf("书名:%s\n",b1.name); 
//	printf("价格: %d\n",b1.price);
//	b1.price = 15;
//	strcpy(b1.name,"C++");		//strcpy 字符串拷贝
//	printf("%s\n", b1.name);
//	printf("修改后的价格:%d\n",b1.price); 
//
//	return 0;
//}



//逆天自加自减算法
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//i = 3; j = i+++i+++i++;
//	//i = 3; j = ++i+(++i)+(++i);
//	printf("%d   ",  j);				
//}
//

//else与最近的未配对if配对






//1319
//int main()
//{
//	int k,a,b ,result= 0;
//	scanf("%d", &k);
//	for (int i=0 ; i < k; i++)
//	{
//		scanf("%d %d", &a, &b);
//		result = (b - b / 2 - b / 3 + b / 6) - (a-1 - ((a-1) / 2) - (a-1) / 3 + (a-1) / 6);
//		printf("%d\n", result);
//		
//	}
//	return 0;
//
//}





//switch (整型表达式)	整型！！！！									
//{														
//		语句项;												
//}															
//switch (day)
//{
//	case 1:
//	case 2:
//	case 3:
//	......
//}
//default用于处理非法输入状况
//break可用于跳出分支或循环
//continue 跳出此次迭代（循环）进行下一次/终止本次循环进行下一次




//1640
//int main()
//{
//	int n=0;
//	
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n != 60)
//		{
//			int level = (n - 1) / 10;
//			switch (level)
//			{
//			case 9:
//				printf("A\n");
//				break;
//			case 8:
//				printf("B\n");
//				break;
//			case 7:
//				printf("C\n");
//				break;
//			case 6:
//				printf("D\n");
//				break;
//			default:
//				printf("F\n");
//				break;
//			}
//		}
//		else
//			printf("D\n");
//	}
//	return 0;
//}
//



//1306
//int main()
//{
//	int n,A,B,C,D,a,b,c,d;//小写——原   大写——新
//	while (scanf("%d",&n) != EOF)
//	{
//		d = n % 10;
//		c = n / 10 % 10;
//		b = n / 100 % 10;
//		a = n / 1000 % 10;
//		D = (d + 9) % 10;
//		C = (c + 9) % 10;
//		B = (b + 9) % 10;
//		A = (a + 9) % 10;			//不会数组是这样的捏
//		int arr[]={C,D,A,B};
//		printf("The encrypted number is ");
//		if (arr[0] != 0)
//		{
//			for (int i = 0; i < 4; i++)
//				printf("%d", arr[i]);
//		}
//		else if (arr[0] == 0 && arr[1] != 0)
//		{
//			for (int i = 1; i < 4; i++)
//				printf("%d", arr[i]);
//		}
//		else if (arr[0] == 0 && arr[1] == 0 && arr[2] != 0)
//		{
//			for (int i = 2; i < 4; i++)
//				printf("%d", arr[i]);
//		}
//		else
//			printf("%d", arr[3]);
//		printf("\n");
//	}
//
//	return 0;
//}
//int t = 0;
//while (encrypted[t] == 0)
//t++;
//printf("The encrypted number is ");
//for (; t < 4; t++)
//	printf("%d", encrypted[t]);
//printf("\n");									//佬的方案  先进


//1559
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		if ((n % 2) == 0&&n!=0&&n!=2)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}



//
//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b, a % b);				//辗转相除判断是否互质
//}


//1661
//int main()
//{
//	int m, n;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		int Ji=0, Ou=0;
//		for(;m % 2 == 0&&m<=n||m==0;)
//		{
//			Ou = (Ou+m * m);
//			m += 1;
//			if(m<=n)
//				Ji=(Ji+m*m*m);
//			m += 1;
//			
//		}
//	for (;m % 2 == 1 && m <= n;)
//		{
//			Ji = (Ji + m * m * m);
//			m += 1;
//			if(m<=n)
//				Ou = (Ou + m * m);
//			m += 1;
//			
//		}
//		printf("%d ", Ou);
//		printf("%d\n", Ji);
//	}
//}

//int main()
//{
//	int a, i;
//	while (scanf("%d", &a) != EOF)
//	{
//		for (i = 1; (i * i) <= a; i++)
//			if (i % 2 == 0)
//				printf("%d\n", i * i);
//	}
//	return 0;
//}



//1662
//double Factorial(double x)
//{
//	double  Num=1.0;
//	for (int i = 1; i <= x; i ++)
//	{
//		Num = Num * i;
//	}
//	return Num;
//};
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		double result=0;
//		for (int i = 1; i <= n; i++)
//		{
//			
//			result =(result+ 1l/ Factorial(i));
//			
//		}
//		result += 1;
//		printf("%lf\n", result);
//	}
//}




//1553
//int Function(int a)
//{
//	int result;
//
//	result = a / 100 + (a % 100) / 50  +( a % 100 % 50  )/ 10 +( a % 100 % 50 % 10) / 5 + (a % 100 % 50 % 10 % 5) / 2 + (a % 100 % 50  % 10 % 5 % 2 )/ 1;
//	return result;
//};
//int main()
//{
//	int n,a;
//	
//	while(scanf("%d", &n)!=EOF)
//	{	
//		int End = 0;
//		for (int i = 0; i < n; i++)
//		{
//			
//			scanf("%d", &a);
//			End =End+ Function(a);
//			
//		}
//		printf("%d\n",End);
//	}
//}


//1659
//int main()
//{
//	int Input,Max=0;
//	while (scanf("%d", &Input) != EOF)
//	{
//		Max = Max > Input ? Max : Input;
//		if (Input== 0)
//		{
//			printf("%d ", Max);
//			Max = 0;
//		}
//	}
//}
//





//1025
//Function(int x)
//{
//	int a = 0, b = 0;
//	while (x > 0)
//	{
//		if (x % 2 == 1)
//			a++;
//		else
//			b++;
//		x /= 2;
//	}
//	if (a > b)
//		return 1;
//	else
//		return 0;
//};
//int main()
//{
//	int Input;
//	while (scanf("%d", &Input) != EOF)
//	{
//		int A=0;
//		for (int i = 1; i <= Input; i++)
//		{
//			if (Function(i) == 1)//1A		0B
//				A++;
//			
//		}
//		
//		printf("%d %d\n", A, Input-A);
//	}
//}



//
//1582
//int main()
//{
//	int Input;
//	while (scanf("%d", &Input) != EOF)
//	{
//		if (Input == 0)
//			return 0;
//		else
//		{
//			int Num = 0;
//			for (; Input > 0;)
//			{
//				if ((Input % 16) < 10)
//					Num = Num + Input % 16;
//				Input /= 16;
//			}
//			printf("%d\n", Num);
//		}
//	}
//}








//1562
//int main()
//{
//	int a=0,b=0,c=0,d=0;
//
//	while (scanf("%d/%d+%d/%d", &a,&b,&c,&d) != EOF)
//	{
//		int e, f,i;
//		e = a * d + c * b;
//		f = b * d;
//		if (e % f == 0)
//			printf("%d\n", e / f);
//		else
//		{
//			for ( i = e; i >= 1; i--)
//			{
//				if (e % i == 0 && f % i == 0)						//化简分数的算法
//				{
//					e /= i;
//					f /= i;
//				}
//			}
//			printf("%d/%d\n", e, f);
//		}
//	}
//}




//1562

//int arr[2638612] = { 0 };
//int main()
//{
//	int N = 0;
//	for (int i = 1; i <= 2638612; i++)
//	{
//		
//		if (i % 6 == 0 || i % 10 == 6 || i % 100 / 10 == 6 || i  % 1000 / 100 == 6)
//		{ 
//			arr[N] = i;
//			N++;
//		}
//	}
//	
//	int Input;
//	while (scanf("%d", &Input) != EOF)
//	{
//		printf("%d\n", arr[Input - 1]);
//	}
//}




//1555
//int main()
//{
//	int x, y;
//	while (scanf("%d%d", &x, &y) != EOF)
//	{
//		for (int i = 1;;i++)
//		{
//			if (x == y)
//			{
//				printf("None\n");
//				break;
//			}
//			if (x * x + y * y == i * i || i * i + x * x == y * y||i*i+y*y==x*x)
//			{
//				printf("%d\n", i);
//				break;
//			}
//			
//			if (i > x * x + y * y)
//			{
//				printf("None\n");
//				break;
//			}
//		}
//
//	}
//}
//
//


//return 会结束整个程序



//if判断中把常量放左边代码风格更好




//% \* 和\* .*的形式，一般只有整数% 和字符串% s的情况下才比较有用，但是为了方便大家理解，这里我列出全部的基础情况：
//请注意：scanf和printf中的情况是不一样的！
//<1>scanf：
//注意：在scanf里只有%* d和% .*d有意义，
//其他的%* f, %* lf, %* c和%* s等等都是没有意义的，编译器会报错。所以千万别乱写。
//(1) % *d(仅它有意义：忽略掉它本身，并重新匹配：)
//int a = 0, b = 0, c = 0;
//scanf("%*d%d%d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 34，b = 56，c = 0
//相当于：忽略掉第一个输入12(它本身)，
//并将a与第二个数匹配，b与第三个数，
//所以c没有匹配的输入，故c还是原来的值0.
//下面的2种情况给你参考：
//scanf("%d%*d%d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 12，b = 56，c = 0
//相当于：忽略掉第二个输入34(它本身)
//scanf("%d%d%*d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 12，b = 34，c = 0
//相当于：忽略掉第三个输入56(它本身)
//(2) % .*d(仅它有意义：忽略 % *d的下一个输入，并重新匹配)
//scanf("%.*d%d%d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 12，b = 56，c = 0
//相当于：忽略掉第二个输入34(它的下一个)
//所以a和第一个输入匹配，b和第三个输入匹配，
//中间那个输入被忽略了，所以c也就没有匹配上。
//下面的2种情况给你参考：
//scanf("%d%.*d%d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 12，b = 34，c = 0
//相当于：忽略掉第三个输入56(它的下一个)
//scanf("%d%d%.*d", &a, &b, &c);
//printf("a=%d，b=%d，c=%d", a, b, c);
//输入：12  34  56
//输出：a = 12，b = 34，c = 56
//相当于：忽略掉第四个输入(它的下一个：空气)
//所以最后这种没有意义！和没有加.*一样。
//< 2 > printf：
//注意：在printf里没有限制， % c, % d, % s, % f, % lf都可以加* 或.*，都有意义。
//但是，他们的意义却不相同：
//(1) % *d(意义：肯定会输出全部，根据实际情况补空格)
//int a = 123;
//printf("a=%*d", 2, a);
//输出：a = 123
//(输出全部123，长度 > 2，不需要补空格)
//跟没指定一样！
//printf("a=%*d", 10, a);
//输出：a = 空格空格空格空格空格空格空格123
//(往前补7个空格，补够总共10个位)
//(2) % .*d(意义：肯定会输出结果，根据实际在前面补0)
//printf("a=%.*d", 2, a);
//输出：a = 123
//(输出全部123，长度 > 2，不需要补0)
//跟没指定一样！
//printf("a=%.*d", 10, a);
//输出：a = 0000000123
//(往前补7个0，补够总共10个位)
//很显然这种情况意义不大，因为我们很少需要补0.
//所以基本不用这种写法。
//(3) % *f(意义：肯定会输出全部，根据实际补空格)
//注意， % f默认小数点后面6位数：小数点也算一位！
//float a = 12;
//printf("a=%*f", 3, a);
//输出：a = 123.000000
//默认小数点后面6位。而且肯定会输出全部，
//所以10位 > 指定的3位，跟没指定一样！
//printf("a=%*f", 13, a);
//输出：a = 空格空格空格123.000000
//默认小数点后面6位。而且肯定会输出全部10位，
//剩下3位，所以在前面填3个空格(小数点也算一位)
//(4) % .*f(意义：指定小数点后面几位，跟 % .nf是一样的)
//你懂的
//(5) % *s(意义：也是根据实际情况在前面加空格)
//char* a = "123456";
//printf("a=%*s", 5, a);
//输出：a = 123456; 因为5 < 6，所以跟没指定的一样
//	printf("a=%*s", 10, a);
//输出：a = 空格空格空格空格123456
//(6) % .*s(意义：指定截取前面几位数)
//char* a = "123456";
//printf("a=%.*s", 4, a);
//输出：a = 1234;
//截取前面4位数
//printf("a=%.*s", 10, a);
//输出：a = 123456
//截取前面10位数，因为只有6位，
//所以跟没指定的一样！
//


//计位数
//int main()
//{
//	int i;
//	long long int a;
//	scanf_s("%lld", &a);
//	for (i = 1; i < a; i++) {
//		if (a / 10 == 0) {
//			break;
//		}
//		else
//			a = a / 10;
//	}
//	printf("%d", i);
//
//	return 0;
//}





//int main()
//{
//	char password[20] = {0};
//	int ret = 0;
//	printf("请输入密码");
//	scanf("%s", password);			//输入密码并存入password数组中				数组名本身就是地址 不需要&
//	printf("请确认（Y/N）");		//scanf函数默认以空格作为输入参数之间的分隔符
//	while ((ret = getchar) != '\n')
//	{
//		;							//清除输入缓冲区 直到回车
//	}								//这么做避免了密码含空格导致的bug		但仍然无法正确存储含空格的密码
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//	//printf("%d",'\n');			输出回车（\n）的ascii码值——10
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '\n')
//			printf("\n");
//		if (ch < '0' || ch>'9')				//只输出数字
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//int main() {
//	int t1, t2, s;
//	scanf("%*c%*c%d %*c%*c%d", &t1, &t2);
//	if (t2 == 0) t2 = 60;
//	if (t2 <= 40)
//		s = (t2 - t1) * 100;
//	else if (t2 <= 50) {
//		if (t1 <= 40)
//			s = (40 - t1) * 100 + (t2 - 40) * 150;
//		else
//			s = (t2 - t1) * 150;
//	}
//	else if (t2 <= 60) {
//		if (t1 <= 40)
//			s = (40 - t1) * 100 + 1500 + (t2 - 50) * 50;
//		else if (t1 <= 50)
//			s = (50 - t1) * 150 + (t2 - 50) * 50;
//		else
//			s = (t2 - t1) * 50;
//	}
//	printf("%d米", s);
//
//	printf("%d %d", t1, t2);
//}

//https://blog.csdn.net/zhinengxiong6/article/details/111306823
//https://blog.csdn.net/mengdicfm/article/details/90664305



//
//
//int main()
//{
//	long n=0;
//	while (scanf("%d", &n) != EOF)
//	{	
//		int m = 0;
//		while(n!=0)
//		{
//			m = m + n % 10;
//			n /= 10;
//		}
//		printf("%d\n", m);
//	}
//	
//	
//}


//int main()
//{
//	int n;
//	while(scanf("%d",&n)!=EOF)
//	{
//		int p , q ;
//		for (int i = 2; i < n; i++)
//		{
//			
//			if (n % i == 0)
//			{
//				p = n / i;
//				q = p > i ? p:i;
//				printf("%d\n", q);
//				break;
//			}
//		}
//	}
//}



//int main()
//{
//	int Input;
//	while (scanf("%d", &Input) != EOF)
//	{
//		int A = 0,check=0;
//		check = Input % 2;
//		if (Input == 0)
//		{
//			printf("Yes\n");
//			continue;
//		}
//		Input /= 2;
//
//		for (;Input > 0;)
//		{
//			if (Input % 2 == 1)
//				A++;
//			Input /= 2;
//		}
//		
//		if (A % 2 == 0 && check == 0)
//			printf("Yes\n");
//		if (A % 2 == 1 && check == 1)
//			printf("Yes\n");
//		if (A % 2 == 1 && check == 0)
//			printf("No\n");
//		if (A % 2 == 0 && check == 1)
//			printf("No\n");
//	}
//		
//}

//int main()
//{
//	int Input;
//	while (scanf("%d", &Input) != EOF)
//	{
//		int Num=0,remain=0;
//		Num = Input / 38 + Input % 38 / 18 + Input % 38 % 18 / 8;
//		remain=Input % 38 % 18 % 8;
//		if (Input - remain > 68)
//			Num++;
//		printf("%d\n", Num);
//	}
//
//}

//1到10的n次幂求和
//int main()
//{
//	int t;
//	while (scanf("%d", &t) != EOF)
//	{
//		for (int i = 0; i < t; i++)
//		{
//			int n=0;
//			scanf("%d", &n);
//			if (n == 0)
//			{
//				printf("1\n");
//				continue;
//			}
//			printf("5");
//			for (int m = 1; m < n; m++)
//				printf("0");
//			printf("5");
//			for (int m = 1; m < n; m++)
//				printf("0");
//			printf("\n");
//		}
//	}
//}



//1550
//int main()
//{
//	int Y, M, D;
//	while (scanf("%d%d%d", &Y, &M, &D) != EOF)
//	{
//		int sum = 0;
//		if (M == 1)                //如果是1月，直接输出day就行
//			printf("%d\n", D);
//		else
//		{
//			for (int i = 1; i < M; i++)
//				switch (i)
//				{
//				case 1:case 3:case 5:case 7:case 8:case 10:case 12:
//					sum += 31;
//					break;
//				case 4:case 6:case 9:case 11:
//					sum += 30;
//					break;
//				case 2:sum += 28;
//				}
//			sum += D;                  //如果是闰年，3月之后的都需要+1
//			if (Y % 400 == 0 && M > 2 || Y % 4 == 0 && Y % 100 != 0 && M > 2)
//				sum += 1;
//			printf("%d\n", sum);
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//	printf("%d %d %d\n", sizeof(1.1), sizeof(1.1f), sizeof(1.1l));
//	printf("%d %d %d\n", sizeof(1), sizeof(1l), sizeof(1ll));
//	printf("%d %d\n", sizeof(0xFF), sizeof(0xFFu));
//	printf("%d %d\n", sizeof(0xFFFFFFFFFFFFFFFFLL), sizeof(0xFFFFFFFFFFFFFFFF));
//	printf("%d ", sizeof(158ll));
//	printf("%d", sizeof(158l));
//}
//https://blog.csdn.net/qq_42820594/article/details/82735387
//https://blog.csdn.net/wankcn/article/details/121209323



//一个简易至极的二分查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,8,9,10,11};
//	int k =	7;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}




//int main()
//{
//	//
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!
//	//
//	//char arr[] = "abc";
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//err		//整型数组不需要考虑最后的\0 但其他类型数组要注意\0导致的数组大小+1的问题
//	int right = strlen(arr1)-1;
//
//	printf("%s\n", arr2);
//	//休息一秒
//	Sleep(1000);
//	system("cls");		//原程序似乎不能输出全井号的那句 所以我加了这一块
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");			//执行系统命令的一个函数-cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)		//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp https://blog.csdn.net/henuhhd/article/details/79368929
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<i; j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for(i=100; i<=200; i++)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//《素数求解的n种境界》
//https://blog.csdn.net/Tianzez/article/details/78086024




//辗转相除法求最大公约数
//https://blog.csdn.net/weixin_64188098/article/details/126982221
//int main()
//{
//	int u, v;
//	scanf("%d %d", &u, &v);
//	while (v != 0)
//	{
//		int tmp = u % v;
//		u = v;
//		v = tmp;
//	}
//	printf("%d", u);
//	return 0;
//
//}




//猜数字游戏
//1. 电脑会生成一个随机数
//2. 猜数字
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play    0.exit      ****\n");
//	printf("**********************************\n");
//}
////RAND_MAX-32767
//void game()
//{
//	//1. 生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t			本质上是长整型
//	//时间戳
//	//	当前计算机的时间 - 计算机的起始时间(1970.1.1.0:0 : 0) 
//	ret = rand()%100+1;//生成1-100之间随机数
//	//printf("%d\n", ret);
//	//2. 猜数字
//	while(1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	//NULL 空指针
// //https://blog.csdn.net/jaylee123123/article/details/80986913			time函数
// //https://blog.csdn.net/qq_43516928/article/details/118864806			srand函数
//	do 
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//https://blog.csdn.net/qq_43516928/article/details/118864806





//不定数组
//https://blog.csdn.net/qq_28234213/article/details/72510425





//goto语句
//C语言中提供了可以随意滥用的goto语句和标记跳转的标号。
//从理论_上goto语句是没有必要的, 实践中没有goto语句也可以很容易的写出代码。
//但是某些场合下goto语句还是用得着的, 最常见的用法就是终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环。
//这种情况使用break是达不到目的的。它只能从最内层循环退出到上一层的循环。
//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()  相同返回0   1>2 返回值>0  反之<0
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//https://blog.csdn.net/xiangshangdemayi/article/details/124191178	exe转成开机自启动


