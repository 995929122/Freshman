#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include <string.h>
#include<math.h>
#include <time.h>

	//
	//int main()
	//{
	//    int a, b;
	//    scanf("%d%d\n", &a, &b);											��scanf�����г���%d�����ݶ���Ҫ�ֶ����
	//    printf("%d%d\n", a, b);
	//}
	//int main()
	//{
	//	float a =10;
	//	printf("%10.2f",a);                                               // %m,pX   ��Ӧ�α�29ҳ֪ʶ��
	//}


	//��ʶ���͹ؼ��ּ��α�18 20 ҳ
//auto double int struct�ṹ�� break else long switch
//
//case enumö�� register�Ĵ��� typedef���Ͷ���/���������� char extern�����ⲿ���� return union
//
//const float short unsigned continue for signed void
//
//default goto sizeof volatile do if while static
//�ؼ���static
//��C������ :
//static���������α����ͺ�����
//1.���ξֲ����� - ��̬�ֲ�����  ����ֲ����������٣�ʹ���������ڱ䳤
//2.����ȫ�ֱ��� - ��̬ȫ�ֱ���	 �ı���������� ʹ��ֻ�����Լ�����Դ�ļ��ڲ�ʹ��
//3.���κ���	 - ��̬����  �ı亯������������  һ�㺯�������ⲿ�������� �����κ����ڲ���������


//�����������߶�Ϊ����ʱ��������eg 5/9=0


	//char					1
	////�ַ���������
	//short					2
	////������					-32768~32767
	//int					4
	////����					-2147483648��2147483647
	//1ong					4��8
	////������					-2147483648��2147483647
	//1ong 1ong				8
	////����������				9223372036854775807
	//float					4
	////�����ȸ�����
	//double				8
	////˫���ȸ�����
	//char-�ַ�����



//https://blog.csdn.net/weixin_62604754/article/details/127591940
	//%s-��ӡ�ַ���
	//%d -��ӡ����
	//%c -��ӡ�ַ�
	//%f -��ӡ�������ֿ�С��
	//%p -�Ե�ַ����ʽ��ӡ
	//%x -��ӡ16��������
	//%o -��ӡ�˽�������
	//%u -��ӡ�޷���ʮ��������
	//int main()
	//{
	//	int x = -1;
	//	printf("%d,%u,%o,%x", x, x, x, x);
	//	return 0;
	//}
	//		result:-1, 4294967295, 37777777777, ffffffff


	//#include <stdio. h>
	//int g1oba1 = 2019;//ȫ�ֱ���
	//int main()
	//int 1oca1 = 2018;//�ֲ�����
	//// ���涨���g1oba1�᲻��������?						ȫ�ֱ����;ֲ�����
	//int��obal = 2020;//�ֲ�����
	//printf("g1oba1 = %d\n"��g1oba1);
	//return 0;
	//}



//������(scope), ������Ƹ���, ͨ����˵�� - -�γ�����������õ������ֲ���������Ч / ���õ�
	//���޶�������ֵĿ����ԵĴ��뷶Χ����������ֵ�������
	//1.�ֲ��������������Ǳ������ڵľֲ���Χ��
	//2.ȫ�ֱ��������������������̡�
	//																		
//��������
	//��������������ָ���Ǳ����Ĵ���������������֮���һ��ʱ���					
	//1.�ֲ�����������������:�����������������ڿ�ʼ, ���������������ڽ�����
	//2.ȫ�ֱ��������������� : ����������������ڡ�
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



