#include<stdio.h>
#include<string.h>
int main()
{
	char str[100005];
	while(scanf("%s",str)!=EOF)
	{
		int a[50005],b[100005]={0},i=0,top=0,p;
		while(i<strlen(str))
		{
			if(str[i]=='(')
			{
				a[top++]=i+1;
			}
			if(str[i]==')')
			{
				p=a[--top];
				b[p]=i+1;
			}
			i++;
		}
		for(i=1;i<100001;i++)
		{
			if(b[i]) printf("%d %d\n",i,b[i]);
		}
	}
	return 0;
}
