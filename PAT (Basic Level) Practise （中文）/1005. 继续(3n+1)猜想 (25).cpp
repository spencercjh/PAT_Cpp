#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace::std;
int main()
{
	int K;
	cin>>K;
	if(K>100||K<=0)
		return 0;
	set<int> s;
	int *n=new int[K];
	int *ori=new int[K];
	for(int i=0;i<K;i++)
	{	
		cin>>n[i];
		ori[i]=n[i];
		if(n[i]>100||n[i]<1)
			return 0;
	}
	for(int i=0;i<K;i++)
	{
		while(n[i]!=1)
		{
			if(n[i]%2==0)
			{
				n[i]/=2;
				s.insert(n[i]);
			}
			else
			{
				n[i]=(3*n[i]+1)/2;
				s.insert(n[i]);
			}
		}
	}
	vector<int> answer;
	for(int i=0;i<K;i++)
	{
		auto it=s.find(ori[i]);
		if(it!=s.end())
			continue;
		else
			answer.push_back(ori[i]);
	}
	reverse(answer.begin(),answer.end());
	for(int i=0;i<answer.size();i++)
	{
		if(i!=answer.size()-1)
			cout<<answer[i]<<" ";
		else
			cout<<answer[i];
	}
	return 0;
}		
