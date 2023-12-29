#include<stdio.h>


//const int*p=&a;
//可以通过a改变a的值 可以给p赋别的地址。不能通过*p改变量的值
//int* const p=&a;
//可以通过*p，啊，改变a的值，不能给p赋别的地址
//指针的进阶

// void test(int arr[])
// {
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     printf("%d",sz);
// }
// int main()
// {
//     int arr[10]={0};
//     test(arr);

//     return 0;
// }
//这段代码在64位机器得到2；32位机器得到1
//因为arr(数组名)是个地址，地址存放到指针里，64位机器的指针大小为8字节


//              1.字符指针

// int main()
// {
//     //char ch='w';
//     //char* pc=&ch;
//     //pc就是个字符指针

//     // char arr[]="abcdef";
//     // char* pc=arr;
//     // printf("%s\n",pc);
//     // printf("%s\n",arr);

//     const char *p="abcdef";//"abcdef"是一个常量字符串 p存的是a的地址
//     printf("%s\n",p);

//     //*p='W';             //此处会报错（在不加const的情况下）
//     //Segment fault-段错误  访问了非法内存  abcdef不能改
//     //当然加了之后报错更明显 编译阶段就不会通过（表达式左侧必须是可修改的左值）
//     printf("%s\n",p);
//     return 0;
// }


//一道面试题
// int main()
// {
//     char arr1[]="abcdef";
//     char arr2[]="abcdef";
//     /*const*/ char* p1="abcdef";
//     /*const*/ char* p2="abcdef";

//     if(p1==p2)
//         printf("hehe\n");
//     else
//         printf("haha\n");
//     //hehe
//     //abcdef作为常量只存一份 p1和p2存的地址都指向这份abcdef 故相等
//     if(arr1==arr2)
//         printf("hehe\n");
//     else
//         printf("haha\n");
//     //haha
//     //arr1和arr2是首元素地址，两个abcdef存在不同内存空间 所以不等

//     return 0;
// }



//              2.指针数组
// int main()
// {
//     //int arr[10]={0};
//     //char ch[5]={0};
//     //int* parr[4];//存放整型指针的数组
//     //char* pch[5];//存放字符指针的数组

//     int arr1[]={1,2,3,4};
//     int arr2[]={4,5,6,7};
//     int arr3[]={1,2,3,5};
//     int *parr[]={arr1,arr2,arr3};
//     //将分离的三个数组在内存中通过地址连接在一起；

//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         int j=0;
//         for(j=0;j<4;j++)
//         {
//             printf("%d",*(parr[i]+j));
//         }
//         printf("\n");
//     }
// }
//
//  char *arr2[4];  一级字符指针的数组
//  char **arr3[6]; 二级字符指针的数组



//              3.数组指针
// int main()
// {
//     int  *p=NULL;char *pc=NULL;//指向整型/字符的指针

//     //数组指针-指向数组的指针-存放数组的地址
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int (*pa)[10]=&arr;
//     //上面的p就是数组指针-先和*结合-方括号说明指针数组

//     char* brr[5];//指针数组
//     char*(*pb)[5]=&brr;//指针数组指针
//     //*说明是指针-pb是指针变量的名字-[5]说明pa指向的数组有五个元素-char*说明pa指向的数组的元素类型
//     //数组地址+1，跳过整个数组-元素地址+1，跳过一个元素

//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",(*pa)[i]);
//     }//当然数组指针不是这么用的
//     return 0;
// }
//
// void print1(int arr[3][5],int x,int y)
// {
//     int i=0,j=0;
//     for(i=0;i<x;i++)
//     {
//         for(j=0;j<y;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void print2(int (*p)[5],int x,int y)
// {
//     int i=0,j=0;
//     for(i=0;i<x;i++)
//     {
//         for(j=0;j<y;j++)
//             printf("%d ",*(*(p+i)+j));//(*p+i)[j];也能实现
//         printf("\n");
//     }
// }
// int main()
// {
//      //一般用于二维以上数组
//     int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//     print1(arr,3,5);//arr-数组名-首元素地址-第一行的地址
//     print2(arr,3,5);


//     int arr[5];
//     int *parr1[10];             //指针数组
//     int (*parr2)[10];           //数组指针
//     int (*parr3[10])[5];        //parr3是一个数组-该数组有10个元素-每个元素是数组指针-每个数组指针指向的数组有五个元素-元素类型是int
//     //去掉parr2剩下的就是他的类型 
//     return 0;
// }



//              4.数组参数、指针参数
//  一维数组传参
// void tesr(int arr[]){}//√
// void test(int arr[10]){}//√
// void test(int *arr){}//√
// void test2(int *arr[20]){}//√   -20可以省略
// void test2(int **arr){}//√
// int main()
// {
//     int arr[10]={0};
//     int *arr2[20]={0};
//     test(arr);
//     test2(arr2);

//     return 0;
// }

//      二维数组传参
// void test(int arr[3][5]){}//√
// void test1(int arr[][5]){}//√
// //void test2(int arr[3][]){}//err
// //void test3(int *arr){}//err
// //void test4(int **arr){}//err
// void test5(int (*arr)[5]){}
// int main()
// {
//     int arr[3][5]={0};
//     test(arr);
//     test1(arr);
//     test5(arr);
    
//     return 0;
// }

//     指针做参数
//一级指针
// void test1(int *p){}
// int main()
// {
//     int a=10;int *p1=&a;
//     test1(&a);//√
//     test1(p1);//√
// }

//二级指针
void test(int** ptr)
{
    printf("%d ",**ptr);
}
int main()
{
    int n=20;int *p=&n;int **pp=&p;
    test(pp);
    test(&p);

    int* arr[10];
    test(arr);//√
    
    return 0;
}


//              5.函数指针