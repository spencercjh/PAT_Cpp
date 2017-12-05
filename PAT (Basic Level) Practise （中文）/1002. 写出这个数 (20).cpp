#include<iostream>
#include<string>
#include<vector>
using namespace::std;
int main()
{
	string number;
	cin>>number;
	if(number.length()>100||number.length()==0)
		return 0;
	int sum=0;
	for(int i=0;i<number.length();i++)
	{
		sum+=number[i]-'0';
	}
	vector<string> v;
	while(sum!=0)
	{
		int r=sum%10;
		switch(r)
		{
			case 0:v.push_back("ling");break;
			case 1:v.push_back("yi");break;
			case 2:v.push_back("er");break;
			case 3:v.push_back("san");break;
			case 4:v.push_back("si");break;
			case 5:v.push_back("wu");break;
			case 6:v.push_back("liu");break;
			case 7:v.push_back("qi");break;				
			case 8:v.push_back("ba");break;
			case 9:v.push_back("jiu");break;
		}
		sum/=10;
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		if(i!=0)
			cout<<v[i]<<" ";
		else
			cout<<v[i];
	}
	return 0;
}
