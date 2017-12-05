#include<iostream>
#include<string>
#include<set>
using namespace::std;
struct node
{
	string name;
	string id;
	int score;
	bool operator <(const node&a) const
	{
		return score>a.score;
	}
};
int main()
{
	int n;
	cin>>n;
	if(n<=0)
		return 0;
	set<node> s;
	for(int i=0;i<n;i++)
	{
		node input;
		cin>>input.name;
		if(input.name.length()>10)
			return 0;
		cin>>input.id;
		if(input.id.length()>10)
			return 0;
		cin>>input.score;
		if(input.score>100||input.score<0)
			return 0;
		s.insert(input);
	}
	auto it1=s.begin();
	auto it2=s.rbegin();
	cout<<it1->name<<" "<<it1->id<<endl;
	cout<<it2->name<<" "<<it2->id<<endl;
	return 0;
}
