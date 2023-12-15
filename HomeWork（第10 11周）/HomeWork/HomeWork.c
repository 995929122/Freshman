#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//1009		打印字符树
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int m = 0; m < i; m++)
//			{
//				printf("%c", 64 + i);
//			}
//			printf("\n");
//		}
//	}
//}



//打印沙漏
//int main()
//{
//	int n;
//	char m;
//	while (scanf("%d %c", &n, &m) != EOF)
//	{
//		int sum = 1; int j = 1, q = 1, i = 1;
//		while (sum <= (n + 1) / 2)
//		{
//
//			i = i + 2;
//			sum += i;
//			j = i - 2;
//			q = i - 2;
//		}
//		for (; j >= 1; j = j - 2)
//		{
//			for (int i = 1; i <= (q - j) / 2; i++)
//				printf(" ");
//			for (int i = 1; i <= j; i++)
//				printf("%c", m);
//
//			printf("\n");
//		}
//		for (j = 3; j <= q; j = j + 2)
//		{
//			for (int i = 1; i <= (q - j) / 2; i++)
//				printf(" ");
//			for (int i = 1; i <= j; i++)
//				printf("%c", m);
//			printf("\n");
//		}
//		printf("%d\n", n + 1 - 2 * (sum - i));
//	}
//	return 0;
//}


//1458  鸽兔同源
//int main()
//{
//	double n, m;
//		
//	while (scanf("%lf%lf", &n, &m))
//	{
//		if (m == 0 && n == 0)
//			return 0;
//		if ((int)m % 2 == 1||m>4*n||m==0||n==0||m==n||m<2*n)
//		{
//			printf("Error\n");
//			continue;
//		}
//		printf("%.0lf %.0lf\n", n - ((m - n * 2) / 2), (m - n * 2) / 2);
//	}
//	return 0;
//}


//跳台阶
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int n; double result = 1;
//		scanf("%d", &n);
//		for (int m = 1; m < n; m++)
//		{
//			result *= 2;
//		}
//		printf("%.0lf\n", result);
//	}
//	return 0;
//}


//数字统计
//int main()
//{
//	unsigned int L,R,k,count=0;
//	scanf("%d%d%d", &L, &R, &k);
//	
//	for (unsigned int i = L; i <= R; i++)
//	{
//		for (int j = i; j != 0; j /= 10)
//		{
//			if (j % 10 == k)
//				count++;
//		}
//	}
//	printf("%d", count);
//}



//斐波那契数列
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int start1 = 0, start2 = 1;
//	printf("0, 1");
//	for (int i = 2; i < n; i++)
//	{
//		int mid = start2;
//		start2 += start1;
//		start1 = mid;
//		printf(", %d", start2);
//		
//	}
//}


//无脑特定字母大小写
//1657
//int main()
//{
//	char str[40] = "0";
//	while (scanf("%s", str) != EOF)
//	{
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'e')
//			{
//				str[i] = 'E';
//				continue;
//			}
//			if (str[i] == 'r')
//			{
//				str[i] = 'R';
//				continue;
//			}
//			if (str[i] == 'n')
//			{
//				str[i] = 'N';
//				continue;
//			}
//			if (str[i] == 'M')
//			{
//				str[i] = 'm';
//				continue;
//			}
//			if (str[i] == 'I')
//			{
//				str[i] = 'i';
//				continue;
//			}
//			if (str[i] == 'K')
//			{
//				str[i] = 'k';
//				continue;
//			}
//			if (str[i] == 'A')
//			{
//				str[i] = 'a';
//				continue;
//			}
//			if (str[i] == 'S')
//			{
//				str[i] = 's';
//				continue;
//			}
//		}
//		printf("%s\n", str);
//	}
//
//}


//整钞换零
//int main()
//{
//	int n = 0;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		int cnt = 0;
//		for (int i = 1; i <= (n - 3) / 5; i++)
//		{
//			for (int j = 1; j <= (n - 6) / 2; j++)
//			{
//				for (int k = 1; k <= n - 7; k++)
//				{
//					if (5 * i + 2 * j + k == n)cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}


