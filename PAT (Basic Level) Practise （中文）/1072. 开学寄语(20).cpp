/*
	Name: 1072. 开学寄语(20)
	Author: spencercjh
	Date: 2017年9月18日 08:43:09
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<numeric>
using namespace::std;
struct object
{
	int id;
	int falsenum=0;
	bool flag=false;
};
struct student
{
	string name;
	int objamount;
	object obj[11];
};
int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	object hash[10001];
	for(int i=0;i<M;i++)
	{
		int id;
		scanf("%d",&id);
		hash[id].flag=true;
	}
	vector<student> stu(N);
	for(int i=0;i<N;i++)
	{
		student input;
		cin>>input.name>>input.objamount;
		for(int j=0;j<input.objamount;j++)
		{
			scanf(" %d",&input.obj[j].id);
			if(hash[input.obj[j].id].flag==true)
				input.obj[j].flag=true;
		}
	}
	for(int i=0;i<stu.size();i++)
	{
		cout<<stu[i].name<<" "<<stu[i].objamount<<" ";
		for(int j=0;j<stu[i].objamount;j++)
			cout<<stu[i].obj[j].id<<" ";
		cout<<endl;
	}
	
	return 0;
}
