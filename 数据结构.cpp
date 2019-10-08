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
	//*****queue*****//队列 
	int a=1;
	x.push(a);//将a压入队列 
	int b=x.front(); //将b赋值为x队列的第一个变量的值 
	x.pop();//弹出x队列的队首 
	x.size();//x队列的大小 
	
	
	//*****stack*****//栈 
	y.push(1);//将1压入栈
	int c=y.top();//将c赋值为y栈的第一个变量的值 
	y.pop();//弹出y栈的队末 
	y.size();//y栈的大小
	
	
	//*****vector*****//动态数组 
	z.push_back(1);//在z中创造一个空间存储1 
	cout<<z[0]<<endl;
	
	
	//*****map*****//字典
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