//输出反向数字
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a < 0)
//		{
//			a = -a;
//			printf("-");
//		}
//		for(;a % 10 == 0;)
//			a /= 10;
//		for (; a !=0;)
//		{
//			
//			printf("%d", a % 10);
//			a /= 10;
//		}
//		printf("\n");
//	}
//}



//简单的质因数分解
//int main() {
//	int n;
//	while (scanf("%d", &n) != EOF) 
//	{
//		int an = 0;
//		for (int i = 2; i * i <= n; i++) 
//		{
//			if (n % i == 0)
//			{
//				int count = 0;
//				while (n % i == 0)
//				{
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
//		else 
//		{
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
//	for (int i = 0; i < n; i++)
//	{
//		int m;
//		scanf("%d", &m);
//		int add=0;
//		for (int j = 0; j < m; j++)
//		{
//			int num = 0;
//			scanf("%d", &num);
//			add += num;
//		}
//		printf("%d\n", add);
//		printf("\n");
//	}
//}




//打印圣诞树
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++)
//	{
//		char ch;
//		getchar();
//		scanf("%c", &ch);
//		int m = 0;
//		for (int j = 0; j < (ch - 64);j++)//判断运行次数
//		{
//			
//			for (int k = 0; k < (ch - 64); k++)//打印第一行
//			{
//				printf(" "); 
//			}
//			printf("%c\n", 65 + m);
//			
//			for (int p=ch-65-m;p>0;p-- )//打印第二行
//			{
//				printf(" ");
//			}
//		
//			for (int q = 0; q < 3+2*m;q++)
//				printf("%c", 65 + m);
//			m++;
//			printf("\n");
//		}
//	}
//}


//基本操作 
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	double average = 0, add = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int np = 0; int counts = 0;
//	int max = arr[0], min = arr[0];
//	for (int j = 0; j < n / m + 1; j++)
//	{
//		for (int k = 0; k < m; k++)
//		{
//			if (counts==n)
//			{
//				if(k!=0)
//					printf("\n");
//				goto again;
//				
//			}
//			else if (k == m - 1)
//			{
//				printf("%d\n", arr[np]);
//				counts++;
//				np++;
//			}
//			else
//			{
//				printf("%d ", arr[np]);
//				counts++;
//				np++;
//			}
//
//		}
//
//		
//	}
//again:
//	for (int i = 1; i < 100; i++)
//	{
//		if (arr[i] == 0)
//			break;
//		else
//			max = max > arr[i] ? max : arr[i];
//	}
//	for (int i = 1; i < 100; i++)
//	{
//		if (arr[i] == 0)
//			break;
//		min = min < arr[i] ? min : arr[i];
//	}
//	printf("max:%d\nmin:%d\n", max, min);
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			add += arr[i];
//			count++;
//		}
//		else break;
//	}
//	average = add / count;
//	printf("average:%lf", average);
//
//}



//int main()
//{
//	int n = 0, arr[1000] = {0}, a = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//			scanf("%d", &arr[i]);
//		scanf("%d", &a);
//		for (int i = 0; i < 1000; i++)
//		{
//			if (n == i)
//			{
//				printf("-1\n");
//				break;
//			}
//
//			else if (arr[i] == a)
//			{
//				printf("%d\n", i + 1);
//				break;
//			}
//			
//		}
//	}
//}


//int main()
//{
//	int n = 0;
//	long long int arr[50][50] = { 0 };int  i, j;
//	while (scanf("%d", &n) != EOF)
//	{
//
//		for (i = 0; i < 50; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if (i == j || j == 0)
//				{
//					arr[i][j] = 1;
//				}
//				else
//				{
//					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			
//		for (j = 0;j<=i; j++)
//			{
//				if (arr[i][j] == 0)
//				{
//					break; j++;
//				}
//				if (j == i)
//					printf("%lld", arr[i][j]);
//				else 
//					printf("%lld ", arr[i][j]);
//				
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}