//�����
	//1.��������� ���ڸ�����ֵ���㡣������(+)����(-)����()����(/ )������(���ģ���㣬%)������(++)���Լ�(�C)�����֡�
	//
	//2.��ϵ����� ���ڱȽ����㡣��������(> )��С��(< )������(== )�� ���ڵ���(>= )��С�ڵ���(<= )�Ͳ�����(!= )���֡�
	//
	//	3.�߼������ �����߼����㡣������(&&)����(|| )����(!)���֡�	���ȼ�����>&&>||		���ҽ�ϣ�&&��||����
	// ����: !a(a����һ������)			���aΪ�٣���!aΪ�棬���aΪ�棬��!aΪ�١�
	//
	//
	//	4.λ��������� ���������������������λ�������㡣����λ��(&)��λ��(| )��λ��(~)��λ���(^)������(<< )������(>> )���֡�
	//
	//	5.��ֵ����� ���ڸ�ֵ���㣬��Ϊ�򵥸�ֵ(= )������������ֵ(+=, -=, =, /=, %=) �͸���λ���㸳ֵ(&=, |=, ^=, >>=, <<=)���๲ʮһ�֡�
	//
	//	6.��������� ����һ����Ŀ�����������������ֵ(? : )��
	//
	//	7.��������� ���ڰ����ɱ��ʽ��ϳ�һ�����ʽ(��)��
	//
	//	8.ָ������� ����ȡ����(*)��ȡ��ַ(&)�������㡣
	//
	//	9.���ֽ�������� ���ڼ�������������ռ���ֽ���(sizeof)��
	//
	//	10.��������� ������()���±�[]����Ա(����.)�ȼ���


	//int main()
	//{
	//    char str[] = "*****";//�����ַ���ģ��
	//    //for i = 0��i = 4,i++
	//    for (int i = 0; i < 4; i++) 
	//    {
	//        //��ӡһ��
	//        for (int j = 0; j < i; j++) {
	//            printf("%s", " ");//�����ַ�
	//        }
	//        printf("%s\n", str);//��ӡ�ַ���
	//    }
	//
	//    return 0;
	//}



//����
	//C�����еĳ����ͱ����Ķ������ʽ�������졣
	//C�����еĳ�����Ϊ�������¼��� :
	//�����泣��
	//��const���εĳ�����				const-������
	//��#define����ı�ʶ������
	//��ö�ٳ���
	//#include <stdio.h>
	////����

	//enum Sex								enum����ö�ٹؼ���
	//{
	//	MALE,					����0
	//	FEMALE,					����1
	//	SECRET					����2
	//};									�����ź���ģ��ز�����
	////�����е�MALE, FEMALE ,SECRET��ö�ٳ���

	//const int num =4;																	
	//printf(" %d\n"��num��;															
	//num=8;                                   ����������������						��const���ε�num������Ȼ�Ǳ��������������������г����ԡ�	
	//printf("%d\n"��num��;															�޷�����arr[]  ��������Ӧ���ǳ���	
	//																					





//�ַ���+ת���ַ�
	//�ַ���
	//"he11o bit.\n"			""���ַ���
	//������˫����(Double Quote)��������һ���ַ���Ϊ�ַ�������ֵ(String Literal), ���߼���ַ�����
	//ע : �ַ����Ľ�����־��һһ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־, �������ַ������ݡ�
	//int main()
	//{
	//	char arr1[] = "abc";//����
	//	char arr2[] = { 'a','b','c' };
	//	printf("%s\n", arr1);							/*----abc*/												//����a b c \0
	//	printf("%s\n", arr2);							/*----abc���������������������������������� - ?�H */    //����a b c
	//	printf("%d\n",strlen(arr1));					/*       \0 ���ַ����Ľ�����־    */    //ÿ���ַ����ж�Ӧֵ --- ACSCII
	//	printf("%d\n",strlen(arr2));					//  3   ���ֵ
	//	return 0;
	//}




