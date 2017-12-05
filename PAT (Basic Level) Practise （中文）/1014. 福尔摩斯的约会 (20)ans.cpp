#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int mark=0;
	for(int i=0; i<s1.size()&&i<s2.size(); i++)
		if(s1[i]==s2[i]&&(s1[i]>='A'&&s1[i]<='G'))
		{
			switch(s1[i])
			{
				case 'A':
					cout<<"MON ";
					break;
				case 'B':
					cout<<"TUE ";
					break;
				case 'C':
					cout<<"WED ";
					break;
				case 'D':
					cout<<"THU ";
					break;
				case 'E':
					cout<<"FRI ";
					break;
				case 'F':
					cout<<"SAT ";
					break;
				case 'G':
					cout<<"SUN ";
					break;
			}
			mark=i;
			break;
		}
	for(int j=mark+1; j<s1.size()&&j<s2.size(); j++)
		if(s1[j]==s2[j]&&(s1[j]>='A' &&s1[j]<='N' || s1[j]>='0'&&s1[j]<='9'))
		{
			if(s1[j]>='A'&&s1[j]<='N')
			{
				int x=s1[j]-'A'+10;
				cout<<x/10<<x%10<<":";
			}
			else
			{
				int y=s1[j]-'0';
				cout<<y/10<<y%10<<":";
			}
			break;
		}
	for(int k=0; k<s3.size()&&k<s4.size(); k++)
		if(s3[k]==s4[k]&&(s3[k]>='A'&&s3[k]<='Z'||s3[k]>='a'&&s3[k]<='z'))
			cout<<k/10<<k%10<<endl;
	return 0;
}
