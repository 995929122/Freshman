#define _CRT_SECURE_NO_WARNINGS 1
//这个源文件实现函数的实现

//函数的定义
int Add(int x, int y)				//对应 II 中的函数声明和定义的例子
{
	int z = x + y;
	return z;
}
int Jiecheng(int n)
{
	int ret = 1;
	if (n != 1)
		ret = n * Jiecheng(n - 1);			// 递归计算阶乘
	return ret;

}
int Fib(int n)
{
	int a = 1, b = 1, c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b; b = c;
		n--;
	}
	return c;
}