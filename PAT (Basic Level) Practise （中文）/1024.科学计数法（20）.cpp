#include<iostream>
#include<string>
#include<algorithm>
using namespace::std;
int main()
{
	string str;
	str.resize(10010);
	cin>>str;
	int posE;
	for(int i=0; i<str.length(); i++)
		if(str[i]=='E')
			posE=i;
	if(str[0]=='-')
		printf("-");
	int numexp=0;
	for(int i=posE+2; i<str.length(); i++)
		numexp=numexp*10+(str[i]-'0');
//	cout<<"numexp:"<<numexp<<endl;
	if(numexp==0)
	{
		cout<<1;
		return 0;
	}
	if(str[posE+1]=='-')
	{
		printf("0.");
		for(int i=0; i<numexp-1; i++)
			printf("0");
		for(int i=1; i<posE; i++)
		{
			if(str[i]!='.')
				cout<<str[i];
		}
	}
	else
	{
		for(int i=1; i<posE; i++)
		{
			if(str[i]=='.')
				continue;
			cout<<str[i];
			if(i==numexp+2&&posE-3!=numexp)
				printf(".");
		}
	}
	for(int i=0; i<numexp-(posE-3); i++)
		printf("0");
	return 0;
}