//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		long long int arr[50][50];
//		for (int i = 0; i < n; i++)
//		{
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//		}
//		for (int i = 2; i < n; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j < i)
//					printf("%lld ", arr[i][j]);
//				else printf("%lld", arr[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}








//int main()
//{
//    int n;
//    int last;
//    while (scanf("%d", &n) != EOF)
//    {
//        last = 2;
//        int day[7] = { 0 };
//        for (int i = 1900; i <= 1900 + n - 1; i++)
//        {
//            for (int j = 1; j <= 12; j++)
//            {
//                if (j == 2 || j == 4 || j == 6 || j == 8 || j == 9 || j == 11 || j == 1)
//                {
//                    if (last + 3 < 7)
//                    {
//                        day[last + 3]++;
//                        last += 3;
//                    }
//                    else
//                    {
//                        day[last + 3 - 7]++;
//                        last = last + 3 - 7;
//                    }
//                }
//                else if (j == 3)
//                {
//                    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//                    {
//                        if (last + 1 < 7)
//                        {
//                            day[last + 1]++;
//                            last += 1;
//                        }
//                        else
//                        {
//                            day[last + 1 - 7]++;
//                            last = last + 1 - 7;
//                        }
//                    }
//                    else
//                    {
//                        day[last]++;
//                    }
//                }
//                else {
//                    if (last + 2 < 7)
//                    {
//                        day[last + 2]++;
//                        last += 2;
//                    }
//                    else
//                    {
//                        day[last + 2 - 7]++;
//                        last = last + 2 - 7;
//                    }
//                }
//            }
//
//        }
//        printf("%d %d %d %d %d %d %d\n", day[5], day[6], day[0], day[1], day[2], day[3], day[4]);
//    }
//}


//int main()
//{
//	int n,add=0,num=0;
//	while (scanf("%d", &n) )
//	{
//		if (n == 0)
//			return 0;
//		add = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &num);
//			add += num;
//		}
//		printf("%d\n", add);
//	}
//}



//int Function(int x)
//{
//	if (x < 1)
//	{
//		return x * x;
//	}
//	if (x >= 1 && x < 10)
//		return 2 * x - 1;
//	if (x >= 10)
//		return 3 * x - 12;
//}
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		printf("%d\n", Function(x));
//	}
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n))
//	{
//		int add = 0;
//		if (n == 0)
//			return 0;
//		else
//		{
//			for (; n != 0;)
//			{
//				if (n % 16 < 10)
//					add += n % 16;
//				n /= 16;
//			}
//			printf("%d\n", add);
//		}
//	}
//}




//int main()
//{
//	int a=0,b=0,c=0,d=0;
//	char ch = 0;
//	while (scanf("%d/%d%c%d/%d", &a,&b,&ch,&c,&d) != EOF)
//	{
//		int e, f,i;
//		if(ch=='+')
//			e = a * d + c * b;		//分子
//		else
//			e = a * d - c * b;
//		f = b * d;				//分母
//		if (e == 0)
//			printf("0\n");
//		if (e > 0)
//		{
//			for (i = e; i >= 1; i--)
//			{
//				if (e % i == 0 && f % i == 0)						//化简分数的算法
//				{
//					e /= i;
//					f /= i;
//				}
//			}
//		}
//		else
//		{
//			for (i = -e; i >= 1; i--)
//			{
//				if (e % i == 0 && f % i == 0)						//化简分数的算法
//				{
//					e /= i;
//					f /= i;
//				}
//			}
//
//		}
//		if ((float)e / f > 0 && (float)e / f < 1)
//		{
//			printf("%d/%d\n", e, f);
//		}
//		if (e == f || f == 1)
//		{
//			printf("%d\n", e / f); continue;
//		}
//		if (e / f >= 1)
//		{
//			int i =0;
//			for ( i = 0; i < e / f; )
//				i++;
//			printf("%d+%d/%d\n", i, e - i * f,f);
//		}
//		
//		if ((float)e / f < 0 && (float)e / f>-1)
//		{
//			printf("%d/%d\n", e, f);
//		}
//		if (e == -f)
//			printf("-1\n");
//		if (e / f <=-1)
//		{
//			int i = 0;
//			for (; i > (float)e / f; i--)
//				;
//			printf("%d+%d/%d\n", i,-(f- f - e + i * f), f);
//		}
//		
//	}
//}



