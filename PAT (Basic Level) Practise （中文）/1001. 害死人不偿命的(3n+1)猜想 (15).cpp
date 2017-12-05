#include<iostream>
using namespace::std;
int main()
{
while(1)
{	int n;
	cin>>n;
	if(n<0)
		return 0;
	int i=0;
	while(n!=1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=(3*n+1)/2;
		i++;
		cout<<n<<endl;
	}
	cout<<endl;
	cout<<i<<endl<<endl<<endl;
}
	return 0;
}