//ת���ַ�
	//\ ? ����д��������ʺ�ʱʹ��, ��ֹ���Ǳ�����������ĸ��(��  ���ڵı�����������ô�㣨��ţ�)
	//\'	���ڱ�ʾ�ַ�����'
	//\""	���ڱ�ʾһ���ַ����ڲ���˫����
	//\\	���ڱ�ʾһ����б��, ��ֹ��������Ϊһ��ת�����з���
	//\a	�����ַ�, ����
	//\b	�˸��
	//\f	��ֽ��
	//\n	���лس�
	//\t	ˮƽ�Ʊ��
	//\V	��ֱ�Ʊ��
	//\ddd	ddd��ʾ1~3���˽�������	��\130 ->X
	//\xdd	dd��ʾ����16��������	��\x30 ->0
	//A����Z	65		41H
	//a����z	97		61H					http://c.biancheng.net/c/ascii/
	//0����9	46		30H
					//int main()
					//{
					//	 //printf(' 'c: \\test\\32\\test. c' ) ;
					//	/* printf("%c\n"����\''); */
					//	printf("%s\n","\"");//�������һ������
					//	//\t -ˮƽ�Ʊ��
					//	return 0;
					// }
	//				int main()
	//				{
	//					printf("%d\n",strlen("c:\test\32\test.c"));
	//					//\32 -- 32��2��8��������
	//					//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	//					return 0;
	//				}





//while�����ʽ��			���жϺ�ִ��
	//{ִ�����}			
//for( ��ʼ��;�ж� ;���� )	���жϺ�ִ��
	//{ִ�����}
//do						��ִ�к��ж�
// {
// ִ�����
// }while�����ʽ��
// 	ִ�к��жϱ��ʽ Ϊ�����ٴ�ִ��
//break ����ѭ��
//continue ��������ѭ��
//go to ����ĳ��

//����
	//Add(int x��int y)
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
	//	sum = Add(num1��num2);
	////	sum=a+b;
	//	sum = Add(a, b);
	//	printf(" sum = %d\n" ��sum));
	//	return 0;
	//}




//����			----����һ���Զ���������
	//Ҫ�洢1 - 10������, ��ô�洢 ?
	//C�����и�������Ķ��� : --����ͬ����Ԫ�صļ���
	//���鶨��		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ���������飬����10��Ԫ��
	//����ͨ���±�ʹ�� �±��0��ʼ
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
	//	char arr1[] = "��������";
	//	char arr3[] = { 'a','b','c',0 };
	//	char arr4[] = { 'a','b','c' };
	//	printf("%s\n", arr1);
	//	printf("%s\n", arr3);
	//	printf("%s\n", arr4);
	//	return 0;
	//}
	//


//������
	//����������
	//+  -	*	/ %		
	//��λ������
	//<<	>>
	//λ������
	//&��			^���		|��
	//��ֵ������
	//=	+=	 -=	 *=   /=   &=    ^=    |=		>>=			 <<=
	//a=a+10----->a+=10


	//���ļ������:
	//��Ӧ�Ķ�����λ��ͬ����Ϊ0 
	//��Ӧ�Ķ�����λ���죬��Ϊ1



	//��Ŀ������
	//!			�߼�������
	//-			��ֵ
	//+			��ֵ
	//&			ȡ��ַ
	//sizeof		�����������ͳ���(���ֽ�Ϊ��λ)
	//~           ��һ�����Ķ����ư�λȡ��				eg:	a=n b=~a.
	//--			ǰ�á�����--			������ʹ����++   a=10 b=a++		���ӡ��a=11	 b=10
	//++			ǰ�á�����++			ǰ����--��ʹ��
	//*			��ӷ��ʲ�����(�����ò�����)
	//(����)		ǿ������ת��			int a+(int)3.14


	
	//��ϵ������
	//>
	//>=
	//<
	//<=
	//!=
	//==



	//�߼�������
	//&&		�߼���     q=3 b=5  c=a&&b  ��c=1  ��Ϊa b �� ���� Ϊ��  �� cΪ�� Ҳ����1
	//||		�߼���

//j�Ƿ�λ��ik֮��
//i<j&&j<k
//i<j==j<k
//i�Ƿ�С�ڣ����ڻ����j
//ͨ��	(i>=j)+(i==j)	��ֵ�����ж�	0/1/2 ���switch	case 0/1/2����ѡ��	

	//����������
	//exp1��exp2��exp3



	//���ű��ʽ
	//exp1,exp2,exp3,exp4......expN


