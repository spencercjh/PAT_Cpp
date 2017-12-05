#include<iostream>
#include<cmath>
#include<vector> 
using namespace std;
struct node
{
	int x;	//系数 
	int y;	//指数 
};
int main()
{
	vector<node> V;
	while(true)
	{
		node input;
		cin>>input.x>>input.y;
		if(abs(input.x)>1000||abs(input.y)>1000)
			return 0;
		V.push_back(input);
		if(input.y==0)
			break;
	}
	if(V.size()==1)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	for(int i=0;i<V.size();i++)
	{
		V[i].x=V[i].x*V[i].y;
		V[i].y--;
		if(V[i].x==0)
			V[i].y=0;
	}
	cout<<V[0].x<<" "<<V[0].y;
	for(int i=1;i<V.size();i++)
		if(V[i].x)
			cout<<" "<<V[i].x<<" "<<V[i].y;
	return 0;
}
		