//int LOW(int n)
//{
//	int num = n - 1;
//	again:
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			num--;
//			goto again;
//		}
//	}
//	return num;
//}
//int HIGH(int n)
//{
//	int num = n+1;
//	again:
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			num++;
//			goto again;
//		}
//	}
//	return num;
//}
//int main()
//{
//	int n; int output=0,lower=0,higher=0;
//	again:
//	while (scanf("%d", &n) != EOF)
//	{
//		//判断素数输出0
//		if (n == 2||n==3)
//		{
//			printf("0\n");
//		}
//		else 
//		{
//			//判断素数输出0
//			int i = 2;
//			for ( i = 2; i <= sqrt(n); i++)
//			{
//				if (n % i == 0)
//					break;
//			}
//			if (i > sqrt(n))
//			{
//				printf("0\n"); goto again;
//			}
//			lower = LOW(n);
//			higher = HIGH(n);
//			output = higher - lower;
//			printf("%d", output);
//		}
//	}
//}




//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100001] = { 0 };
//	int m, max;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &m);
//		arr[m]++;
//	}
//	max = arr[1];
//	int x;
//	for (int i = n; i >= 1; i--)
//	{
//		max = arr[i] >= max ? arr[i] : max;
//		if (arr[i] == max)
//			x = i;
//	}		
//	printf("%d\n%d\n", x, max);
//
//}






//int main()
//{
//	int n = 0;
//
//	while (scanf("%d", &n) != EOF)
//	{
//		int flag = 0;
//		if (n == 0)break;
//		else
//		{
//			while (pow(3, flag) < n)
//			{
//				flag++;
//
//
//			}
//			printf("%d\n", flag);
//		}
//	}
//	return 0;
//
//}

//int main() {
//	long long n, i = 0;
//	while (scanf("%lld", &n) != EOF) {
//		if (n == 0) {
//			break;
//		}
//		else if (n == 1) {
//			printf("0\n");
//		}
//		i = 1;
//		while (pow(3, i) < n)
//		{
//			i++;
//		}
//		printf("%d\n", i);
//	}
//}



//我版
//int main()
//{
//	char str[10000] = { 0 };
//	
//	while (scanf("%s", str) != EOF)
//	{
//		int R = 0, G = 0, B = 0;
//		int i=0; int countR_G = 0, countR_B = 0, countG_R = 0, countG_B = 0, countB_R = 0, countB_G = 0;
//		int num = 0;
//		for (i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'R')
//				R++;
//			if (str[i] == 'G')
//				G++;
//			if (str[i] == 'B')
//				B++;
//		}
//		int j=0;
//		for (j = 0; j < R; j++)
//		{
//			if (str[j] == 'G')
//				countR_G++;
//			if (str[j] == 'B')
//				countR_B++;
//		}
//		for (j; j < R + G; j++)
//		{
//			if (str[j] == 'R')
//			{
//				countG_R++;
//			}
//			if (str[j] == 'B')
//			{
//				countG_B++;
//			}
//		}
//		for (j; j < R + G + B; j++)
//		{
//			if (str[j] == 'R')
//			{
//				countB_R++;
//			}
//			if (str[j] == 'G')
//			{
//				countB_G++;
//			}
//		}
//		for (; countR_G != 0 && countG_R != 0;)
//		{
//			countR_G--; countG_R--;
//			num++;
//		}
//		for (; countR_B != 0 && countB_R != 0;)
//		{
//			countR_B--; countB_R--;
//			num++;
//		}
//		for (; countG_B != 0 && countB_G != 0;)
//		{
//			countB_G--; countG_B--;
//			num++;
//		}
//		num += (countR_G + countR_B + countG_R + countG_B + countB_R + countB_G) / 3 * 2;
//		printf("%d\n", num);
//	}
//
//}



