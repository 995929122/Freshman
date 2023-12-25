//qsort函数原型
void qsort(
    void *base,
    size_t nmemb,
    size_t size,
    int (*compar)(const void *, const void *)
    );

    //compar参数
    int compar(const void *p1, const void *p2);
//如果compar返回值小于0（< 0），那么p1所指向元素会被排在p2所指向元素的前面 
//如果compar返回值等于0（= 0），那么p1所指向元素与p2所指向元素的顺序不确定 
//如果compar返回值大于0（> 0），那么p1所指向元素会被排在p2所指向元素的后面 
//因此，如果想让qsort()进行从小到大（升序）排序，那么一个通用的compar函数可以写成这样：

 int compare (const void * a, const void * b)
 {
   if ( *(MyType*)a <  *(MyType*)b ) return -1;
   if ( *(MyType*)a == *(MyType*)b ) return 0;
   if ( *(MyType*)a >  *(MyType*)b ) return 1;
 }
 //注意：你要将MyType换成实际数组元素的类型。 或者

//升序排序
 int compare (const void * a, const void * b)
 {
     return ( *(int*)a - *(int*)b );
 }
//降序排列
 int compare (const void * a, const void * b)
 {
     return ( *(int*)b - *(int*)a );
 }
//int数组
 int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
//结构体
int cmp(const void* a, const void* b)
{
    st* pa = (st*)a;
    st* pb = (st*)b;
    int num1 = pa->Chinese + pa->English + pa->Math;
    int num2 = pb->Chinese + pb->English + pb->Math;

    //return (int)num1 - num2;   // 从小到大，
    return (int)num2 - num1;   //  从大到小
}
//字符串指针数组
int compare(const void *arg1, const void *arg2) {
    char *a = *(char**)arg1;
    char *b = *(char**)arg2;
    int result = strcmp(a, b);
    if (result > 0) {
        return 1;
    }
    else if (result < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
//字符串二维数组
int compare(const void *arg1, const void *arg2) {
    char *a = (char*)arg1;
    char *b = (char*)arg2;
    int result = strcmp(a, b);
    if (result > 0) {
        return 1;
    }
    else if (result < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
//整型二维数组
/* qsort排序二维数组，cmp的每个元素都是一个独立的 int 数组，也就是指针 */
int cmp(const void* a, const void* b) {

    // 转换为对应一维数组
    int* arry1 = *(int**)a;
    int* arry2 = *(int**)b;

    // 获取对应arry1 的两个元素
    int x1 = *arry1;
    int y1 = *(arry1 + 1);

    int x2 = *arry2;
    int y2 = *(arry2+1);

    return (x1*x1 + y1*y1) - (x2*x2 + y2*y2);
}