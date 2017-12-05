/*
	Name:L1-027 出租（20 分）
	Author: spencercjh
	Date:2017年9月11日 20:04:13 
	Description:GPLT LEVEL 1
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace::std;
int main()
{
	bool hash[10]={false};
	string inputnum;
	cin>>inputnum;
	vector<int> tel(11);
	vector<int> arr;
	vector<int> index;
	for(int i=0,t=0;i<inputnum.length();i++,t++)
	{
		tel[i]=inputnum[t]-'0';
		hash[tel[i]]=true;
	}
	for(int i=9;i>=0;i--)
		if(hash[i])
			arr.push_back(i);
	for(int i=0;i<tel.size();i++)
	{
		auto it=find(arr.begin(),arr.end(),tel[i]);
		index.push_back(distance(arr.begin(),it));
	}
	cout<<"int[] arr = new int[]{";
	for(int i=0;i<arr.size();i++)
		if(i==arr.size()-1)
			cout<<arr[i]<<"};";
		else
			cout<<arr[i]<<",";
	cout<<"\nint[] index = new int[]{";
	for(int i=0;i<index.size();i++)
		if(i==index.size()-1)
			cout<<index[i]<<"};";
		else
			cout<<index[i]<<",";
	return 0;
}
