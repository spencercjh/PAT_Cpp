#include<iostream>
using namespace::std;
int main()
{
	int c1,c2;
	cin>>c1>>c2;
	int ans=(c2-c1)/100;
	if((c2-c1)%100>=50)
		ans++;
	printf("%02d:%02d:%02d",ans/3600,ans%3600/60,ans%60);
	return 0;
}
