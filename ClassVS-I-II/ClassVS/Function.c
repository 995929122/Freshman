#define _CRT_SECURE_NO_WARNINGS 1
//���Դ�ļ�ʵ�ֺ�����ʵ��

//�����Ķ���
int Add(int x, int y)				//��Ӧ II �еĺ��������Ͷ��������
{
	int z = x + y;
	return z;
}
int Jiecheng(int n)
{
	int ret = 1;
	if (n != 1)
		ret = n * Jiecheng(n - 1);			// �ݹ����׳�
	return ret;

}
int Fib(int n)
{
	int a = 1, b = 1, c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b; b = c;
		n--;
	}
	return c;
}