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

//1.������ʲô
//2.�⺯��
//3.�Զ��庯��
//4.��������
//5.��������
//6.������Ƕ�׵��ú���ʽ����
//7.�����������Ͷ���
//8.�����ݹ�

//���ÿ⺯��
//	I0����
//	�ַ�����������
//	�ַ���������
//	�ڴ��������
//	ʱ�� / ���ں���
//	��ѧ����
//	�����⺯��


//strcpy
//char* strcpy(char* destination�� const char* source);
//
//memset
//void* memset(void* ptr, int value, size_t num);
//https://blog.csdn.net/okawari_richi/article/details/57411796


//int main()
//{
//	char str[] = "hello world";
//	memset(str, '*', 15);
//	printf("%s\n", str);
//	//***** world û�и���\0		
//	// Դ�ַ�����Ŀ���ַ�������ʱ��ᵼ�����	eg����5�Ĵ�ͻᱨ�� ����ĳ�15 ����ǣ�***************������������������������???
//
//	return 0;
//}


//�Զ��庯���ĸ�ʽ
//ret_type fun_name(paral,*)
//	{
//	statement;//�����
//	}
//	ret_type		��������
//	fun_name		������
//	paral		��������



//void Swap1(int x,int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}		//��������޷�ʵ�ֽ������� ֻ�����β�xy û�иı�ab  ���βκ�ʵ�εĵ�ַ��һ����
//void Swap2(int* pa, int* pb)//����ָ�����
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;					//������
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
//�����Ĳ���
//ʵ�ʲ���(ʵ��) :
//	��ʵ���������Ĳ���, ��ʵ�Ρ�ʵ�ο����� : ���������������ʽ�������ȡ�����ʵ���Ǻ�����
//	�͵���, �ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ, �Ա����Щֵ���͸��βΡ�
//��ʽ����(�β�) :
//	��ʽ������ָ�������������еı���, ��Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ����(�����ڴ浥Ԫ), 
//	���Խ���ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч��
//.����Swap1��Swap2�����еĲ���x��y, px�� py������ʽ��������main�����д���Swap1��num1,
//num2�ʹ���Swap2������& num1, & num2��ʵ�ʲ�����
//ʵ�δ����β�ʱ
//�β���ʵ�ε���ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//Swap1������ֵ����
//Swap2������ָ����
/*��ֵ����
�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ��, ���βε��޸Ĳ���Ӱ��ʵ�Ρ�
��ַ����
��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
�����ִ��η�ʽ�����ú����ͺ�����ߵı����������������ϵ, Ҳ���Ǻ����ڲ�����ֱ�Ӳ�
�������ⲿ�ı���*/


//��������Ƕ�׵��ú���ʽ����
//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//printf("%d\n", strlen("abc"));�����һ����ʽ����



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



//��ϣ��
//https://zhuanlan.zhihu.com/p/144296454


//���۵ھ���  ����ת�����ַ������н���ĳ��ԣ�ʧ�ܣ�
//bool isPalindrome(int x) {
//    
//    //char* itoa(int num, char* str, int radix)
//    //{
//    //    char index[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//������
//    //    unsigned unum;//���Ҫת���������ľ���ֵ,ת�������������Ǹ���
//    //    int i = 0, j, k;//i����ָʾ�����ַ�����Ӧλ��ת��֮��i��ʵ�����ַ����ĳ��ȣ�ת����˳��������ģ��������������k����ָʾ����˳��Ŀ�ʼλ��;j����ָʾ����˳��ʱ�Ľ�����
//
//    //    //��ȡҪת���������ľ���ֵ
//    //    if (radix == 10 && num < 0)//Ҫת����ʮ�����������Ǹ���
//    //    {
//    //        unum = (unsigned)-num;//��num�ľ���ֵ����unum
//    //        str[i++] = '-';//���ַ�����ǰ������Ϊ'-'�ţ�����������1
//    //    }
//    //    else unum = (unsigned)num;//����numΪ����ֱ�Ӹ�ֵ��unum
//
//    //    //ת�����֣�ע��ת�����������
//    //    do
//    //    {
//    //        str[i++] = index[unum % (unsigned)radix];//ȡunum�����һλ��������Ϊstr��Ӧλ��ָʾ������1
//    //        unum /= radix;//unumȥ�����һλ
//
//    //    } while (unum);//ֱ��unumΪ0�˳�ѭ��
//
//    //    str[i] = '\0';//���ַ���������'\0'�ַ���c�����ַ�����'\0'������
//
//    //    //��˳���������
//    //    if (str[0] == '-') k = 1;//����Ǹ��������Ų��õ������ӷ��ź��濪ʼ����
//    //    else k = 0;//���Ǹ�����ȫ����Ҫ����
//
//    //    char temp;//��ʱ��������������ֵʱ�õ�
//    //    for (j = k; j <= (i - 1) / 2; j++)//ͷβһһ�Գƽ�����i��ʵ�����ַ����ĳ��ȣ��������ֵ�ȳ�����1
//    //    {
//    //        temp = str[j];//ͷ����ֵ����ʱ����
//    //        str[j] = str[i - 1 + k - j];//β����ֵ��ͷ��
//    //        str[i - 1 + k - j] = temp;//����ʱ������ֵ(��ʵ����֮ǰ��ͷ��ֵ)����β��
//    //    }
//
//    //    return str;//����ת������ַ���
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


