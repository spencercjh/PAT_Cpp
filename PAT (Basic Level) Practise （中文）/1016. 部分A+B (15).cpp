#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string A,B;	//A,B
	char DA,DB;//DA,DB
	int n1=0,n2=0;//DA在A中出现的个数，DB在B中出现的个数 
	int na,nb,ansa=0,ansb=0;//DA，DB转为int型numberA，numberB 
	cin>>A>>DA>>B>>DB;
	for(int i=0;i<A.length();i++)
		if(DA==A[i])
			n1++;
	for(int i=0;i<B.length();i++)
		if(DB==B[i])
			n2++;
	na=DA-'0';
	nb=DB-'0';
	for(int i=n1-1;i>=0;i--)
		ansa+=pow(10,i)*na;
	for(int i=n2-1;i>=0;i--)
		ansb+=pow(10,i)*nb;
	cout<<ansa+ansb<<endl;
	return 0;
}
