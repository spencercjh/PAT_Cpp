/*
	Name: 1057. 数零壹(20)
	Author: spencercjh
	Date: 2017年9月4日 15:50:32 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	string str;
	getline(cin,str);
	int sum=0;
	for(int i=0;i<str.length();i++)
		if(str[i]>='a'&&str[i]<='z')
			sum+=str[i]-'a'+1;
		else if(str[i]>='A'&&str[i]<='Z')
			sum+=str[i]-'A'+1;
	int r,zero=0,one=0;
	while(sum!=0)
	{
		r=sum%2;
		if(r==0)
			zero++;
		else if(r==1)
			one++;
		sum/=2;
	}
	cout<<zero<<" "<<one<<endl;
	return 0;
}
