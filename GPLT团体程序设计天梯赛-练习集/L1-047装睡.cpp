#include<iostream>
#include<string>
using namespace::std;
struct node
{
	string name;
	int breathe;
	int pulse;
};
int main()
{
	node people[10];
	int N;
	cin>>N;
	if(N>10||N<=0)
		return 0;
	for(int i=0;i<N;i++)//15-20 50-70
	{
		cin>>people[i].name;
		getchar();
		if(people[i].name.length()>3||people[i].name.length()==0)
			return 0;
		cin>>people[i].breathe;
		getchar();
		if(people[i].breathe<=0||people[i].breathe>100)
			return 0;
		cin>>people[i].pulse;
		getchar();
		if(people[i].pulse<=0||people[i].pulse>100)
			return 0;
	}
	for(int i=0;i<N;i++)
		if(people[i].breathe>20||people[i].breathe<15||people[i].pulse<50||people[i].pulse>70)
			cout<<people[i].name<<endl;
	return 0;
}