//�±����á��������úͽṹ��Ա
	//[]	�±����� ����
	//()	��������
	//.
	//->



//#define���峣���ͺ�
//#define MAX��X��Y����X>Y?X:Y)
//�뺯������


//ָ��

	//�ڴ�
	//�ڴ��ǵ������ر���Ҫ�Ĵ洢��, ����������г�������ж������ڴ��н��еġ�
	//����Ϊ����Ч��ʹ���ڴ�, �Ͱ��ڴ滮�ֳ�һ����С���ڴ浥Ԫ, ÿ���ڴ浥Ԫ�Ĵ�С��1���ֽڡ�
	//Ϊ���ܹ���Ч�ķ��ʵ��ڴ��ÿ����Ԫ, �͸��ڴ浥Ԫ�����˱��, ��Щ��ű���Ϊ���ڴ浥Ԫ�ĵ�ַ��
//int main()
//{
//	int a = 10;//4���ֽ�
//	int *p = &a;//ȡ��ַ p��������int*
//	//��һ�ֱ���������ŵ�ַ����ָ�����		p��һ��ָ�����
//	printf(" % p\n", & a);//��ӡ���Ľ�������ڴ��ַ
//	printf(" % p\n", p); 
//	*p = 20;//*-�����ò�����/��ӷ��ʲ�����
//	printf(" % d\n", a);//a���20��
//	return 0;
//}



	//
	//scanf("%f",&a)
	//scang(" %c",&x)
	// scanf��Ҫ�����ݾ���  �磺%.2f
	//		�ڶ���scanfǰ�ÿո��ֹ������һ��scanf�Ļس�
	//	Ҳ�����ڵڶ���scanfǰ��getchar����س�
	//fflush��stdin����ռ��̻�����
	// while (getchar() != '\n');Ҳ����һ����Ч��
	//http://c.biancheng.net/view/183.html#:~:text=1%20%E6%97%A2%E7%84%B6%E4%B8%8D%E6%83%B3%E5%B0%86%E5%AD%97%E7%AC%A6%27%5Cn%27%20%E8%B5%8B%E7%BB%99%E5%8F%98%E9%87%8F%20i%EF%BC%8C%E9%82%A3%E4%B9%88%E5%B0%B1%E5%85%88%E5%AE%9A%E4%B9%89%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E5%8F%98%E9%87%8F%20ch%EF%BC%8C%E7%84%B6%E5%90%8E%E7%94%A8%20scanf,%E5%B0%86%E5%AD%97%E7%AC%A6%20%27%5Cn%27%20%E5%8F%96%E5%87%BA%E6%9D%A5%E7%BB%99%E5%8F%98%E9%87%8F%20ch%EF%BC%8C%E8%BF%99%E6%A0%B7%E5%B0%B1%E6%9C%89%E6%9C%BA%E4%BC%9A%E8%BE%93%E5%85%A5%E2%80%9CY%E2%80%9D%E6%88%96%E8%80%85%E2%80%9CN%E2%80%9D%E4%BA%86%EF%BC%9B%202%20%E7%9B%B4%E6%8E%A5%E6%B8%85%E7%A9%BA%E8%BE%93%E5%85%A5%E7%BC%93%E5%86%B2%E5%8C%BA%E3%80%82
	//



	//int main()
	//{
	//	int Input = 0;
	//	scanf_s("%d", &Input);
	//	while (Input != 0)
	//	{
	//		printf("%d", Input % 2);				//�����������Ķ����ƽ���Ƿ��ģ�����ʹ������Խ�����д洢�����
	//		Input /= 2;					
	//	}
	//	return 0;
	//}  
	//		 while(x!=0)
	//		 {
	//				t=x%10;
	//				x/=10;										//ȡʮ�������ֵ�ÿλ����
	//		 
	//		 }
	//��չ��https://blog.csdn.net/qq_54053990/article/details/118209875




	//�������ȫ1����-1
	//ԭ��	 ����	����-��������������Բ�����ʽ�������� 
	// �������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��롣��ӡ��������ԭ��
	// �����һȡ��������λ���䣩�õ�ԭ��
	//����������ͬ


	//
	//int main()
	//{
	//	int arr[10] = { 0 };//10������Ԫ�ص�����
	//	intsz = 0;
	//	// 10*sizeof(int) = 40
	//	printf("%d\n"��sizeof(arr));
	//	//���������Ԫ�ظ���
	//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	//	sz = sizeof(arr) / sizeof(arr[0]);
	//	printf(" sz = %d\n"�� sz);
	//}
	//}