//�����������(���ϰ�����  �ص㿴�ڶ��ַ���)
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



//��������ת����
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



//��ĸ������
//int main() {
//    int n;
//    printf("������һ������n��");
//    scanf("%d", &n); 
//    for (int i = 1; i <= n; i++) {
//            // ��ӡǰ��Ŀո�
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//
//            // ��ӡ��ĸ
//        for (int j = 1; j <= i; j++) {
//            char letter = 'A' + j - 1;
//            printf("%c", letter);
//        }
//
//            // ��ӡ��ĸ������
//        for (int j = i - 1; j >= 1; j--) {
//            char letter = 'A' + j - 1;
//            printf("%c", letter);
//        }
//
//        // ����
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
//	//int check = 0;		��һ��д�ļ���� ������д������Ҫ�ñ�����
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



//����ת�ַ���
//https://blog.csdn.net/qq742143797/article/details/107450976



//toupper()       Сдת��д�Ŀ⺯��


//���ֲ��ҵ�һ�־���ʵ��
//int binary_search(int arr[], int k, int sz)			//arr[]���治��Ҫ���� ��Ϊ�������ϲ��Ǹ����� ������arr�Ǹ�ָ��
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±ꡣ�Ҳ����ķ���-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//    ���鴫��                 ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	//��Ҫ���ⲿ��sz��ȥ   �ں����ڲ�������������sz���󲻵���
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;				//++�����ȼ��ϸ� ����������p������*p��������Ҫ������
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
//	printf("%d",printf("%d",printf("%d",43)));//����4321����Ϊprintf�����ķ���ֵ�Ǵ�ӡ���ַ��ĸ���
//}



//�Զ��庯�����Ƕ���������������棬��������ʹ��ǰҪ������
//int Add(int, int);		//����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//���õķ�������ͷ�ļ���������������
#include"Function.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//�����ĵݹ�
//�ݹ��������Ҫ����
//�������������, �������������������ʱ��, �ݹ�㲻�ټ�����
//��ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//int main()
//{
//	printf("��������\n"); /*Sleep(1000)*/; main(); return 0;					//��Ѽ򵥵ĵݹ�		���յ���ջ��� stack over flow
//}
//
// 
//�ڴ�� ջ���������β� �ֲ������� ��������̬���ٵ��ڴ�malloc calloc�� ��̬����ȫ�ֱ��� static���εı�����
//ջ��������ͷ�


//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		
//		print(x /10);		//�ȴ�ӡ123��ÿһλ		��ӡ123��ʱ��  ���ȴ�ӡ12	��ӡ12��ʱ�� �ȴ�ӡ1  
//	}						//������ж���	���Ǵ����ڲ���ʼ��������
//	printf("%d ", x%10);
//}
//int main()
//{//��ӡ���ֵ�ÿһλ   ������1234Ϊ��
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//ʹ�����1234��ÿλ����
//	return 0;
//}



//Ҫ�󲻴�����ʱ�������ַ�������
//int my_strlen(char* str)		//�����ַ�������
//{
//	//return strlen(str);		//emmmm
//	int count = 0;
//	while (*str != '\0')
//	{						//ģ��ʵ����strlen����
//		count++;			//����д�� 
//		str++;				//������ĵ�ַ��������
//	}return count;		
//}������ʽ��������ʱ����count ʹ���˵����ķ���
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);		//str+1 ʹ����һ�㺯�����õ���������Ԫ��
//	else
//		return 0;
//}//�ݹ鷽�� ��������ʱ����
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d", len);
//	int len = my_strlen(arr);//arr�����飬���鴫�δ���ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//	printf("%d", len);
//	return 0;
//}





