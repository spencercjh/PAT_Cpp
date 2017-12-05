#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int day,hour,minute;
	int dayflag=0;
	for(int i=0; i<s1.length(); i++)
		if(s1[i]>='A'&&s1[i]<='Z')
			if(s1[i]==s2[i])
			{
				day=s1[i]-'A'+1;
				dayflag=i;
				break; 			
			}
	for(int i=dayflag+1; i<s1.length(); i++)
		if(s1[i]>='A'&&s1[i]<='Z')
			if(s1[i]==s2[i])
			{
				if(s1[i]>='a'&&s1[i]<='z')
					hour=s1[i]-'a'+10;
				else if(s1[i]>='A'&&s1[i]<='Z')
					hour=s1[i]-'A'+10;
			}
	for(int i=0; i<s3.length(); i++)
	{
		if(s3[i]>='a'&&s3[i]<='z'||s3[i]>='A'&&s3[i]<='Z')
			if(s4.find(s3[i])!=string::npos)
			{
				minute=s4.find(s3[i]);
				break;
			}
	}
	if(day==1)
		cout<<"MON ";
	else if(day==2)
		cout<<"TUE ";
	else if(day==3)
		cout<<"WED ";
	else if(day==4)
		cout<<"THU ";
	else if(day==5)
		cout<<"FRI ";
	else if(day==6)
		cout<<"SAT ";
	else if(day==7)
		cout<<"SUN ";
	cout<<hour<<":";
	printf("%02d",minute);
	return 0;
}

