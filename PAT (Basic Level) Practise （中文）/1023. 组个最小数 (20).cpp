#include<iostream>
using namespace std;
int main()
{
	int digit[10],sum=0;
	for(int i=0; i<10; i++)
	{
		cin>>digit[i];
		sum+=digit[i];
	}
	int* ans=new int[sum];
	for(int i=0; i<sum; i++)
		ans[i]=0;
	for(int i=sum-1; i>=0; i--)
		for(int j=9; j>=0; j--)
			if(digit[j])
			{
				ans[i]=j;
				digit[j]--;
				break;
			}
	if(ans[0]==0)
		for(int i=1; i<sum; i++)
			if(ans[i]!=0)
			{
				swap(ans[0],ans[i]);
				break;
			}
	for(int i=0;i<sum;i++)
		cout<<ans[i];
	return 0;
}
