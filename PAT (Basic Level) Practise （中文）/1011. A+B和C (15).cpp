#include<iostream>
#include<cmath>
using namespace std;
bool compare(long long int A,long long int B,long long int C)
{
	return A+B>C;
}
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int A,B,C;
		cin>>A>>B>>C;
		if(compare(A,B,C))
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
	}
	return 0;
}