//网版
//int min(int x, int y)
//{
//	return x >= y ? y : x;
//}
//int main()
//{
//	char arr[10001];
//	while (scanf("%s", arr) != EOF)
//	{
//		int R = 0, G = 0, B = 0;
//
//		for (int i = 0; i < strlen(arr); i++)
//		{
//			if (arr[i] == 'R') R++;
//			else if (arr[i] == 'G') G++;
//			else B++;
//		}
//
//		int R1 = 0, R2 = 0;
//		for (int i = 0; i < R; i++)
//		{
//			if (arr[i] == 'G') R1++;
//			else if (arr[i] == 'B') R2++;
//		}
//
//		int G1 = 0, G2 = 0;
//		for (int i = R; i < R + G; i++)
//		{
//			if (arr[i] == 'R') G1++;
//			else if (arr[i] == 'B') G2++;
//		}
//
//		int B1 = 0, B2 = 0;
//		for (int i = R + G; i < strlen(arr); i++)
//		{
//			if (arr[i] == 'R') B1++;
//			else if (arr[i] == 'G') B2++;
//		}
//		int sum = 0, temp = 0;
//		if (R1 && G1)
//		{
//			temp = min(R1, G1);
//			sum += temp;
//			R1 -= temp;
//			G1 -= temp;
//		}
//
//		if (R2 && B1)
//		{
//			temp = min(R2, B1);
//			sum += temp;
//			R2 -= temp;
//			B1 -= temp;
//		}
//
//		if (G2 && B2)
//		{
//			temp = min(G2, B2);
//			sum += temp;
//			G2 -= temp;
//			B2 -= temp;
//		}
//		sum += (R1 + R2 + G1 + G2 + B1 + B2) / 3 * 2;
//		printf("%d\n", sum);
//	}
//}



//int main() {
//    int n;
//    printf("请输入一个整数n：");
//    scanf("%d", &n);
//
//
//    for (int i = 1; i <= n; i++) {
//        // 打印前面的空格
//        for (int j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//
//        // 打印字母
//        for (int j = 1; j <= i; j++) {
//            char letter = 'A' + j - 1;
//            printf("%c", letter);
//        }
//
//        // 打印字母（逆序）
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
//int main() {
//    int n;
//    printf("请输入金字塔的行数: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < (n - i - 1); j++) {
//            printf(" "); // 打印空格，用于形成金字塔形状
//        }
//        char ch = 'A';
//        for (int j = 0; j <= i; j++) {
//            printf("%c", ch + j); // 顺序打印字母
//        }
//        for (int j = i - 1; j >= 0; j--) {
//            printf("%c", ch + j); // 逆序打印字母
//        }
//        printf("\n");
//    }
//    return 0;
//}




//int main() {
//    int n, coef = 1;
//
//    printf("请输入要输出的行数 n: ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        for (int space = 1; space <= n - i; space++) {
//            printf("  "); // 打印空格，形成三角形状
//        }
//
//        for (int j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                coef = 1;
//            }
//            else {
//                coef = coef * (i - j + 1) / j;
//            }
//            printf("%4d", coef); // 以整齐的格式打印数字
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}





//int main() {
//    int n;
//
//    printf("请输入要输出的行数 n: ");
//    scanf("%d", &n);
//
//    long long  triangle[50][50] = {0};
//
//    for (int i = 0; i < n; i++) {
//        triangle[i][0] = 1; // 第一个数字为1
//        for (int j = 1; j <= i; j++) {
//            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1]; // 根据规律计算每行的值
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        //for (int space = 0; space < n - i - 1; space++) {
//        //    printf(" "); // 打印空格，形成三角形状
//        //}
//
//        for (int j = 0; j <= i; j++) {
//            printf("%lld ", triangle[i][j]); // 打印三角形数字，用空格分隔
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}
