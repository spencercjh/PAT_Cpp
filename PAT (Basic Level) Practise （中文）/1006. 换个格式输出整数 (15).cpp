#include<iostream>
#include<string>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	if(n>1000||n<=0)
		return 0;
	int bai,shi,ge;
	bai=n/100;
	shi=n/10%10;
	ge=n%10;
	if(bai!=0)
		for(int i=0;i<bai;i++)
			cout<<"B";
	if(shi!=0)
		for(int i=0;i<shi;i++)
			cout<<"S";
	if(ge!=0)
		for(int i=1;i<=ge;i++)
			cout<<i;
	return 0;
}
