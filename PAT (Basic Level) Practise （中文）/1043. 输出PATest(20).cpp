/*
	Name: 1043. 输出PATest(20)
	Author: spencercjh
	Date: 2017年9月3日 09:21:45
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
const int maxn=100010;
int main()
{
	char str[maxn],dict[6]= {'P','A','T','e','s','t'};
	int hashtable[6]= {0};
	gets(str);
	int len=strlen(str),sum=0;
	for(int i=0; i<len; i++)
		for(int j=0; j<6; j++)
			if(str[i]==dict[j])
			{
				hashtable[j]++;
				sum++;
			}
	while(sum>0)
	{
		for(int i=0; i<6; i++)
			if(hashtable[i]>0)
			{
				printf("%c",dict[i]);
				hashtable[i]--;
				sum--;
			}
	}
	return 0;
}
