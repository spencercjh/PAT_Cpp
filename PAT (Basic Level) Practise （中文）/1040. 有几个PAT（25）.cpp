#include<iostream>
#include<string>
#include<cstring>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
const int MAXN=100010;
const int MOD=1000000007;
char str[MAXN];
int leftnumP[MAXN]={0};
int main()
{
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(i>0)
			leftnumP[i]=leftnumP[i-1];
		if(str[i]=='P')
			leftnumP[i]++;
	}
	int ans=0,rightnumT=0;
	for(int i=len-1;i>=0;i--)
	{
		if(str[i]=='T')
			rightnumT++;
		else if(str[i]=='A')
			ans=(ans+leftnumP[i]*rightnumT)%MOD;
	}
	printf("%d",ans);
	return 0;
}
