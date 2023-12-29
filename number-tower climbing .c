// 小南在CSU的某个角落发现了一座由数字组成的斜塔，他I想到塔顶去看看。小南可以从底层任意一个数字出发逐层爬上去，每次可以爬至上一层数字上或者上一层左边相邻的数字上（第1列只能爬至正上方上一层的数字上）。
// 7
// 3 8
// 8 1 0 
// 2 7 4 4
// 4 5 2 6 5
// 如上图，小南如果从最下层也就是第5层的数字4向上爬，只能爬到上一层即第4层的2号数字上；如果从数字2爬，可以爬到其正上方的数字4上，也可以爬到数字7上；如果从最右边的数字5爬，则只能爬到其左上方的数字4上。

// 现在小南想知道，他从最下层开始爬到塔顶，如何选择爬上去的路径，使该路径经过的数字和最大？

// #

#include<stdio.h>
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



///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#include<stdio.h>


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        
        int arr[105][105];int ans=0;
        int dp[105][105]={0};
        int i=0,j=0;
        for(i=0;i<n;i++)
            for(j=0;j<=i;j++)
                scanf("%d",&arr[i][j]);
        dp[0][0]=arr[0][0];
        if(n==1)
            printf("%d",arr[0][0]);
        else
        {
            for(i=1;i<n;i++)
            dp[i][0]=dp[i-1][0]+arr[i][0];
        for(i=1;i<n;i++)
            for(j=1;j<=i;j++)
            {
                dp[i][j]=(dp[i-1][j]+arr[i][j])>(dp[i-1][j-1]+arr[i][j])?(dp[i-1][j]+arr[i][j]):(dp[i-1][j-1]+arr[i][j]);
            }
        for(i=0;i<n;i++)
            for(j=0;j<=i;j++)
                ans=ans>dp[i][j]?ans:dp[i][j];
        printf("%d\n",ans);
        }
    }
}
