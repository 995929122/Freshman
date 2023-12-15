#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	char str[100000] = {0};
//	while (scanf("%s", str) != EOF)
//	{
//		int Num_C = 0, Num_S = 0, Num_U = 0;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'C')
//			{
//				Num_C++;
//				continue;
//			}
//			if (str[i] == 'S')
//			{
//				Num_S++;
//				continue;
//			}
//			if (str[i] == 'U')
//			{
//				Num_U++;
//				continue;
//			}
//		}
//		int min = 0;
//		min = Num_C < Num_S ? Num_C: Num_S;
//		min = min < Num_U ? min : Num_U;
//		printf("%d\n", min);
//	}
//}



//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			n /= 5;
//			count += n;
//		}
//		printf("%d\n", count);
//	}
//}


//int main()
//{
//	int T;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int lines, space = 0;
//		scanf("%d", &lines);
//		space = lines - 1;
//		for (int j = 0; j < space; j++)
//		{
//			printf("-");
//		}			//打印上边沿
//		printf("\n");
//		for (int j = 0; j < space; j++)
//		{
//			if (j == 0)
//				printf("\\");
//			else if (j == space - 1)
//				printf("/\n");
//			else
//				printf(" ");
//		}				//打印首行
//		int tmp = space - 1; int count = 1;
//		for (int j = 0; j < (lines - 2) / 2 - 1; j++)
//		{
//			int k = 0;
//			for (; k <= count; k++)
//			{
//				if (k == count)
//					printf("\\");
//				else
//					printf(" ");
//			}
//			for (; k < tmp; k++)
//			{
//				if (k == tmp - 1)
//					printf("/\n");
//				else
//					printf("*");
//			}
//			tmp--; count++;//打印上半部分
//		}
//		tmp++; count--;
//		int mid = space / 2 ;
//		for (int q = 0; q < (lines - 2) / 2; q++)
//		{
//			int k = 0; int check = 0;
//			for (; k <= count; k++, check++)
//			{
//				if (k == count)
//					printf("/");
//				else
//					printf(" ");
//			}
//			for (; k < tmp; k++, check++)
//			{
//				if (check == mid)
//					printf("*");
//				else if (k == tmp - 1)
//				{
//					printf("\\");
//					printf("\n");
//				}
//				else
//					printf(" ");
//			}
//			tmp++; count--;
//		}
//		for (int j = 0; j < space; j++)
//		{
//			printf("-");
//		}
//		printf("\n\n");
//	}
//}



//int main()
//{
//	
//	unsigned int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int H = 0, M = 0;
//		H = n / 3600;
//		n %= 3600;
//		M = n / 60;
//		n %= 60;
//		printf("%d:%d:%d\n", H, M, n);
//	}
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n; char str[1000] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		scanf("%s", str);
//		int l = 0, r = 0;
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'L')
//				l++;
//			if (str[i] == 'R')
//				r++;
//		}
//		if (l == r)
//			printf("N\n");
//		else if (r > l)
//		{
//			r -= l;
//			r %= 4;
//			switch(r)
//			{
//			case 0:
//				printf("N\n");
//				break;
//			case 1:
//				printf("E\n");
//				break;
//			case 2:
//				printf("S\n");
//				break;
//			case 3:
//				printf("W\n");
//			}
//		}
//		else
//		{
//			l -= r;
//			l %= 4;
//			switch (l)
//			{
//			case 0:
//				printf("N\n");
//				break;
//			case 1:
//				printf("W\n");
//				break;
//			case 2:
//				printf("S\n");
//				break;
//			case 3:
//				printf("E\n");
//			}
//		}
//	}
//}



//int main()
//{
//	char str[1050] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'T')
//				printf("U");
//			else
//				printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//}



