int max(int x, int y)
{
	if (x > y)
		return x;
	else return y;
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		
		int ans = 0;
		int arr[105][105] = { 0 };
		int dp[105][105] = { 0 };
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		if (n == 1)
			printf("%d\n", arr[0][0]);
		else
		{
			dp[0][0] = arr[0][0];
			for (int i = 1; i < n; i++)
			{
				dp[i][0] = dp[i - 1][0] + arr[i][0];
			}
			for (int i = 1; i < n; i++)
			{
				for (int j = 1; j < i + 1; j++)
				{
					dp[i][j] = max((dp[i - 1][j] + arr[i][j]), (dp[i - 1][j - 1] + arr[i][j]));
				}
			}
			for (int i = 1; i < n; i++)
			{
				for (int j = 0; j < i + 1; j++)
				{
					ans = max(dp[i][j], ans);
				}
			}
			printf("%d\n", ans);
		}
	}
}
