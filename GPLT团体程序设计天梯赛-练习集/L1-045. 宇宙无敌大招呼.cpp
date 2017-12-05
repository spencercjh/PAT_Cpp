#include<string>
#include<iostream>
using namespace::std; 
int main()
{
	string S;
	cin>>S;
	if(S.length()>7)
		return 0;
	cout<<"Hello "<<S<<endl;
	return 0;
}
