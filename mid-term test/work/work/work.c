#define _CRT_SECURE_NO_WARNINGS



//#include<stdio.h>
//int main()
//{
//
//	unsigned int m;
//	while (scanf("%d", &m) != EOF)
//	{
//		unsigned int  x = 0;
//		if (m <= 36000)
//		{
//			x = m / 100 * 3;
//		}
//		if (m > 36000 && m <= 144000)
//		{
//			x = 1080 + (m - 36000) / 10;
//		}
//		if (m > 144000 && m <= 300000)
//			x = 11880 + (m - 144000) / 5;
//		if (m > 300000 && m <= 420000)
//			x = 43080 + (m - 300000) / 4;
//		if (m > 420000 && m <= 660000)
//			x = 73080 + (m - 420000) / 10 * 3;
//		if (m > 660000 && m <= 960000)
//			x = 145080 + (m - 660000) / 20 * 7;
//		if (m > 960000)
//			x = 250080 + (m - 960000) / 20 * 9;
//		printf("%d\n", x);
//	}
//}




//#include<stdio.h>
//
//int main()
//{
//	int h, m; char str[3] = { 0 };
//	while (scanf("%d:%d%s", &h, &m, str) != eof)
//	{
//		if ((str[0] == 'a' || str[0] == 'a') && h == 12 && m == 0)
//		{
//			printf("00:00\n");
//			continue;
//		}
//		if ((str[0] == 'p' || str[0] == 'p') && h == 12)
//		{
//			printf("%.2d:%.2d\n", h, m);
//			continue;
//		}
//		if ((str[0] == 'p' || str[0] == 'p') && h < 12)
//		{
//			h += 12;
//			printf("%.2d:%.2d\n", h, m);
//			continue;
//		}
//		if ((str[0] == 'a' || str[0] == 'a') && h == 12)
//		{
//			h -= 12;
//			printf("%.2d:%.2d\n", h, m);
//			continue;
//		}
//		printf("%.2d:%.2d\n", h, m);
//
//	}
//}



// #include<stdio.h>
//
//int main()
//{
//	long long int x, y;
//	while (scanf("%lld%lld", &x, &y) != EOF)
//	{
//		int count = 0, flag = 0;
//		long long int xl = 0, yl = 0;
//		for (; x || y;)
//		{
//			xl = x % 10;
//			yl = y % 10;
//			if ((xl + yl + flag) >= 10)
//			{
//				count++;
//				flag = 1;
//				
//			}
//			if ((xl + yl + flag) < 10)
//			{
//				flag = 0;
//				
//			}
//			x /= 10; y /= 10;
//		}
//		if (flag)
//		{
//			int max = x > y ? x : y;
//			if (max % 10 == 9)
//				count++;
//		}
//		printf("%d\n", count);
//	}
//}



//#include<stdio.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n, m;
//	while (scanf("%d%d", &n,&m) != EOF)
//	{
//		int num = 1;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				arr[i][j] = num;
//				num++;
//			}
//		}
//		//初始化魔方
//		char C; int x, y;
//		while (getchar() != '\n');
//		for (int i = 0; i < m; )
//		{
//			int move=0;
//			
//			scanf("%c %d %d",&C, &x, &y);
//			fflush(stdin);
//			if ((C == 'L' && C != '\n')&& C != ' ')
//			{
//				for (; y; y--)
//				{
//					move = arr[x - 1][0];
//					for (int j = 0; j < n; j++)
//					{
//
//						if (j == (n - 1))
//							arr[x - 1][j] = move;
//						else
//							arr[x - 1][j] = arr[x - 1][j + 1];
//					}
//				}i++;
//			}
//			if ((C == 'R' && C != '\n') && C != ' ')
//			{
//				for (; y; y--)
//				{
//					move = arr[x - 1][n - 1];
//					for (int j = n - 1; j >= 0; j--)
//					{
//
//						if (j == 0)
//							arr[x - 1][j] = move;
//						else
//							arr[x - 1][j] = arr[x - 1][j - 1];
//					}
//				}i++;
//			}
//			if ((C == 'U' && C != '\n') && C != ' ')
//			{
//				for (; y; y--)
//				{
//					move = arr[0][x - 1];
//					for (int j = 0; j < n; j++)
//					{
//
//						if (j == n - 1)
//							arr[j][x - 1] = move;
//						else
//							arr[j][x - 1] = arr[j + 1][x - 1];
//					}
//				}i++;
//			}
//			if ((C == 'D' && C != '\n') && C != ' ')
//			{
//				for (; y; y--)
//				{
//					move = arr[n - 1][x - 1];
//					for (int j = n - 1; j >= 0; j--)
//					{
//
//						if (j == 0)
//							arr[j][x - 1] = move;
//						else
//							arr[j][x - 1] = arr[j - 1][x - 1];
//					}
//				}i++;
//			}
//		}
//		
//		for(int i=0;i<n;i++)
//			for (int j = 0; j < n; j++)
//			{
//				if (i == n - 1 && j == n - 1)
//					printf("%d\n", arr[i][j]);
//				else
//					printf("%d ", arr[i][j]);
//			}
//	}
//}


//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n;
//	int arr[50] = {0};
//	arr[0] = 2;
//	int j = 3;
//	for (int i = 1; i < 50;)
//	{
//	
//		int k = 0;
//		for ( k = 2; k < sqrt(j); k++)
//		{
//			if (j % k == 0)
//			{
//				break;
//			}
//		}
//		if (k > sqrt(j))
//		{
//			arr[i] = j;
//			i++;
//		}
//		j++;
//	}
//	while (scanf("%d", &n) != EOF)
//	{
//		int ROW = arr[n - 1] + 1;
//		int COL = arr[n - 2] + 1;
//		if (n % 2 == 0)
//		{
//
//		}
//		else
//		{
//
//		}
//	}
//}

//#include<stdio.h>
//
//int main()
//{
//	int x;
//	while (scanf("%d", &x) != EOF)
//	{
//		switch (x)
//		{
//		case 1:
//			printf("  *\n / \\\n*---*\n");
//			break;
//		case 2:
//			printf("    *\n   / \\\n  *---*\n / \\\n*---*\n");
//			break;
//		case 3:
//			printf("    *\n   / \\\n  *---*\n / \\ /\n*---*\n");
//			break;
//		case 15:
//			printf("      *\n     / \\\n    *---*\n   / \\ / \\\n  *---*---*\n / \\ / \\\n*---*---*\n");
//			break;
//		}
//	}
//}

