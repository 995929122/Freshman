//%x -打印16进制数字
	//%o -打印八进制数字

//fflush（stdin）清空键盘缓冲区
	// while (getchar() != '\n');也能起到一样的效果

//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	return gcd(b, a % b);				//辗转相除判断是否互质
//}

//			for ( i = e; i >= 1; i--)
//			{
//				if (e % i == 0 && f % i == 0)						//化简分数的算法
//				{
//					e /= i;
//					f /= i;
//				}
//			}

//(1) % *d(意义：肯定会输出全部，根据实际情况补空格)
//(2) % .*d(意义：肯定会输出结果，根据实际在前面补0)
//(3) % *f(意义：肯定会输出全部，根据实际补空格)
//(4) % .*f(意义：指定小数点后面几位，跟 % .nf是一样的)
//(5) % *s(意义：也是根据实际情况在前面加空格)
//(6) % .*s(意义：指定截取前面几位数)

//		system("cls");			//执行系统命令的一个函数-cls - 清空屏幕

//for (i = 100; i <= 200; i++)
//	{
//		//判读i是否为素数
//		//素数判断的规则
//		//1. 试除法
//		//产生2->i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}

//辗转相除法求最大公约数
//int main()
//{
//	int u, v;
//	scanf("%d %d", &u, &v);
//	while (v != 0)
//	{
//		int tmp = u % v;
//		u = v;
//		v = tmp;
//	}
//	printf("%d", u);
//	return 0;
//
//}

//srand((unsigned int)time(NULL));
//ret = rand() % 100 + 1;//生成1-100之间随机数

//输出二进制数(网上扒拉的  重点看第二种方法)
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[33] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		
//		for (i = 1; i <= sizeof(int) * 8; i++)
//		{
//			arr[i] = n % 2;
//			n /= 2;
//		}
//		
//		int k = 0;
//		
//		for (k = i - 1; k >= 1; k--)
//		{
//			printf("%d", arr[k]);
//		}
//
//		printf("\n");
//		return 0;
//	}
//}
//int main()
//{
//	int n = 5;//0000000101
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int k = 1 << 31;
//
//		for (i = 0; i < sizeof(int) * 8; i++)
//		{
//			printf("%d", -((n & k) >> 31));
//			n <<= 1;
//		}
//
//		printf("\n");
//		
//	}
//}

//toupper()       小写转大写的库函数

//检查数中重复出现的数字
//Enter a number：232
//d[10]={0}
//d[i]=1/0 某数出现之后便置1
//while (x != 0)
//{
//	if (d[x % 10] == 1)
//		break;
//	d[x % 10] = 1;
//	x /= 10;
//}
//while (x != 0)
//{
//	d[x % 10] ++;			//要求找出所有重复数字和重复的次数
//	x /= 10;
//}
//for (i = 0; i < 10; i++)		
//{
//	if (d[i]>1)
//		printf("%d%d", i, d[i]);
//}


//质因数分解
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    int k = 2;					  //k从第一个素数开始
//    while (k <= n) 
//    {
//        if (n % k == 0) 
//        {                         //如果k是n的因数
//            printf("%d\n", k);    //将k输出
//            n /= k;               //此时n变为n/k，继续循环查找n的质因数
//        }
//        else
//            k++;                  //如果此时k不是n的因数，将k值加1
//    }
//    return 0;
//}

//汉诺塔问题		2^n-1
//void move(int x, int y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
//		move(a, c);//将A座上最后一个盘子移向C座
//		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
//	}
//}
////move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//青蛙跳台阶
//一个斐波那契问题
//1 2 3 5 8


//abs 返回绝对值

//删除字符串中重复相邻元素
//int main()
//{
//    char s[10000] = { "0"};
//    scanf("%s", s);
//    int len = (int)strlen(s);
//    int check;
//    do
//    {
//        check = len;
//        int i = 0, j = 0,count=0;
//        for (;i<len; )
//        {
//            if (s[i] == s[i + 1])
//            {
//                s[j] = s[i + 2];
//                i += 2;
//                count++;
//            }
//            else
//            {
//                i++; j++;
//                s[j] = s[i];
//                //i++; j++;
//            }
//        }
//        
//        len = check - 2 * count;
//    } while (check != len);
//    for (int i = 0; i < len; i++)
//        printf("%c", s[i]);
//}


//void bubble_sort(int* arr, int sz)//(int arr[],int sz)不要这样写
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
//				flag=0;
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
//	int arr[] = {10,9,8,7,6,5,4,3,2,1,0};
//	int i = 0; int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//	//arr 是数组，对数组arr进行传参
//	//实际上传递过去的是数组arr首元素的地址 ---> &arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//求二进制中数字1的个数
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//
//
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}*/
//
//
//	//优化			每次都把最右边的1消掉
//	int i = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//}

//插排
//void insertion_sort(int arr[], int len)
//{
//	int i, j, key;
//	for (i = 1; i < len; i++)
//	{
//		key = arr[i];
//		j = i - 1;
//		while ((j >= 0) && (arr[j] > key))
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	insertion_sort(arr, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}

//strcat 字符串拼接

//不创建临时变量交换变量的值
//int main()
//{
//	int a = 3, b = 5;
//	//加减法-----数据可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d", a, b);
//
//	//异或方法
//	//a = a ^ b;
//	//b = a ^ b;
//	//a = a ^ b;
//	//printf("%d %d", a, b);
//	//a^b得到一个新密码x	x^原b得原a / x^原a得原b
//	//执行效率不高 可读性不高
//}


//// 交换数组中两个元素的值
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//// 将数组划分为两个子数组，并返回划分点的位置
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];  // 选择数组中最后一个元素作为枢轴
//    int i = low - 1;
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(&arr[i], &arr[j]);
//        }
//    }
//
//    swap(&arr[i + 1], &arr[high]);
//    return i + 1;
//}
//// 快速排序函数
//void quickSort(int arr[], int low, int high) {
//    if (low < high) {
//        // 划分数组，获取划分点位置
//        int pi = partition(arr, low, high);
//
//        // 分别对划分后的两个子数组进行排序
//        quickSort(arr, low, pi - 1);
//        quickSort(arr, pi + 1, high);
//    }
//}
//// 打印数组
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//int main() {
//    int arr[] = { 12, 11, 13, 5, 6, 7 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("原始数组: \n");
//    printArray(arr, n);
//
//    // 进行快速排序
//    quickSort(arr, 0, n - 1);
//
//    printf("排序后的数组: \n");
//    printArray(arr, n);
//
//    return 0;
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


//for (i = 0; i < 30; i++)                                  //初始化数组
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