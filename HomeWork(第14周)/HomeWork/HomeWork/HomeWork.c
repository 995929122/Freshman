#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int n;
//	while(scanf("%d", &n)!=EOF)
//	{
//		long long sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			long long  m;
//			scanf("%lld", &m);
//			sum += m;
//		}
//		if ((n % 2) == 0 || (sum % 2) == 0)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//}




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




//1611: 21级期末机试 - 谍影寻踪（10分）

//#include<stdio.h>
//#include<stdlib.h>
//struct person {
//    int x, y, z;
//    struct person* next;
//};
//int main()
//{
//    int i, n;
//    while (scanf("%d", &n) != EOF)
//    {
//        struct person* f, * r, * p, * q, * t;
//        for (i = 1; i <= n; i++)
//        {
//            p = malloc(sizeof(struct person));
//            q = malloc(sizeof(struct person));
//            scanf("%d,%d->%d,%d", &(p->x), &(p->y), &(q->x), &(q->y));
//            p->z = q->z = 0;
//            p->next = q, q->next = NULL;
//            if (i == 1) f = p, r = q, t = p;  /*t指向倒数第2个结点*/
//            else {
//                if (f->x == p->x)  /*与第一组重复*/
//                {
//                    if (f->y != p->y) f->z = p->y;
//                    if (f->next->y != q->y) f->next->z = q->y;
//                }
//                if (r->x == q->x)  /*与最后一组重复*/
//                {
//                    if (r->y != q->y)  r->z = q->y;
//                    if (t->y != p->y)  t->z = p->y;
//                }
//                if (r->x == p->x) {
//                    r->next = q;
//                    if (r->y != p->y) r->z = p->y;
//                    t = r; r = q;
//                }
//                if (f->x == q->x) {
//                    p->next = f;
//                    if (f->y != q->y) f->z = q->y;
//                    f = p;
//                }
//            }
//        }
//        while (f != r) {
//            if (f->z == 0)
//                printf("%d,%d->", f->x, f->y);
//            else
//                printf("%d,%d#%d->", f->x, f->y, f->z);
//            f = f->next;
//        }
//        if (f->z == 0)
//            printf("%d,%d\n", f->x, f->y);
//        else
//            printf("%d,%d#%d\n", f->x, f->y, f->z);
//    }
//    return 0;
//}



//int main()
//{
//	char str[10000] = { 0 };
//	scanf("%s", str);
//	char a[10000] = { 0 };
//	int top = 0;
//	a[0] = str[0]; int i;
//	for (i = 1; i <= strlen(str); i++)
//		if (a[top] == str[i])	top--;
//		else a[(++top)] = str[i];
//	for (int j = 0;  j< top; j++)
//		printf("%c", a[j]);
//}
//基于堆栈解决问题1011——相邻相同字母删除;