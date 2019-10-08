//C++自带的排序函数 sort
//1.添加头文件

#include<algorithm>

//2.使用规则
//通常sort主要是对数组（线性存储）的数据进行排序。
int a[1005];


对下标0~n-1的元素进行排序：sort(a,a+n);   //默认由小到大
对下标1~n的元素进行排序：sort(a+1,a+n+1);  //默认由小到大

//想要由大到小，加入比较函数cmp
bool cmp(int a,int b)
{
    return  a>b;
}
//想要由大到小，加入比较函数cmp
bool cmp(node a,node b)
{
    return  a.x>b.x;
}
对下标0~n-1的元素进行排序：sort(a,a+n,cmp);      //加入比较函数cmp
对下标1~n的元素进行排序：sort(a+1,a+n+1,cmp);   //加入比较函数cmp
