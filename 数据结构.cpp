#include<queue>
#include<stack>
#include<vector>
#include<map>
#include<iostream>
using namespace std;
queue<int> x;
stack<int> y;
vector<int> z;
map<string,int> n;
map<int,int> m;
int main()
{
	//*****queue*****//���� 
	int a=1;
	x.push(a);//��aѹ����� 
	int b=x.front(); //��b��ֵΪx���еĵ�һ��������ֵ 
	x.pop();//����x���еĶ��� 
	x.size();//x���еĴ�С 
	
	
	//*****stack*****//ջ 
	y.push(1);//��1ѹ��ջ
	int c=y.top();//��c��ֵΪyջ�ĵ�һ��������ֵ 
	y.pop();//����yջ�Ķ�ĩ 
	y.size();//yջ�Ĵ�С
	
	
	//*****vector*****//��̬���� 
	z.push_back(1);//��z�д���һ���ռ�洢1 
	cout<<z[0]<<endl;
	
	
	//*****map*****//�ֵ�
	string zhw="zhanghuaiwen";
	n[zhw]=1;
	n["ZHW"]=2;
	m[1482950154180]=3;
	m[-1482950154180]=3;
	cout<<n[zhw]<<endl;
	cout<<n["ZHW"]<<endl;
	cout<<m[1482950154180]<<endl;
	cout<<m[-1482950154180]<<endl;
	
	
	return 0;
}
