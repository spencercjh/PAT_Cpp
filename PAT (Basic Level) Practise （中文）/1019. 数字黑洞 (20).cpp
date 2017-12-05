#include<iostream>
#include<algorithm>
using namespace std;
int* function(int* a,int* b,int w)
{
	int* c=new int[w];
	for(int i=w-1; i>=0; i--)
	{
		if(a[i]<b[i])
		{
			a[i-1]--;
			a[i]+=10;
		}
		c[i]=a[i]-b[i];
	}
	return c;
}
int main()
{
	int N,w=0;
	scanf("%d",&N);
	int n=N;
	while(n)
	{
		n/=10;
		w++;
	}
//	if(w!=4)
//		return 0;
	n=N;
	int* num=new int[w];
	int* rev=new int[w];
	for(int i=0; i<w; i++)
	{
		num[i]=0;
		rev[i]=0;
	}
	int j=w-1;
	while(n)
	{
		num[j]=n%10;
		rev[j]=n%10;
		j--;
		n/=10;
	}
	while(true)
	{
		sort(num,num+w);
		reverse(num,num+w);
		sort(rev,rev+w);
		for(int i=0; i<w; i++)
			cout<<num[i];
		cout<<" - ";
		for(int i=0; i<w; i++)
			cout<<rev[i];
		cout<<" = ";
		int* ans=function(num,rev,w);
		for(int i=0; i<w; i++)
			cout<<ans[i];
		cout<<endl;
		if(ans[0]==6&&ans[1]==1&&ans[2]==7&&ans[3]==4)
			break;
		else if(ans[0]==0&&ans[1]==0&&ans[2]==0&&ans[3]==0)
			break;
		else
		{
			for(int i=0; i<w; i++)
			{
				num[i]=ans[i];
				rev[i]=ans[i];
			}
		}
	}
	return 0;
}
