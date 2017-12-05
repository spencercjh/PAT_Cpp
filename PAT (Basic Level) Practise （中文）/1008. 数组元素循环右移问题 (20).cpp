#include<iostream>
using namespace::std;
int main()
{
	int N,M;
	cin>>N>>M;
	int *number=new int[N];
	int	*ans=new int[N];
	for(int i=0;i<N;i++)
		cin>>number[i];
	for(int i=0;i<N;i++)
		ans[(i+M)%N]=number[i];
	for(int i=0;i<N;i++)
		if(i!=N-1)
			cout<<ans[i]<<" ";
		else
			cout<<ans[i];
	delete[] number;
	delete[] ans; 
	return 0;
}
