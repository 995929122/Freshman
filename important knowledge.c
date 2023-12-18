#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	int id;
	int m, e, c;
	int t;
}stu;
int flag=0;
int Cmp(const void* a, const void* b)
{
	if (((struct student*)a)->t == ((struct student*)b)->t)
		return ((struct student*)a)->id - ((struct student*)b)->id;
	return ((struct student*)a)->t - ((struct student*)b)->t;
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		stu* s; int i = 0;
		s = (stu*)malloc(n * sizeof(stu));
		for (i = 0; i < n; i++)
		{
			scanf("%d%d%d%d", &s[i].id,&s[i].m,&s[i].e,&s[i].c);
			s[i].t = s[i].m + s[i].e + s[i].c;
		}
		int max = s[0].t;int min= s[0].t;
		for (i = 1; i < n; i++)
		{
			max = max > s[i].t ? max : s[i].t;
			min = min < s[i].t ? min : s[i].t;
		}
		qsort(s, n, sizeof(struct student), Cmp);

		if (flag)printf("\n");
		printf("BEST\n");
		for (i = 0; i < n; i++)
		{
			if (s[i].t == max)
				printf("%d %d %d %d %d\n", s[i].id, s[i].t,s[i].m, s[i].e, s[i].c);
		}
		printf("WORST\n");
		for (i = 0; i < n; i++)
		{
			if (s[i].t == min)
				printf("%d %d %d %d %d\n", s[i].id, s[i].t,s[i].m, s[i].e, s[i].c);
		}
		flag++;
	}
}
//https://blog.csdn.net/Cooler_z/article/details/122384559		qsort
//https://blog.csdn.net/TheWhiteFox/article/details/108502906   动态内存分配malloc
//1.参数
//qsort函数包含四个参数，分别是：
//1.数组名
//2.元素个数（从前往后计算）
//3.数组元素所占字节（int，double，char等所占字节）
//4.排序原则（递增，递减，奇偶交叉等）
//int cmp(const void* a, const void* b) {
//	return *(int*)a - *(int*)b;
//}
//qsort(num, n, sizeof(int), cmp);
//2.含义
//前三个大概没什么好说的，非常简单。主要介绍下第四个的排序原则。
//我们通过定义一个函数cmp，通过cmp返回的参数来确定排序规则，需要注意的是：cmp函数的参数需要以const void* a, const void* b的形式来定义，表示a和b的类型是未确定的，在return中进行强制类型转换为int型。* (int*)a - *(int*)b表示以递增顺序，若想以递减只需将a和b换位。
