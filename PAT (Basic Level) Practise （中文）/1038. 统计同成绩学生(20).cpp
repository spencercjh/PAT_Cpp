#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int hash[101];
	for(int i=0;i<101;i++)
		hash[i]=0;
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		int input;
		scanf("%d",&input);
		hash[input]++;
	}
	int K;
	scanf("%d",&K);
	int* array=new int[K];
	for(int i=0;i<K;i++)
		scanf("%d",&array[i]);
	for(int i=0;i<K;i++)
	{
		if(i!=K-1)
			printf("%d ",hash[array[i]]);
		else
			printf("%d",hash[array[i]]);
	}
	return 0;
}	
