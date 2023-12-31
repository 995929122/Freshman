#include<stdio.h>
#include<windows.h>

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
// void test(int** ptr)
// {
//     printf("%d ",**ptr);
// }
// int main()
// {
//     int n=20;int *p=&n;int **pp=&p;
//     test(pp);
//     test(&p);

//     int* arr[10];
//     test(arr);//√
    
//     return 0;
// }


//              5.函数指针
// int Add(int x,int y)
// {
//     return x+y;   
// }       //函数名就是函数的地址-&函数名=函数名-都是函数的地址
// int main()
// {
//     int a=10,b=20;
//     printf("%d\n",Add(a,b));

//     int (*pa)(int ,int)=Add;
//     printf("%d\n",pa(2,3));
//     printf("%d\n",(pa)(2,3));
//     printf("%d\n",(*pa)(2,3));      //这几种写法完全等效-当然底下两种纯纯逆天
//     printf("%d\n",(**pa)(2,3));     //函数的调用：  函数名（参数）
//     printf("%d\n",(***pa)(2,3));    //函数名=函数地址 -函数地址（参数）
    
//     return 0;
// }


// void Print(char* str)
// {
//     printf("%s\n",str);
// }
// int main()
// {
//     void (*p)(char*)=Print;
//     (*p)("wdnmd");
//     return 0;
// }
//  函数返回类型（*变量名）（函数参数类型）；


//《C陷阱和缺陷》
//代码1
//  (*(void(*)())0)();
//  void(*)()-这是一个函数指针类型-放在（）里-强制类型转换-
//  将0强制转换成函数指针类型-该指针指向的函数是无参返回类型void-
//  *对这个函数指针进行解引用-调用该地址处的函数


//代码2
//  void(*   signal(int,void(*)(int))   )(int);       //函数声明
//  signal函数-第一个参数是int-第二个参数是函数指针类型-去掉函数名及其参数-
//  剩void（*）（int）-函数的返回类型-函数指针-该函数指针指向的函数的参数是int，返回类型是void
//  精简：
//typedef void(*pfun_t)(int) ;//重命名该函数指针类型为pfun_t
//pfun_t signal(int ,pfun_t);





//              6.函数指针数组 
// int Add(int x,int y)
// {
//     return x+y;
// }
// int Sub(int x,int y)
// {
//     return x-y;
// }
// int Mul(int x,int y)
// {
//     return x*y;
// }
// int Div(int x,int y)
// {
//     return x/y;
// }
// int main()
// {
//     //用一个数组存放四个函数的地址-函数指针数组
//     int(*parr[4])(int, int)={Add,Sub,Mul,Div};
//     int i=0;
//     for(i=0;i<4;i++)
//     {
//         printf("%d\n",parr[i](6,3));
//     }
//     return 0;
// }


//函数指针数组的用途：转移表
// void menu()
// {
//     printf("****************************\n");
//     printf("** 1.Add          2.Sub  ***\n");
//     printf("** 3.Mul          4.Div  ***\n");
//     printf("******** 0.exit ************\n");
// }
// int main()
// {
//     int input=0;int x,y;
//     int(*parr[5])(int, int)={0,Add,Sub,Mul,Div};
//     do
//     {
//         menu();
//         scanf("%d",&input);
//         if(input>0&&input<5)
//         {
            
//             scanf("%d%d",&x,&y);
//             printf("%d\n",parr[input](x,y));
//         }
//         else if(input==0)
//         {
//             ;
//         }
//         else{
//             printf("你妈的\n");Sleep((int)1000);
//         }

//     } while (input);
//     //这么做避免了重复繁琐的switch case语句的使用 化简了代码
    
// }

//char* (*pf)(char*,const char*)=my_strcpy;
//char* (*pfArr[4])(char*,const char*)={pf,pf,pf,pf};





//              7.指向函数指针数组的指针
// int main()
// {
//     int (*pfArr[4])(int,int);
//     int (*(*ppfArr[4]))(int,int)=&pfArr;
//     //ppfArr是一个数组指针-指针指向的数组由4个元素
//     //指向的数组的每个元素类型是一个函数指针int(*)(int,int)

//     return 0;
// }




//                8.回调函数
//  一个通过函数指针调用的函数
//如果你把函数的指针（地址）作为参数传递给另一个函数，
//当这个函数被用来调用其所指向的函数时，我们就说这是回调函数
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时
//由另外的一方调用的，用于对该事件或条件进行响应

//比如qsort里的cmp  






