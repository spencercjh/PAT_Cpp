#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
using namespace::std;
int main()
{
	int N;
	scanf("%d",&N);
	int* student=new int[N+1]{0};
	for(int i=0;i<N;i++)
	{
		int index,score;
		scanf("%d %d",&index,&score);
		student[index]+=score;		
	}
	int* max=max_element(student,student+N+1);
	cout<<max-student<<" "<<*max;
	return 0;
}
