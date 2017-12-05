#include<iostream>
#include<algorithm>
using namespace std;
struct people
{
	int win=0;
	int draw=0;
	int lose=0;
};
char mymax(int a[])
{
	int max=a[0];
	int maxindex=0;
	for(int i=0;i<3;i++)
		if(a[i]>max)
		{
			max=a[i];
			maxindex=i;
		}
	if(maxindex==0)
		return 'B';
	else if(maxindex==1)
		return 'C';
	else if(maxindex==2)
		return 'J';
}
int main()
{
	int N;
	cin>>N;
	people A,B;
	int array1[]={0,0,0};// 0 B 1 C 2 J
	int array2[]={0,0,0};// 0 B 1 C 2 J
	for(int i=0; i<N; i++)
	{
		char a,b;
		cin>>a>>b;
		if(a==b)
		{
			A.draw++;
			B.draw++;
		}
		else if(a=='C'&&b=='J')
		{
			A.win++;
			array1[1]++;
			B.lose++;
		}
		else if(a=='B'&&b=='C')
		{
			A.win++;
			array1[0]++;
			B.lose++;
		}
		else if(a=='J'&&b=='B')
		{
			A.win++;
			array1[2]++;
			B.lose++;
		}
		else if(a=='J'&&b=='C')
		{
			A.lose++;
			B.win++;
			array2[1]++;
		}
		else if(a=='C'&&b=='B')
		{
			A.lose++;
			B.win++;
			array2[0]++;
		}
		else if(a=='B'&&b=='J')
		{
			A.lose++;
			B.win++;
			array2[2]++;
		}
	}
	cout<<A.win<<" "<<A.draw<<" "<<A.lose<<endl;
	cout<<B.win<<" "<<B.draw<<" "<<B.lose<<endl;
	cout<<mymax(array1)<<" "<<mymax(array2)<<endl;
}
