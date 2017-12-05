#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,m=0;
	string str;
	cin>>str>>n;
	if(str.length()==1 &&str[0]-'0'<n)
		cout<<"0 "<<str[0]-'0'<<endl;
	else
	{
		for(int i=0; i<str.length(); i++)
		{
			if(i>0 && m==0 && str[i]-'0'<n)
				cout<<"0";
			m=m*10+str[i]-'0';
			if(m/n>0)
			{
				cout<<m/n;
				m=m%n;
			}
		}
		cout<<" "<<m<<endl;
	}
	return 0;
}
