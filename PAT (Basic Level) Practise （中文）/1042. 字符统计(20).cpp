/*
	Name: 1042. 字符统计(20)
	Author: spencercjh
	Date: 2017年9月3日 09:05:55 
	Description:PAT Basic Level C/C++
*/
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int hash[300]={0};
	char str[1001];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
//		cout<<str[i]<<endl;
		if(str[i]>='A'&&str[i]<='Z')
			hash[str[i]-'A'+'a']++;
		else if(str[i]>='a'&&str[i]<='z')
			hash[str[i]]++;
	}
	int* max=max_element(hash,hash+200);
	printf("%c %d",max-hash,*max);
	return 0;
}
