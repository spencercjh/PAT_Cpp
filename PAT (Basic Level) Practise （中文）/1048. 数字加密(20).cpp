/*
	Name: 1048. 数字加密(20)
	Author: spencercjh
	Date: 2017年9月3日 13:45:43 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
const int maxn=110;
char A[maxn],B[maxn],ans[maxn]={0};
void reverse(char s[])
{
	int len=strlen(s);
	for(int i=0;i<len/2;i++)
	{
		int temp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=temp;
	}
}
int main()
{
	scanf("%s %s",A,B);
	reverse(A);
	reverse(B);
	int lenA=strlen(A);
	int lenB=strlen(B);
	int len=max(lenA,lenB);
	for(int i=0;i<len;i++)
	{
		int numA=i<lenA?A[i]-'0':0;
		int numB=i<lenB?B[i]-'0':0;
		if(i%2==0)
		{
			int temp=(numB+numA)%13;
			if(temp==10)
				ans[i]='J';
			else if(temp==11)
				ans[i]='Q';
			else if(temp==12)
				ans[i]='K';
			else
				ans[i]=temp+'0';
		}
		else
		{
			int temp=numB-numA;
			if(temp<0)
				temp+=10;
			ans[i]=temp+'0';
		}
	}
	reverse(ans);
	puts(ans);
	return 0;
}