//int main()
//{
//	long long int arr[91] = { 1,2,0 };
//	for (int i = 2; i < 91; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	long long int x;
//	while (scanf("%lld", &x) != EOF)
//	{
//		for (int i = 0; i < 91; i++)
//		{
//			if (arr[i] == x)
//			{
//				printf("%d\n", i + 1);
//				break;
//			}
//			else if (arr[i] > x)
//			{
//				printf("0\n");
//				break;
//			}
//		}
//	}
//
//}



//int main(void)
//{
//	long long a[30][30];
//	long long b[435] = { 2,3,0 };
//	int k = 5;
//	for (int j = 2; j < 435; )
//	{
//		int flag = 1;
//		for (int i = 2; i <= sqrt(k); i++)
//		{
//			if (k % i == 0)	
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			b[j] = k; j++;
//		}
//		k += 2;
//	}
//
//	int i, j, n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0; i < 30; i++)                                  //初始化数组
//		{
//			for (j = 0; j < 30; j++)
//				a[i][j] = 0;
//		}
//		for (i = 0; i < n; i++)                                  //使数组的第一列都为1
//			a[i][0] = 1;
//		for (i = 1; i < n; i++)                                  //第i行j列元素等于第i-1行j列和第i-1行j-1列元素的和
//			for (j = 1; j <= i; j++)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		int num = 0;
//		for (i = 0; i < n; i++)                                  //输出杨辉三角形
//		{
//			for (j = 0; j <= i; j++)
//				printf("%lld ", a[i][j]);
//			for (j; j < n; j++)
//			{
//				if (j == n - 1)
//				{
//					printf("%lld", b[num]);
//					num++;
//				}
//				else
//				{
//					printf("%lld ", b[num]);
//					num++;
//				}
//			}
//			printf("\n");
//		}printf("\n");
//	}
//	
//}


//#include<stdio.h>
//#include<string.h>
//char num[1001] = { 0 };
//int main()
//{
//	
//
//	while (scanf("%s", num) != EOF)
//	{
//		int num1[1001] = { 0 };
//		int num2[1001] = { 0 };
//		int num3[1001] = { 0 };
//		if (num[0] == '-')
//		{
//			for (int i = 0; i < strlen(num); i++)
//			{
//				num[i] = num[i + 1];
//			}
//			
//			int len = strlen(num);
//			for (int i = 0; i < len; i++)
//			{
//				num1[i] = num[i] - 48;
//			}
//			int temp = len;
//			for (int i = 0; i < len; i++)
//			{
//				num2[i] = num1[temp - 1];
//				temp--;
//			}
//			for (int i = len; i > 0; i--)
//			{
//				if (num1[i - 1] + num2[i - 1] > 9)
//				{
//					num3[i] += num1[i - 1] + num2[i - 1] - 10;
//					num3[i - 1]++;
//				}
//				else
//					num3[i] += num1[i - 1] + num2[i - 1];
//			}
//			printf("-");
//			for (int i = 0; i < len + 1; i++)
//			{
//				if (num3[i] == 0 && i == 0)
//				{
//					continue;
//				}
//				printf("%d", num3[i]);
//			}printf("\n");
//		}
//		else
//		{
//			
//			int len = strlen(num);
//			for (int i = 0; i < len; i++)
//			{
//				num1[i] = num[i] - 48;
//			}
//			int temp = len;
//			for (int i = 0; i < len; i++)
//			{
//				num2[i] = num1[temp - 1];
//				temp--;
//			}
//			for (int i = len; i > 0; i--)
//			{
//				if (num1[i - 1] + num2[i - 1] > 9)
//				{
//					num3[i] += num1[i - 1] + num2[i - 1] - 10;
//					num3[i-1]++;
//				}
//				else
//					num3[i] += num1[i - 1] + num2[i - 1];
//			}
//			for (int i = 0; i < len + 1; i++)
//			{
//				if (num3[i] == 0 && i == 0)
//				{
//					continue;
//				}
//				printf("%d", num3[i]);
//			}printf("\n");
//		}
//	}
//}

