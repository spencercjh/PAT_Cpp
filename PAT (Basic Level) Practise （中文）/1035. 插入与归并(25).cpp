#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
const int N=111;
int origin[N],tempori[N],changed[N];
int n;
bool issame(int A[],int B[])
{
	for(int i=0; i<n; i++)
	{
		if(A[i]!=B[i])
			return false;
	}
	return true;
}
bool showarray(int A[])
{
	for(int i=0; i<n; i++)
	{
		printf("%d",A[i]);
		if(i<n-1)
			printf(" ");
	}
	printf("\n");
}
bool insertsort()
{
	bool flag=false;
	for(int i=1; i<n; i++)
	{
		if(i!=1&&issame(tempori,changed))
			flag=true;
		int temp=tempori[i],j=i;
		while(j>0&&tempori[j-1]>temp)
		{
			tempori[j]=tempori[j-1];
			j--;
		}
		tempori[j]=temp;
		if(flag==true)
			return true;
	}
	return false;
}
void mergesort()
{
	bool flag=false;
	for(int step=2; step/2<=n; step*=2)
	{
		if(step!=2&&issame(tempori,changed))
			flag=true;
		for(int i=0; i<n; i+=step)
			sort(tempori+i,tempori+min(i+step,n));
		if(flag==true)
		{
			showarray(tempori);
			return;
		}
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&origin[i]);
		tempori[i]=origin[i];
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&changed[i]);
	}
	if(insertsort())
	{
		printf("Insertion Sort\n");
		showarray(tempori);
	}
	else
	{
		printf("Merge Sort\n");
		for(int i=0;i<n;i++)
		{
			tempori[i]=origin[i];
		}
		mergesort();
	}
	return 0;
}
