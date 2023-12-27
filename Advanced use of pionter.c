#include<stdio.h>

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


//      1.字符指针

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



//          2.指针数组
int main()
{
    //int arr[10]={0};
    //char ch[5]={0};
    //int* parr[4];//存放整型指针的数组
    //char* pch[5];//存放字符指针的数组

    int arr1[]={1,2,3,4};
    int arr2[]={4,5,6,7};
    int arr3[]={1,2,3,5};
    int *parr[]={arr1,arr2,arr3};
    //将分离的三个数组在内存中通过地址连接在一起；

    int i=0;
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<4;j++)
        {
            printf("%d",*(parr[i]+j));
        }
        printf("\n");
    }
}

//  char *arr2[4];  一级字符指针的数组
//  char **arr3[6]; 二级字符指针的数组


