#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			long long  m;
			scanf("%lld", &m);
			sum += m;
		}
		if ((n % 2) == 0 || (sum % 2) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}




//int main()
//{
//	int T=0;
//	scanf("%d", & T);
//	for (int i = 0; i < T; i++)
//	{
//		int  num, m; int arr[6] = { 0 };
//		scanf("%d%d", &num,&m);
//		for (int j = 0; j < 6; j++)
//		{
//			arr[num % 10 - 1]++;
//			num /= 10;
//		}
//		for (int q = 1; q <= m; q++)
//		{
//			int n, k;
//			scanf("%d%d", &n, &k);
//			if (k == 1 && n == arr[0])
//			{
//				printf("%d:true\n", q);
//				continue;
//			}
//			if (n <= arr[0])
//			{
//				printf("%d:true\n", q);
//				continue;
//
//			}
//			if ((n <= arr[k - 1] || n <= (arr[k - 1] + arr[0])) && k != 1)
//			{
//				printf("%d:true\n", q);
//				continue;
//			}
//			else
//				printf("%d:false\n", q);
//		}
//		if(i!=T-1)
//			printf("\n");
//	}
//}


