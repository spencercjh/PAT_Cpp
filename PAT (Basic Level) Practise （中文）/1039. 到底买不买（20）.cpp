#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int hash1[200];
	for(int i=0; i<200; i++)
		hash1[i]=0;
	int hash2[200];
	for(int i=0; i<200; i++)
		hash2[i]=0;
	string str,want;
	cin>>str>>want;
	for(int i=0; i<str.length(); i++)
		hash1[str[i]]++;
	for(int i=0; i<want.length(); i++)
		hash2[want[i]]++;
	bool flag=true;
	int no=0;
	for(int i=0; i<want.length(); i++)
	{
		if(hash1[want[i]]==0)
		{
			flag=false;
			no++;
		}
		else if(hash1[want[i]]<hash2[want[i]]&&hash1[want[i]]!=0)
		{
			flag=false;
			no+=hash2[want[i]]-hash1[want[i]];
			hash2[want[i]]=-1;
		}
	}
	if(flag==false)
		printf("No %d",no);
	else
		printf("Yes %d",str.length()-want.length());
	return 0;
}