//int main()
//{
//	typedef char makabaka;				//typedef�ı�����������
//	makabaka str[1000] = "0";			//�����ﲻ�����ֻᱨ��
//	gets(str);
//	printf("%d", (int)strlen(str));
//}
//https://blog.csdn.net/qq_43746320/article/details/104603363



//��ʵ����С������
//float f, frac_part;
//frac_part = f - (int)f;
//
//��������������
//float quotient; int dividend, divisor;
//quotient = dividend / divisor;


//��������ظ����ֵ�����
//Enter a number��232
//d[10]={0}
//d[i]=1/0 ĳ������֮�����1
//while (x != 0)
//{
//	if (d[x % 10] == 1)
//		break;
//	d[x % 10] = 1;
//	x /= 10;
//}
//while (x != 0)
//{
//	d[x % 10] ++;			//Ҫ���ҳ������ظ����ֺ��ظ��Ĵ���
//	x /= 10;
//}
//for (i = 0; i < 10; i++)		
//{
//	if (d[i]>1)
//		printf("%d%d", i, d[i]);
//}









//�������ֽ�
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    int k = 2;					  //k�ӵ�һ��������ʼ
//    while (k <= n) 
//    {
//        if (n % k == 0) 
//        {                         //���k��n������
//            printf("%d\n", k);    //��k���
//            n /= k;               //��ʱn��Ϊn/k������ѭ������n��������
//        }
//        else
//            k++;                  //�����ʱk����n����������kֵ��1
//    }
//    return 0;
//}
//https://blog.csdn.net/MarcoAsensio/article/details/88363024




//�򵥵��������ֽ�
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




//int Fib(int n)		//쳲��������м���
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}									//Ч�ʷǳ�����	���Զ���һ��ȫ�ֱ���count�����������
//int main()
//{
//	int n=0,ret=0;
//	scanf("%d", &n);
//	//TDD---������������
//	ret = Fib(n);
//	printf("%d", ret);
//}
// �����ݹ龭������
//��ŵ������		2^n-1
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
//		hanoi(n - 1, a, c, b);//��A���ϵ�n-1�����ӽ���C������B��
//		move(a, c);//��A�������һ����������C��
//		hanoi(n - 1, b, a, c);//��B���ϵ�n-1�����ӽ���A������C��
//	}
//}
////move�е�ʵ����hanoi�����е��β����Ӧ����hanoi�������β�a��b��c����Ӧ��ֵҲ�����й��ɵı仯
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//������̨��
//һ��쳲���������
//1 2 3 5 8

//abs ���ؾ���ֵ
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
//		//��ά�����ʼ�����ʡ��һά��i��	
//		//int[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};		3����ʡ��
//}



//����
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






//�������� ���ñ���������С�����ֵ��±�  ��󽻻�λ��
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
//    } while (sum1 != sum2);/*���ϱȽϣ�ȷ�����õ����ַ�
//                         ��������ɾ��*/
//
//    for (int i = 0; i < sum1; i++)
//        printf("%c", a[i]);
//
//    return 0;
//}
// 
//ɾ���ַ������ظ�����Ԫ��
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


//stelen����\0ǰ����ַ�������


//�������ڴ��еĴ洢
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//}
//�������ڴ�����������ŵ�
//��ά����Ĭ�ϰ��е�˳�����    ��ַ���е�˳������




//������Ϊ��������
//
//void bubble_sort(int* arr, int sz)//(int arr[],int sz)��Ҫ����д
//{
//	//ȷ��ð����������
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
//	bubble_sort(arr,sz);//ð��������
//	//arr �����飬������arr���д���
//	//ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ ---> &arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//��������������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);	//�Ե�ַ���н�����
//	//֤������������
//	//���⣺
//	//1.sizeof(������)���������������Ĵ�С ��λ���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//2.&������	�������������������飬ȡ��������������ĵ�ַ
//	printf("%p\n", &arr);
//	//��������Ȼ������һ�� ������ʵ�������ַ ������������ĵ�ַ�Ӹ�λ�ÿ�ʼ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);//���е������������������ĵ�ַ �ȽϷ���������4*7(Ԫ�ظ���)
//}


