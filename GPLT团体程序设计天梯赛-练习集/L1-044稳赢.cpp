#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
using namespace::std;
int main()	//ChuiZi JianDao Bu End
{
	vector<string> caiquan;
	string str;
	int K;
	scanf("%d",&K);
	if(K>10||K<=0)
		return 0;
	while(cin>>str)
	{
		if(str!="ChuiZi"&&str!="JianDao"&&str!="Bu"&&str!="End")
			return 0;
		if(str=="End")
			break;
		caiquan.push_back(str);
	}
	auto iter1=caiquan.begin();
	auto iter2=caiquan.end();
	int i=0;
	while(iter1!=iter2)
	{
		if(i!=K)
		{
			if(*iter1=="ChuiZi")
				cout<<"Bu"<<endl;
			else if(*iter1=="JianDao")
				cout<<"ChuiZi"<<endl;
			else if(*iter1=="Bu")
				cout<<"JianDao"<<endl;
		}
		else if(i==K)
		{
			cout<<*iter1<<endl;
			i=0;
			iter1++;
			continue;
		}
		i++;
		iter1++;
	}
	return 0;
}
		