//int main()
//{
//	int i, j;
//	float x, y;
//	scanf("%d%d%f%f", &i, &j, &x, &y);//����1-20.3-4.0e3
//	//��������ʵ��ʱ�������Ϸ��ַ�����ֹ ��%f��˵ - . e���ǺϷ���
//	//p42
//	printf("%d%d%f%f", i, j, x, y);
//
//	return 0;
//
	//p46



	//�α�p44
	//int i=12;
	//printf("%-6.4d", i);==============printf("%-*.*d", 6, 4, i);
	//*�����滻����



//�ṹ��			�����Լ������һ������
//�ṹ����C�������ر���Ҫ��֪ʶ��, �ṹ��ʹ��C���������������������͡�
//��������ѧ��, ѧ������:���� + ���� + �Ա� + ѧ���⼸����Ϣ��
//����ֻ��ʹ�ýṹ���������ˡ�
//��������Ϊ��
//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//int main()
//{//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���� �������",55 };
//	struct Book*pb = &b1;
//	//����->pb��ӡ���ҵ������ͼ۸�	
//	//->	�ṹ��ָ��->��Ա
//	printf(" %s \n", pb->name);		//�˴�pb�ǽṹ��ָ����� ������b1�滻
//	printf(" %d \n", pb->price);	//
//	
//	
//	//����*pb��ӡ���ҵ������ͼ۸�
//	printf(" %s\n", (*pb).name);
//	printf(" % d\n" ,(*pb).price);	
//	//.		�ṹ�����.��Ա
//	printf("����:%s\n",b1.name); 
//	printf("�۸�: %d\n",b1.price);
//	b1.price = 15;
//	strcpy(b1.name,"C++");		//strcpy �ַ�������
//	printf("%s\n", b1.name);
//	printf("�޸ĺ�ļ۸�:%d\n",b1.price); 
//
//	return 0;
//}



//�����Լ��Լ��㷨
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//i = 3; j = i+++i+++i++;
//	//i = 3; j = ++i+(++i)+(++i);
//	printf("%d   ",  j);				
//}
//

//else�������δ���if���






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





//switch (���ͱ��ʽ)	���ͣ�������									
//{														
//		�����;												
//}															
//switch (day)
//{
//	case 1:
//	case 2:
//	case 3:
//	......
//}
//default���ڴ���Ƿ�����״��
//break������������֧��ѭ��
//continue �����˴ε�����ѭ����������һ��/��ֹ����ѭ��������һ��




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
//	int n,A,B,C,D,a,b,c,d;//Сд����ԭ   ��д������
//	while (scanf("%d",&n) != EOF)
//	{
//		d = n % 10;
//		c = n / 10 % 10;
//		b = n / 100 % 10;
//		a = n / 1000 % 10;
//		D = (d + 9) % 10;
//		C = (c + 9) % 10;
//		B = (b + 9) % 10;
//		A = (a + 9) % 10;			//������������������
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
//printf("\n");									//�еķ���  �Ƚ�


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
//	return gcd(b, a % b);				//շת����ж��Ƿ���
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
//				if (e % i == 0 && f % i == 0)						//����������㷨
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


//return �������������



//if�ж��аѳ�������ߴ��������




