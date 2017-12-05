#include<cstdio>
#include<string>
#include<iostream>
using namespace::std;
struct node
{
	string id;
	int seat1;
	int seat2;
}people[1000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>people[i].id;
		cin>>people[i].seat1;
		cin>>people[i].seat2;
	}
	int m,search[1000];
	scanf("%d",&m);
	if(m>n)
		return 0;
	for(int i=0;i<m;i++)
		scanf("%d",&search[i]);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(search[i]==people[j].seat1)	
				cout<<people[j].id<<" "<<people[j].seat2<<endl;
		}
	}
	return 0;
}