//int main()
//{
//	while (scanf("%s", n) != EOF)
//	{
//		int num[1001] = { 0 };
//		int len = strlen(n);
//		int key = 0;
//		if (n[0] == '-')
//		{
//			key = 1;
//			for (int i = 1; i < len; i++)
//				n[i - 1] = n[i];
//			len--;
//		}
//		for (int i = 0; i < len; i++)
//			num[i + 1] = n[i] - '0' + n[len - i - 1] - '0';
//		for (int i = len; i >= 1; i--)
//		{
//			num[i - 1] += num[i] / 10;
//			num[i] %= 10;
//		}
//		if (key)
//			printf("-");
//		if (num[0] != 0)
//			printf("%d", num[0]);
//		for (int i = 1; i <= len; i++)
//			printf("%d", num[i]);
//		printf("\n");
//	}
//}






//#include<stdio.h>
//void bubble_sort(int* arr, int sz)
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
//				flag = 0;
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
//	int arr[10000] = { 0 };
//	int n;
//	while (scanf("%d",&n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		bubble_sort(arr,n);
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] % 2 != 0 && j != n - 1)
//				printf("%d ", arr[j]);
//			if (arr[j] % 2 != 0 && j == n - 1)
//				printf("%d", arr[j]);
//
//		}printf("\n");
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] % 2 == 0&&j!=n-1)
//				printf("%d ", arr[j]);
//			if (arr[j] % 2 == 0 &&j==n-1)
//				printf("%d", arr[j]);
//		}printf("\n\n");
//		
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int n; int an[1000] = { 0 }; long long int target[1000] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &an[i]);
//		}
//		int m;
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%lld", &target[i]);
//		}
//		for (int i = 0; i < m; i++)
//		{
//			int j = 0;
//			int num = an[j];
//			for (; num < target[i];)
//			{
//				j++;
//				num += an[j];
//			}
//			printf("%d\n", j + 1);
//		}
//	}
//}



//int main()
//{
//	int h, m, s, n;
//	while (scanf("%d:%d:%d+%d", &h, &m, &s, &n) != EOF)
//	{
//		s += n;
//		if (s > 59)
//		{
//			m+=s/60;
//		}
//		s %= 60;
//		if (m > 59)
//		{
//			h+=m/60; m %=60;
//		}
//		h %= 24;
//		printf("%02d:%02d:%02d\n", h, m, s);
//	}
//}



//#include<stdio.h>
//int main()
//{
//	int n; double arr[1000] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%lf",&arr[i]);
//		}
//		double money=arr[0];
//		for (int i = 1; i < n; i++)
//		{
//			if (money < 10)
//			{
//				money += arr[i];
//				continue;
//			}
//			if (money >= 10 && money < 15)
//			{
//				money += arr[i] * 0.8;
//				continue;
//			}
//			if (money >= 15 && money < 40)
//			{
//				money += arr[i] * 0.5;
//				continue;
//			}
//			if (money >= 40)
//			{
//				money += arr[i];
//				continue;
//			}
//		}
//		if (money >= 100)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//}




//int main()
//{
//	char ch[30] = { 0 };
//	while (scanf("%s", ch) != EOF)
//	{
//		long double result=0; int num[30] = { 0 };
//		for (int i = 0; i < strlen(ch); i++)
//		{
//			num[i] = ch[i] - 96;
//		}
//		double M = 1;
//		for (int i = 0; i < strlen(ch); i++)
//		{
//			M = 1;
//			for (int j = 1; j <= i + 1; j++)
//			{
//				M *= 10;
//			}
//			if ((i + 1) % 2 == 0)
//				result += num[i] * M;
//			if ((i + 1) % 2 != 0)
//				result -= num[i] * M;
//		}
//		result /= M*10;
//		int n = strlen(ch);
//		printf("%.*lf\n",n, result);
//	}
//}
 