//% \* ��\* .*����ʽ��һ��ֻ������% ���ַ���% s������²űȽ����ã�����Ϊ�˷�������⣬�������г�ȫ���Ļ��������
//��ע�⣺scanf��printf�е�����ǲ�һ���ģ�
//<1>scanf��
//ע�⣺��scanf��ֻ��%* d��% .*d�����壬
//������%* f, %* lf, %* c��%* s�ȵȶ���û������ģ��������ᱨ������ǧ�����д��
//(1) % *d(���������壺���Ե�������������ƥ�䣺)
//int a = 0, b = 0, c = 0;
//scanf("%*d%d%d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 34��b = 56��c = 0
//�൱�ڣ����Ե���һ������12(������)��
//����a��ڶ�����ƥ�䣬b�����������
//����cû��ƥ������룬��c����ԭ����ֵ0.
//�����2���������ο���
//scanf("%d%*d%d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 12��b = 56��c = 0
//�൱�ڣ����Ե��ڶ�������34(������)
//scanf("%d%d%*d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 12��b = 34��c = 0
//�൱�ڣ����Ե�����������56(������)
//(2) % .*d(���������壺���� % *d����һ�����룬������ƥ��)
//scanf("%.*d%d%d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 12��b = 56��c = 0
//�൱�ڣ����Ե��ڶ�������34(������һ��)
//����a�͵�һ������ƥ�䣬b�͵���������ƥ�䣬
//�м��Ǹ����뱻�����ˣ�����cҲ��û��ƥ���ϡ�
//�����2���������ο���
//scanf("%d%.*d%d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 12��b = 34��c = 0
//�൱�ڣ����Ե�����������56(������һ��)
//scanf("%d%d%.*d", &a, &b, &c);
//printf("a=%d��b=%d��c=%d", a, b, c);
//���룺12  34  56
//�����a = 12��b = 34��c = 56
//�൱�ڣ����Ե����ĸ�����(������һ��������)
//�����������û�����壡��û�м�.*һ����
//< 2 > printf��
//ע�⣺��printf��û�����ƣ� % c, % d, % s, % f, % lf�����Լ�* ��.*���������塣
//���ǣ����ǵ�����ȴ����ͬ��
//(1) % *d(���壺�϶������ȫ��������ʵ��������ո�)
//int a = 123;
//printf("a=%*d", 2, a);
//�����a = 123
//(���ȫ��123������ > 2������Ҫ���ո�)
//��ûָ��һ����
//printf("a=%*d", 10, a);
//�����a = �ո�ո�ո�ո�ո�ո�ո�123
//(��ǰ��7���ո񣬲����ܹ�10��λ)
//(2) % .*d(���壺�϶���������������ʵ����ǰ�油0)
//printf("a=%.*d", 2, a);
//�����a = 123
//(���ȫ��123������ > 2������Ҫ��0)
//��ûָ��һ����
//printf("a=%.*d", 10, a);
//�����a = 0000000123
//(��ǰ��7��0�������ܹ�10��λ)
//����Ȼ����������岻����Ϊ���Ǻ�����Ҫ��0.
//���Ի�����������д����
//(3) % *f(���壺�϶������ȫ��������ʵ�ʲ��ո�)
//ע�⣬ % fĬ��С�������6λ����С����Ҳ��һλ��
//float a = 12;
//printf("a=%*f", 3, a);
//�����a = 123.000000
//Ĭ��С�������6λ�����ҿ϶������ȫ����
//����10λ > ָ����3λ����ûָ��һ����
//printf("a=%*f", 13, a);
//�����a = �ո�ո�ո�123.000000
//Ĭ��С�������6λ�����ҿ϶������ȫ��10λ��
//ʣ��3λ��������ǰ����3���ո�(С����Ҳ��һλ)
//(4) % .*f(���壺ָ��С������漸λ���� % .nf��һ����)
//�㶮��
//(5) % *s(���壺Ҳ�Ǹ���ʵ�������ǰ��ӿո�)
//char* a = "123456";
//printf("a=%*s", 5, a);
//�����a = 123456; ��Ϊ5 < 6�����Ը�ûָ����һ��
//	printf("a=%*s", 10, a);
//�����a = �ո�ո�ո�ո�123456
//(6) % .*s(���壺ָ����ȡǰ�漸λ��)
//char* a = "123456";
//printf("a=%.*s", 4, a);
//�����a = 1234;
//��ȡǰ��4λ��
//printf("a=%.*s", 10, a);
//�����a = 123456
//��ȡǰ��10λ������Ϊֻ��6λ��
//���Ը�ûָ����һ����
//


