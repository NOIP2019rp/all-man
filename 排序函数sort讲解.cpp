//C++�Դ��������� sort
//1.���ͷ�ļ�

#include<algorithm>

//2.ʹ�ù���
//ͨ��sort��Ҫ�Ƕ����飨���Դ洢�������ݽ�������
int a[1005];


���±�0~n-1��Ԫ�ؽ�������sort(a,a+n);   //Ĭ����С����
���±�1~n��Ԫ�ؽ�������sort(a+1,a+n+1);  //Ĭ����С����

//��Ҫ�ɴ�С������ȽϺ���cmp
bool cmp(int a,int b)
{
    return  a>b;
}
//��Ҫ�ɴ�С������ȽϺ���cmp
bool cmp(node a,node b)
{
    return  a.x>b.x;
}
���±�0~n-1��Ԫ�ؽ�������sort(a,a+n,cmp);      //����ȽϺ���cmp
���±�1~n��Ԫ�ؽ�������sort(a+1,a+n+1,cmp);   //����ȽϺ���cmp
