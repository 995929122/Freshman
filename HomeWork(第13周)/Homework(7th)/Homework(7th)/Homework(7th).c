#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char s[35]; 
//	again:
//	while (scanf("%s", s) != EOF)
//	{
//		int len = strlen(s); 
//		for (int i = 0; i < len; i++)
//		{
//			if ((s[i] < 48 || s[i]>57) && s[i] != '.')
//			{
//				printf("N\n");
//				goto again;
//			}
//		}
//		if(s[0] < 48 || s[0]>50)
//		{
//			printf("N\n");
//			goto again;
//		}
//		if(s[0]=50&&s[1]>53&&s[1]!='.')
//		{
//			printf("N\n");
//			goto again;
//		}
//		if(s[0]==50&&s[1]==53&&s[2]>53&&s[2]!='.')
//		{
//			printf("N\n");
//			goto again;
//		}
//		int flag = 0; int count = 1;
//		for (int i = 1; i < len; i++)
//		{
//			if (count > 3)
//			{
//				printf("N\n");
//				goto again;
//			}
//			if (flag)
//			{
//				if (s[i] < 48 || s[i]>50&&s[i+1]!='.'&&s[i+1]!='\0' && s[i + 2] != '.' && s[i + 2] != '\0')
//				{
//					printf("N\n");
//					goto again;
//				}
//				else if (s[i] == 50)
//				{
//					if (s[i + 1] > 53&&s[i+1]!='.'&&s[i+2]!='.'&&s[i+1]!='\0')
//					{
//						printf("N\n");
//						goto again;
//					}
//					else if (s[i + 1] == 53 && s[i + 1] != '.' && s[i + 2] != '.'&&s[i+1]!='\0')
//					{
//						if (s[i + 2] > 53)
//						{
//							printf("N\n");
//							goto again;
//						}
//					}
//					flag = 0;
//				}
//				else
//					flag = 0;
//			}
//			if (s[i] == '.')
//			{
//				flag = 1;
//				count = 0;
//			}
//			else
//				count++;
//		}
//		printf("Y\n");
//	}
//}


//int main()
//{
//	int H, h, M, m, S, s,Ho=0,Mo=0,So=0;
//	while (scanf("%d:%d:%d %d:%d:%d", &H, &M, &S, &h, &m, &s) != EOF)
//	{
//
//		if (S < s)
//		{
//			So = S - s + 60;
//			M--;
//		}
//		else
//			So = S - s;
//		if (M < m)
//		{
//			Mo = M - m + 60;
//			H--;
//		}
//		else
//			Mo = M - m;
//		Ho = H - h;
//		printf("%02d:%02d:%02d\n", Ho, Mo, So);
//	}
//}


//int main()
//{
//	int L, R, k;
//	scanf("%d%d%d", &L, &R, &k);
//	int count = 0;
//	for (int i = L; i <= R; i++)
//	{
//		int j = i;
//		for (; j;)
//		{
//			if (j % 10 == k)
//			{
//				count++;
//			}
//			j /= 10;
//		}
//
//	}
//	printf("%d", count);
//}



//int main()
//{
//	int t;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int n; int sum = 1;
//		scanf("%d", &n);
//		for (int j = 2; j * j <= n; j++)
//		{
//
//
//			if (n % j == 0)
//				sum = sum + j + n / j;
//			if (j * j == n)
//				sum -= n / j;
//
//		}
//		printf("%d\n", sum);
//
//	}
//}




//int main()
//{
//	char str[80] = { 0 };
//	while (gets(str) != NULL)
//	{
//		int len = strlen(str);
//		for (int i = 0; i < len; i++)
//		{
//			if (str[i] >= 65 && str[i] <= 90)
//			{
//				str[i] = 155 - str[i];
//			}
//			if (str[i] >= 97 && str[i] <= 122)
//			{
//				str[i] = 219 - str[i];
//			}
//		}
//		
//			printf("%s\n", str);
//		
//	}
//}



//int main()
//{
//	int L, R;
//	while (scanf("%d%d", &L, &R) != EOF)
//	{
//		int count=0;
//		
//		for (int i = L; i <= R; i++)
//		{
//			if (i == 1)
//				continue;
//			if (i == 2||i==3)
//			{
//				count++;
//				continue;
//			}
//			int flag = 1; 
//			for (int j = 2; j  <i; j++)
//			{
//				if (i % j == 0)
//					flag = 0;
//			}
//			if (flag)
//			{
//				if (i < 10)
//					count++;
//				if (i < 100 && i % 11 == 0)
//					count++;;
//				if (i > 100)
//				{
//					if (i % 10 == i / 100)
//						count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//}