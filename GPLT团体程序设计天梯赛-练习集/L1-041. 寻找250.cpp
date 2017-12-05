#include<vector>
#include<iostream>
#include<algorithm>
using namespace::std;
int main()
{
	vector<int> number;
	int n;
	char ch;
	while(cin>>n)
	{
		number.push_back(n);
		if(ch=getchar()=='\n')
			break;
	}
	auto iter=find(number.begin(),number.end(),250);
	if(iter==number.end())
		return 0;
	else 
		cout<<distance(number.begin(),iter)+1;
	return 0;
}
