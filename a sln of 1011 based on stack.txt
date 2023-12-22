int main()
{
	char str[10000] = { 0 };
	scanf("%s", str);
	char a[10000] = { 0 };
	int top = 0;
	a[0] = str[0]; int i;
	for (i = 1; i <= strlen(str); i++)
		if (a[top] == str[i])	top--;
		else a[(++top)] = str[i];
	for (int j = 0;  j< top; j++)
		printf("%c", a[j]);
}
//基于堆栈解决问题1011——相邻相同字母删除;