//��λ��
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
//	printf("����������");
//	scanf("%s", password);			//�������벢����password������				������������ǵ�ַ ����Ҫ&
//	printf("��ȷ�ϣ�Y/N��");		//scanf����Ĭ���Կո���Ϊ�������֮��ķָ���
//	while ((ret = getchar) != '\n')
//	{
//		;							//������뻺���� ֱ���س�
//	}								//��ô�����������뺬�ո��µ�bug		����Ȼ�޷���ȷ�洢���ո������
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//	//printf("%d",'\n');			����س���\n����ascii��ֵ����10
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '\n')
//			printf("\n");
//		if (ch < '0' || ch>'9')				//ֻ�������
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
//	printf("%d��", s);
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

//1��10��n�������
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
//		if (M == 1)                //�����1�£�ֱ�����day����
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
//			sum += D;                  //��������꣬3��֮��Ķ���Ҫ+1
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



//һ�����������Ķ��ֲ���
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,8,9,10,11};
//	int k =	7;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
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
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
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
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;//err		//�������鲻��Ҫ��������\0 ��������������Ҫע��\0���µ������С+1������
//	int right = strlen(arr1)-1;
//
//	printf("%s\n", arr2);
//	//��Ϣһ��
//	Sleep(1000);
//	system("cls");		//ԭ�����ƺ��������ȫ���ŵ��Ǿ� �����Ҽ�����һ��
//
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");			//ִ��ϵͳ�����һ������-cls - �����Ļ
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)		//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp https://blog.csdn.net/henuhhd/article/details/79368929
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1. �Գ���
//		//����2->i-1
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
//	//sqrt - ��ƽ������ѧ�⺯��
//	for(i=100; i<=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1. �Գ���
//		//����2->i-1
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


//����������n�־��硷
//https://blog.csdn.net/Tianzez/article/details/78086024




//շת����������Լ��
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




//��������Ϸ
//1. ���Ի�����һ�������
//2. ������
//void menu()
//{
//	printf("**********************************\n");
//	printf("****   1. play    0.exit      ****\n");
//	printf("**********************************\n");
//}
////RAND_MAX-32767
//void game()
//{
//	//1. ����һ�������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t			�������ǳ�����
//	//ʱ���
//	//	��ǰ�������ʱ�� - ���������ʼʱ��(1970.1.1.0:0 : 0) 
//	ret = rand()%100+1;//����1-100֮�������
//	//printf("%d\n", ret);
//	//2. ������
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	//NULL ��ָ��
// //https://blog.csdn.net/jaylee123123/article/details/80986913			time����
// //https://blog.csdn.net/qq_43516928/article/details/118864806			srand����
//	do 
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//https://blog.csdn.net/qq_43516928/article/details/118864806





//��������
//https://blog.csdn.net/qq_28234213/article/details/72510425





//goto���
//C�������ṩ�˿����������õ�goto���ͱ����ת�ı�š�
//������_��goto�����û�б�Ҫ��, ʵ����û��goto���Ҳ���Ժ����׵�д�����롣
//����ĳЩ������goto��仹���õ��ŵ�, ������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ����
//�������ʹ��break�Ǵﲻ��Ŀ�ĵġ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ����
//int main()
//{
//	char input[20] = {0};
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if(strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()  ��ͬ����0   1>2 ����ֵ>0  ��֮<0
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//https://blog.csdn.net/xiangshangdemayi/article/details/124191178	exeת�ɿ���������


