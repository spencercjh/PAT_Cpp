#include<string>
#include<iostream>
#include <sstream> 
#include<cstdio>
using namespace::std;
bool isint(const string &str,int &number)
{
	string input=str;
	input.erase(0, input.find_first_not_of(" "));
	input.erase(input.find_last_not_of(" ") + 1);
	if (input.empty()) 
		return false;
	stringstream sin(input);
	if (!(sin >> number)) 
		return false;
	string output=to_string(number);
	if (output.length() != input.length()) 
		return false;
	return true;
}
int main()
{
	string a,b;
	cin>>a;
	getchar();
	cin>>b;
	getchar();
	//cout<<b<<endl; 
	int numbera,numberb;
	if(a.length()!=0&&b.length()!=0)
	{
		if(isint(a,numbera)&&isint(b,numberb))
		{
			if((numbera>=1&&numbera<=1000)&&(numberb<=1000&&numberb>=1))
				printf("%d + %d= %d\n",numbera,numberb,numbera+numberb);
			else if((numbera<1||numbera>1000)&&(numberb<=1000&&numberb>=1))
				printf("? + %d = ?\n",numberb);
			else if((numbera>=1&&numbera<=1000)&&(numberb<1||numberb>1000))
				printf("%d + ? = ?\n",numbera);
			else if((numberb<1||numberb>1000)&&(numbera<1||numbera>1000))
				printf("? + ? = ?\n");
		}
		else if(isint(a,numbera)&&!isint(b,numberb))
		{
			if(numbera>=1&&numbera<=1000)
				printf("%d + ? =?\n",numbera);
			else
				printf("? + ? = ?\n");
		}
		else if(isint(b,numberb)&&!isint(a,numbera))
		{
			if(numberb>=1&&numberb<=1000)
				printf("? + %d = ?\n",numberb);
			else
				printf("? + ? = ?\n");
		}
		else if(!isint(a,numbera)&&!isint(b,numberb))
			printf("? + ? = ?\n");
		return 0;
	}
	else
		return 0;
}
